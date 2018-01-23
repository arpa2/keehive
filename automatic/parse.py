import logging
from quick_der.main import realise
from asn1ate.sema import dependency_sort
import pickle

asn1_file = "../data/RemotePKCS11.asn1"

logger = logging.getLogger(__name__)


def main():
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

    functions = {'returns': returns, 'calls': calls, 'others': others}

    with open('dump', 'wb') as f:
        pickle.dump(functions, f)


if __name__ == '__main__':
    logging.basicConfig(level=logging.INFO)
    main()