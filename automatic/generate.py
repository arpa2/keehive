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


def format_type(typedef, return_flag=False):
    return ack2ck(under(typedef), return_flag)


def parse_type(c, return_flag=False):
    if c.type_decl.type_name == 'NULL':
        return

    elif c.type_decl.type_name == "CHOICE":
        reserved = False
        element = None
        for d in c.type_decl.type_decl.components:
            if d.__str__() == "...":
                reserved = True
            elif d.type_decl.type_name != 'NULL':
                element = d
        if not element:
            if reserved:
                return "CK_VOID_PTR", c.identifier
            else:
                return
        elif element.type_decl.type_name == "BOOLEAN":
            # hack for  Notify of C_OpenSession
            return "CK_NOTIFY", c.identifier
        elif element:
            return format_type(element.type_decl.type_name, return_flag), c.identifier

    else:
        return format_type(c.type_decl.type_name, return_flag), c.identifier


def combine(call_func, return_func):
    """ Extracts, combines and orders the arguments for Return and Call """
    x = {}
    for f, return_flag in ((call_func, False), (return_func, True)):
        for c in f.type_decl.components:
            if not c:
                continue

            if hasattr(c.type_decl, "class_number"):
                x[c.type_decl.class_number] = parse_type(c, return_flag)
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

    data['returns'] = [i for i in data['returns'] if i.type_name[:-7] not in functions_skip]
    data['calls'] = [i for i in data['calls'] if i.type_name[:-5] not in functions_skip]
    data['functions'] = data['calls'] + data['returns']

    # we need an aligned call and return list in case we need access to both
    data['zipped'] = list(zip(data['calls'],  data['returns']))
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