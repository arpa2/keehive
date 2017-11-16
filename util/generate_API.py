from sys import argv, exit, stderr
import getopt
import os.path
import logging
import re
import sys

from asn1ate.sema import *
from generator import QuickDER2gijs


logger = logging.getLogger(__name__)


def parse_opts(script_name, script_args, langopt=None):
    casesyntax = re.compile('^(?:([A-Z][A-Za-z0-9-]*)=)?((?:([0-9]*-)?[0-9]+)(?:,(?:[0-9]*-)?[0-9]+)*)$')
    cases2find = re.compile('(?:([0-9]*)(-))?([0-9]+)')
    incdirs = []
    langsel = set()
    testcases = {}
    
    if not langopt:
        langopt = ['c', 'python']
    
    opts, restargs = getopt.getopt(script_args, 'vI:l:t:', longopts=langopt)
    for (opt, optarg) in opts:
        if opt == '-I':
            incdirs.append(optarg)
        elif opt == '-v':
            logger.debug.enable = True
        elif opt == '-l':
            if optarg not in langopt:
                sys.stderr.write(
                    'No code generator backend for ' + optarg + '\nAvailable backends: ' + ', '.join(langopt) + '\n')
                sys.exit(1)
            langsel.add(optarg)
        elif opt == '-t':
            m = casesyntax.match(optarg)
            if m is None:
                sys.stderr.write('Wrong syntax for -t [asn1id=][[ddd]-]ddd,...\n')
                sys.exit(1)
            asn1id = m.group(1) or ''
            series = m.group(2)
            for (start, dash, end) in cases2find.findall(series):
                end = int(end)
                if len(start) > 0:
                    start = int(start)
                elif len(dash) == 0:
                    start = end
                else:
                    start = 0
                if not asn1id in testcases:
                    testcases[asn1id] = []
                testcases[asn1id].append((start, end))
        elif optarg[:2] == '--' and optarg[2:] in langopt:
            langsel.add(optarg)
        else:
            sys.stderr.write(
                'Usage: {} [-I incdir] [-l proglang] [-t testcases] ...'
                ' main.asn1 [dependency.asn1] ...\n'.format(script_name))
            sys.exit(1)

    if len(langsel) == 0:
        langsel = set(langopt)
    incdirs.append(os.path.curdir)
    
    return restargs, incdirs, langsel, testcases


def main(script_name, script_args):
    """The main program asn2quickder is called with one or more .asn1 files,
       the first of which is mapped to a C header file and the rest is
       loaded to fulfil dependencies.
    """
    # Test case notation: [asn1id=] [[ddd]-]ddd ...

    restargs, incdirs, langsel, testcases = parse_opts(script_name, script_args)


    defmods = {}
    refmods = {}

    for file_ in restargs:
        modnm = os.path.basename(file_).lower()
        logger.debug('Parsing ASN.1 syntaxdef for "{}"'.format(modnm))
        with open(file_, 'r') as asn1fh:
            asn1txt = asn1fh.read()
            asn1tree = parser.parse_asn1(asn1txt)
        logger.debug('Building semantic model for "{}"'.format(modnm))
        asn1sem = build_semantic_model(asn1tree)
        defmods[os.path.basename(file_)] = asn1sem[0]
        refmods[os.path.splitext(modnm)[0]] = asn1sem[0]
        logger.debug('Realised semantic model for "{}"'.format(modnm))

    generate(refmods, incdirs, langsel, defmods, testcases)


def generate(refmods, incdirs, langsel, defmods, testcases):
    imports = list(refmods.keys())
    while len(imports) > 0:
        dm = refmods[imports.pop(0).lower()]

        if not dm.imports:
            continue

        for rm in dm.imports.imports.keys():
            rm = str(rm).lower()
            if rm not in refmods:
                logger.debug('Importing ASN.1 include for "{}"'.format(rm))
                modfh = None
                for incdir in incdirs:
                    try:
                        modfh = open(incdir + os.path.sep + rm + '.asn1', 'r')
                        break
                    except IOError:
                        continue
                if modfh is None:
                    raise Exception('No include file "{}.asn1" found'.format(rm))
                asn1txt = modfh.read()
                asn1tree = parser.parse_asn1(asn1txt)
                logger.debug('Building semantic model for "{}"'.format(rm))
                asn1sem = build_semantic_model(asn1tree)
                refmods[rm] = asn1sem[0]
                imports.append(rm)
                logger.debug('Realised semantic model for "{}"'.format(rm))

    # Generate C header files
    for modnm in defmods.keys():
            logger.debug('Generating C header file for "{}"'.format(modnm))
            cogen = QuickDER2gijs(defmods[modnm], modnm, refmods)
            cogen.generate_head()
            cogen.generate_overlay()
            cogen.generate_pack()
            cogen.generate_psub()
            cogen.generate_tail()
            cogen.close()
            logger.debug('Ready with C header file for "{}"'.format(modnm))


if __name__ == '__main__':
    """
    The main program asn2quickder is called with one or more .asn1 files,
    the first of which is mapped to a C header file and the rest is
   loaded to fulfil dependencies.
    """
    if len(argv) < 2:
        stderr.write('Usage: %s [-I incdir] [-l proglang] [-t testcases] ... main.asn1 [dependency.asn1] ...\n'
                         % argv[0])
        exit(1)
    else:
        main(script_name=argv[0], script_args=argv[1:])
