#!/usr/bin/env python
"""
Python script to parse remote PKCS11 ASN1 file and generate C project that implements RPC calls
"""

import os
import logging
import pickle
from quick_der.main import realise
from asn1ate.sema import dependency_sort
from jinja2 import Environment, FileSystemLoader, StrictUndefined

from filters import combined_args, under, extract_args, initialise, free, is_pointer, depointerize, initialise_test,\
    is_notify, initialise_verify


# not required in pkcs11 or not exposed
functions_skip = (
    "C-GetFunctionList",
    "C-CreateMutex",
    "C-DestroyMutex",
    "C-LockMutex",
    "C-UnlockMutex",
    "C-Notify"
)

here = os.path.dirname(__file__)

asn1_file = os.path.join(here, "../data/RemotePKCS11.asn1")
dump_file = os.path.join(here, 'parsed.pickle')
templates_folder = os.path.join(here, 'templates')
generated_folder = os.path.join(here, '../src/generated')


logger = logging.getLogger(__name__)


def parse(pickle_file):
    files = [asn1_file]
    incdirs = []
    logger.info("parsing ASN1")
    defmods, refmods = realise(incdirs, files)

    returns = []
    calls = []
    others = []

    for mod_name, module in defmods.items():

        for sorted_ass in dependency_sort(module.assignments):
            for ass in sorted_ass:
                if ass.type_name.endswith("-Return"):
                    returns.append(ass)
                elif ass.type_name.endswith("-Call"):
                    calls.append(ass)
                else:
                    others.append(ass)

    data = {'returns': returns, 'calls': calls, 'others': others}

    with open(pickle_file, 'wb') as f:
        pickle.dump(data, f)
    return data


def load_data(pickle_file):
    if not os.access(pickle_file, os.R_OK):
        logger.info("no dump file, parsing asn1")
        data = parse(pickle_file)
    else:
        logger.info("dump file found, not parsing asn1. remove dump file if you want to parse again.")
        with open(pickle_file, 'rb') as f:
            data = pickle.load(f)

    data['returns'] = [i for i in data['returns'] if i.type_name[:-7] not in functions_skip]
    data['calls'] = [i for i in data['calls'] if i.type_name[:-5] not in functions_skip]
    data['functions'] = data['calls'] + data['returns']

    # we need an aligned call and return list in case we need access to both
    data['zipped'] = list(zip(data['calls'],  data['returns']))
    for i in data['zipped']:
        assert i[0].type_name[:-4] == i[1].type_name[:-6]

    return data


def main(pickle_file):
    env = Environment(
        loader=FileSystemLoader(templates_folder),
        undefined=StrictUndefined,
    )

    # enhance the template filter experience
    env.filters['under'] = under
    env.filters['extract_args'] = extract_args
    env.filters['is_pointer'] = is_pointer
    env.filters['depointerize'] = depointerize
    env.filters['is_notify'] = is_notify

    # enhance the template function experience
    env.globals['combined_args'] = combined_args
    env.globals['extract_args'] = extract_args
    env.globals['initialise'] = initialise
    env.globals['initialise_test'] = initialise_test
    env.globals['initialise_verify'] = initialise_verify
    env.globals['free'] = free

    data = load_data(pickle_file)

    for root, dirs, files in os.walk(templates_folder):
        prefix = root[len(templates_folder)+1:]
        for file_name in files:
            file_path = os.path.join(prefix, file_name)
            template = env.get_template(file_path)

            target = os.path.join(generated_folder, file_path)
            logger.info("generating {}".format(target))
            with open(target, 'w') as f:
                f.write(template.render(**data))


if __name__ == '__main__':
    logging.basicConfig(level=logging.INFO)
    main(dump_file)
