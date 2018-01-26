from asn1ate.sema import TypeAssignment, ComponentType
from jinja2 import Environment, FileSystemLoader, StrictUndefined
from typing import Generator, Tuple, Union
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


def under(s: str) -> str:
    return s.replace('-', '_')


def ack2ck(s, make_pointer=False) -> str:
    if s.startswith('ACK_'):
        s = s[1:]

    # An Array should be a pointer to the first element
    if s.endswith('_ARRAY'):
        s = s[:-5] + "PTR"

    # if make_pointer, make point if not already pointer
    if make_pointer and not s.endswith("PTR") and s not in ("CK_OPAQUE", "ANY", "CK_RV"):
        s = s + "_PTR"

    # we always want to make these pointers
    if s in ("CK_MECHANISM", "CK_C_INITIALIZE_ARGS"):
        s = s + "_PTR"

    return s


def extract_args(fundef: TypeAssignment,
                 other: TypeAssignment = None,
                 make_pointers: bool = False) -> Generator[Tuple[str, str, bool], None, None]:
    """
    Extracts arguments from a function definition. Filters out optional types. If fundef is _call, 'other' should be
    _return, same for the other way around.

    yields: (type, identifier, other), where 'other' is a bool indicating if the variable is also present in 'other'.

    """

    others = [o.identifier for o in other.type_decl.components] if other else []

    for c in fundef.type_decl.components:
        if c.type_decl.type_name == 'NULL':
            continue

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
                    yield "CK_VOID_PTR", c.identifier, c.identifier in others
                else:
                    continue
            elif element.type_decl.type_name == "BOOLEAN":
                # hack for  Notify of C_OpenSession
                yield "CK_NOTIFY", c.identifier, c.identifier in others
            elif element:
                yield format_type(element.type_decl.type_name, make_pointers), c.identifier, c.identifier in others

                if c.identifier == "pSlotList" and other:
                    assert True

        else:
            yield format_type(c.type_decl.type_name, make_pointers), c.identifier, c.identifier in others

            if c.identifier == "pSlotList" and other:
                assert True


def format_type(typedef: str, return_flag=False) -> str:
    return ack2ck(under(typedef), return_flag)


def parse_type(c: ComponentType, make_pointer=False) -> Union[Tuple[str, str, bool], None]:
    """ yields (type, identifier, pointer) (return indicating if type was made a pointer)"""
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
                return "CK_VOID_PTR", c.identifier, make_pointer
            else:
                return
        elif element.type_decl.type_name == "BOOLEAN":
            # hack for  Notify of C_OpenSession
            return "CK_NOTIFY", c.identifier, make_pointer
        elif element:
            return format_type(element.type_decl.type_name, make_pointer), c.identifier, make_pointer

    else:
        return format_type(c.type_decl.type_name, make_pointer), c.identifier, make_pointer


def combined_args(call_func: TypeAssignment, return_func: TypeAssignment):
    """ Extracts, combines and orders the arguments for Return and Call """
    x = {}
    for f, return_flag in ((call_func, False), (return_func, True)):
        for c in f.type_decl.components:
            if not c:
                continue

            if hasattr(c.type_decl, "class_number"):
                # This is an edge case where arguments for C_Initialize call and return differ, but we want the
                # type from call
                if f.type_name == 'C-Initialize-Return':
                    continue
                else:
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
    env.filters['extract_args'] = extract_args

    # enhance the template function experience
    env.globals['combined_args'] = combined_args
    env.globals['extract_args'] = extract_args

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
