from jinja2 import Environment, FileSystemLoader, StrictUndefined
from itertools import chain
import pickle
import os

templates_folder = 'templates'

# not required in pkcs11 or not exposed
functions_skip = (
    "C-GetFunctionList",
    "C-CreateMutex",
    "C-DestroyMutex",
    "C-LockMutex",
    "C-UnlockMutex",
    "C-Notify"
)


def under(s):
    return s.replace('-', '_')


def ack2ck(s, return_flag=False):
    if s.startswith('ACK_'):
        s = s[1:]

    if s.endswith('_ARRAY'):
        s = s[:-5] + "PTR"

    if return_flag and not s.endswith("PTR") and s not in ("CK_OPAQUE", "ANY"):
        s = s + "_PTR"

    if s == "CK_MECHANISM":
        s = s + "_PTR"

    return s


def filter_unused(fundef):
    return (i for i in fundef.type_decl.components
            if i.__str__() != "..." and
            i.type_decl.type_name != 'NULL'
            # and i.type_decl.type_name != 'ANY'
            )


def extractargs(fundef):
    """ Extracts arguments from a function definition. Filters out optional types. """
    for c in filter_unused(fundef):
        if c.type_decl.type_name == "CHOICE":
            for d in filter_unused(c.type_decl):
                yield d
        else:
            yield c


def combine(call_func, return_func):
    """ Extracts, combines and orders the arguments for Return and Call """
    x = {}
    for f, return_flag in ((call_func, False), (return_func, True)):
        for i in filter_unused(f):
            if hasattr(i.type_decl, "class_number"):
                if i.type_decl.type_name == "CHOICE":
                    for d in filter_unused(i.type_decl):
                        x[i.type_decl.class_number] = (d, return_flag)
                else:
                    x[i.type_decl.class_number] = (i, return_flag)
    if not x:
        return []

    len_ = max(int(i) for i in x.keys())
    array = [None] * (len_ + 1)
    for k, v in x.items():
        array[int(k)] = v

    assert None not in array

    return array


def main():
    env = Environment(
        loader=FileSystemLoader(templates_folder),
        undefined=StrictUndefined,
    )

    # enhance the template filter experience
    env.filters['under'] = under
    env.filters['ack2ck'] = ack2ck
    env.filters['extractargs'] = extractargs

    # enhance the template function experience
    env.globals['extractargs'] = extractargs
    env.globals['combine'] = combine

    with open('dump', 'rb') as f:
        data = pickle.load(f)

    returns = data['returns']
    returns = [i for i in returns if i.type_name[:-7] not in functions_skip]

    calls = data['calls']
    calls = [i for i in calls if i.type_name[:-5] not in functions_skip]

    data['functions'] = calls + returns

    # we need an aligned call and return list in case we need access to both
    data['zipped'] = list(zip(calls, returns))
    for i in data['zipped']:
        assert i[0].type_name[:-4] == i[1].type_name[:-6]

    for root, dirs, files in os.walk(templates_folder):
        path = root.split(os.sep)
        for file_name in files:
            if file_name.endswith('.tmpl'):
                continue
            file_path = os.path.join("/".join(path[1:]), file_name)
            template = env.get_template(file_path)

            target = os.path.join('generated/', file_path)
            print("generating {}".format(target))
            with open(target, 'w') as f:
                f.write(template.render(**data))


if __name__ == '__main__':
    main()