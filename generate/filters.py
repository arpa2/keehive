from typing import Generator, Tuple, Optional, List
from asn1ate.sema import TypeAssignment, ComponentType


def under(s: str) -> str:
    return s.replace('-', '_')


def format_type(typedef: str, make_pointer: bool=False) -> Tuple[str, bool]:
    """
    PKCS11ify the type decleration

    returns the pkcs11 type string and a bool indicating if the type has been pointerized.
    """
    pointerize = False

    s = under(typedef)

    if s.startswith('ACK_'):
        s = s[1:]

    # An Array should be a pointer to the first element
    #if s.endswith('_ARRAY'):
    #    s = s[:-5] + "PTR"

    # if make_pointer, make point if not already pointer
    # UTF8String is a pointer
    if make_pointer and not s.endswith("PTR")and not s.endswith("ARRAY") and s not in ("CK_OPAQUE", "ANY", "UTF8String"):
        s = s + "_PTR"
        pointerize = True

    # we always want to make these pointers
    if s in ("CK_MECHANISM", "CK_C_INITIALIZE_ARGS"):
        s = s + "_PTR"

    return s, pointerize


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


def extract_args(fundef: TypeAssignment,
                 other: TypeAssignment = None,
                 make_pointers: bool = False) -> Generator[Tuple[str, bool, str, bool], None, None]:
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
                    yield "CK_VOID_PTR", False, c.identifier, c.identifier in others
                else:
                    continue
            elif element.type_decl.type_name == "BOOLEAN":
                # hack for  Notify of C_OpenSession
                yield "CK_NOTIFY", False, c.identifier, c.identifier in others
            elif element:
                yield format_type(element.type_decl.type_name, make_pointers) + (c.identifier, c.identifier in others)

                if c.identifier == "pSlotList" and other:
                    assert True

        else:
            yield format_type(c.type_decl.type_name, make_pointers) + (c.identifier, c.identifier in others)

            if c.identifier == "pSlotList" and other:
                assert True


def parse_type(c: ComponentType, make_pointer=False) -> Optional[Tuple[str, bool, str]]:
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
                return "CK_VOID_PTR", True, c.identifier
            else:
                return
        elif element.type_decl.type_name == "BOOLEAN":
            # hack for  Notify of C_OpenSession
            return "CK_NOTIFY", False, c.identifier
        elif element:
            return format_type(element.type_decl.type_name, make_pointer) + (c.identifier, )

    else:
        return format_type(c.type_decl.type_name, make_pointer) + (c.identifier, )


def initialise(type_, identifier):
    if type_ in ("CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_ULONG", "CK_MECHANISM_TYPE", "CK_USER_TYPE", "CK_FLAGS", "CK_BBOOL"):
        return "{} {} = 0;".format(type_, identifier)
    elif not type_.endswith("_PTR"):
        return "{} {} = NULL;".format(type_, identifier)
    else:
        return "{} {} = NULL_PTR;".format(type_, identifier)


def free(type_, identifier):
    if type_ == "CK_ATTRIBUTE_PTR":
        return "free({});\n".format(identifier)
    else:
        return ""


def is_pointer(type_):
    return type_.endswith("_PTR") or type_.endswith("_ARRAY") or type_ in ("UTF8String", "CK_NOTIFY")