from typing import Generator, Tuple, Optional
from asn1ate.sema import TypeAssignment, ComponentType


def under(s: str) -> str:
    return s.replace('-', '_')


def format_type(typedef: str, make_pointer: bool = False) -> Tuple[str, bool]:
    """
    PKCS11ify the type decleration

    returns the pkcs11 type string and a bool indicating if the type has been pointerized.
    """
    pointerize = False

    s = under(typedef)

    if s.startswith('ACK_'):
        s = s[1:]

    # if make_pointer, make point if not already pointer
    # UTF8String is a pointer
    if make_pointer and not s.endswith("PTR") and not s.endswith("ARRAY") and \
            s not in ("CK_OPAQUE", "ANY", "UTF8String"):
        s = s + "_PTR"
        pointerize = True

    if s == "CK_C_INITIALIZE_ARGS":
        s = "CK_VOID_PTR"

    # we always want to make these pointers
    if s in ("CK_MECHANISM",):  # , "CK_C_INITIALIZE_ARGS"):  todo: disabled this one for now
        s = s + "_PTR"

    return s, pointerize


def combined_args(call_func: TypeAssignment, return_func: TypeAssignment, disable_pointerisation=False):
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
                    x[c.type_decl.class_number] = parse_type(c, make_pointer=(return_flag and not disable_pointerisation))
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

    yields: (type, pointerized, identifier, other), where pointerized indicated if the type has been pointerised and
            'other' is a bool indicating if the variable is also present in 'other'.

    """

    others = []
    for o in other.type_decl.components:
        if not o.optional:
            others.append(o.identifier)

    if fundef.type_name.startswith("C-GetMechanismList"):
        x = "gijs"

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


def parse_type(c: ComponentType, make_pointer: bool = False) -> Optional[Tuple[str, bool, str]]:
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
            return format_type(element.type_decl.type_name, make_pointer) + (c.identifier,)

    else:
        return format_type(c.type_decl.type_name, make_pointer) + (c.identifier,)


def initialise(type_, identifier):
    if type_ in ("CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_ULONG", "CK_MECHANISM_TYPE",
                 "CK_USER_TYPE", "CK_FLAGS", "CK_BBOOL"):
        return "{} {} = 0;".format(type_, identifier)
    elif not type_.endswith("_PTR"):
        return "{} {} = NULL;".format(type_, identifier)
    else:
        return "{} {} = NULL;".format(type_, identifier)


type_test_templates = {
    "CK_SESSION_INFO":
        """{type_} {identifier} = {{ .slotID = 1, .state = 1, .flags = 1 }};""",
    "CK_INFO":
        """{type_} {identifier} = {{ .cryptokiVersion.major = 1,
                            .cryptokiVersion.minor = 1,
                            .manufacturerID = "gijs",
                            .flags = 1,
                            .libraryDescription = "gijs",
                            .libraryVersion.major = 1,
                            .libraryVersion.minor = 1 }};""",
    "CK_MECHANISM_INFO":
        """{type_} {identifier} = {{ .ulMinKeySize = 1,
                            .ulMaxKeySize = 1,
                            .flags = 1 }};""",
    "CK_RV":
        "{type_} {identifier} = CKR_OK;",
    "CK_SLOT_INFO":
        """{type_} {identifier} = {{ .slotDescription = "gijs",
                            .manufacturerID = "gijs",
                            .flags = 1,
                            .hardwareVersion.major = 1,
                            .hardwareVersion.minor = 1,
                            .firmwareVersion.major = 1,
                            .firmwareVersion.minor = 1 }};""",
    "CK_TOKEN_INFO":
        """{type_} {identifier} = {{
                            .label = "labeltje",     
                            .manufacturerID = "manufacturetje",  
                            .model = "modeletje",
                            .serialNumber = "serialletje",    
                            .flags = 10,
                            .ulMaxSessionCount = 1,   
                            .ulSessionCount = 2,
                            .ulMaxRwSessionCount = 3, 
                            .ulRwSessionCount = 4,
                            .ulMaxPinLen = 5,
                            .ulMinPinLen = 6,         
                            .ulTotalPublicMemory = 7, 
                            .ulFreePublicMemory = 8,
                            .ulTotalPrivateMemory = 9,
                            .ulFreePrivateMemory = 10,
                            .hardwareVersion.major = 11,
                            .hardwareVersion.minor = 12,
                            .firmwareVersion.major = 13,
                            .firmwareVersion.minor = 14, 
                            .utcTime = "gijs time" }};""",

    "CK_ATTRIBUTE_ARRAY":
        """CK_UTF8CHAR {identifier}_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE {identifier}[] = {{
        {{.type=CKA_LABEL, .pValue={identifier}_label, .ulValueLen=sizeof({identifier}_label)-1}} }};""",
    "CK_MECHANISM_PTR":
        """CK_MECHANISM {identifier}_pointed = {{CKM_MD5, NULL, 0}};
    CK_MECHANISM_PTR {identifier} = &{identifier}_pointed; """,
    "CK_BYTE_ARRAY":
        """{type_} {identifier} = ({type_}) "abcdefghijklm";""",
    "CK_OBJECT_HANDLE_ARRAY":
        """{type_} {identifier} = ({type_}) "abcdefghijklm";""",
    "CK_C_INITIALIZE_ARGS_PTR":
        """CK_C_INITIALIZE_ARGS {identifier}_pointed = {{
        .CreateMutex = NULL,
        .DestroyMutex = NULL,
        .LockMutex = NULL,
        .UnlockMutex = NULL,
        .flags = CKF_OS_LOCKING_OK,
        .pReserved = NULL
    }};
    {type_} {identifier} = &{identifier}_pointed;
    {identifier} = NULL; // todo: disabled for now, only works with null pointer. fix this.
    """,
    "CK_NOTIFY":
        "{type_} {identifier} = NULL; // todo: set to notify_callback;",
    "CK_BBOOL":
        "{type_} {identifier} = CK_TRUE;",
    "CK_MECHANISM_TYPE_ARRAY":
        """CK_MECHANISM_TYPE {identifier}_pointed[] = {{ 13, 14 }};
    {type_} {identifier} = &{identifier}_pointed[0];""",

    "CK_SLOT_ID_ARRAY":
        """CK_SLOT_ID {identifier}_pointed[] = {{ 1, 5, 19 }};
    {type_} {identifier} = &{identifier}_pointed[0];""",
}

identifier_test_map = {
    "ulPublicKeyAttributeCount":
        "{type_} {identifier} = sizeof(pPublicKeyTemplate) / sizeof(CK_ATTRIBUTE);",
    "ulPrivateKeyAttributeCount":
        "{type_} {identifier} = sizeof(pPrivateKeyTemplate) / sizeof(CK_ATTRIBUTE);",
}


def initialise_test(type_, identifier, function_name=None):
    if identifier in identifier_test_map:
        x = identifier_test_map[identifier]
        return x.format(identifier=identifier, type_=type_)
    if identifier in ("ulCount", "ulAttributeCount"):
        return "{} {} = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);".format(type_, identifier)
    elif type_ in type_test_templates:
        x = type_test_templates[type_]
        return x.format(identifier=identifier, type_=type_)
    elif type_ in ("CK_UTF8CHAR_ARRAY", "UTF8String"):
        return "{type_} {identifier} = ({type_}) \"abcdefghijklm\";".format(type_=type_, identifier=identifier)
    elif function_name == "C_GetSlotList_Return":
        if identifier == "pulCount":
            return "{type_} {identifier} = sizeof(pSlotList_pointed) / sizeof(CK_SLOT_ID);".format(type_=type_,
                                                                                                   identifier=identifier)
    elif type_ in ("CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_ULONG",
                   "CK_MECHANISM_TYPE", "CK_USER_TYPE", "CK_FLAGS"):
        return "{} {} = 13;".format(type_, identifier)
    elif not type_.endswith("_PTR"):
        return "{} {} = NULL; /* todo: probably requires finetuning */".format(type_, identifier)
    else:
        return "{} {} = NULL;  /* todo: probably requires finetuning */".format(type_, identifier)


def initialise_unpack_placeholders(type_, identifier):
    """used to initialise the verification variables used in tests, typically set to something else than the test
    initialise variables :)"""
    if type_ == "CK_MECHANISM_TYPE_ARRAY":
        x = 10
    if type_ in ("CK_SESSION_HANDLE", "CK_SLOT_ID", "CK_OBJECT_HANDLE", "CK_ULONG",
                 "CK_MECHANISM_TYPE", "CK_USER_TYPE", "CK_FLAGS", "CK_BBOOL"):
        return "{} {} = 0;".format(type_, identifier)
    elif type_.endswith("_PTR") or type_.endswith("_ARRAY") or type_ == "UTF8String":
        return "{} {} = malloc(1024);".format(type_, identifier)
    else:
        return "{} {};".format(type_, identifier)


def free(type_, identifier):
    if type_ == "CK_ATTRIBUTE_PTR":
        return "free({});\n".format(identifier)
    else:
        return ""


def is_pointer(type_):
    return type_.endswith("_PTR") or type_.endswith("_ARRAY") or type_ in ("UTF8String",)


def is_notify(type_):
    return type_ == "CK_NOTIFY"


def depointerize(type_):
    if type_.endswith("_PTR"):
        return type_[:-4]
    elif type_.endswith("_ARRAY"):
        return type_[:-6]
    elif type_ == "UTF8String":
        return "unsigned char"
    elif type_ == "CK_NOTIFY":
        return type_
    else:
        raise Exception("dont know what to do with type '{}'".format(type_))


def len_mapper(func, identifier, deref=False):
    """this is a map of structure names to a variable that contains the length"""
    unambiguous = {
        "pPin": "ulPinLen",
        "pOldPin": "ulOldLen",
        "pNewPin": "ulNewPin",
        "pLabel": "(sizeof(pLabel) / sizeof(UTF8String))",
        "pLastPart": "pulLastPartLen",
        "pDigest": "pulDigestLen"
    }
    ambiguous = {
        ("C_DeriveKey_Call", "pTemplate"): "ulAttributeCount",
        ("C_FindObjectsInit_Return", "pTemplate"): "(sizeof(pTemplate) / sizeof(CK_ATTRIBUTE))",
        ("C_GenerateKeyPair_Call", "pPublicKeyTemplate"): "ulPublicKeyAttributeCount",
        ("C_GenerateKeyPair_Call", "pPrivateKeyTemplate"): "ulPrivateKeyAttributeCount",
        ("C_GetAttributeValue_Return", "pTemplate"): "(sizeof(pTemplate) / sizeof(CK_ATTRIBUTE))",
        ("C_UnwrapKey_Call", "pTemplate"): "ulAttributeCount",
        ("C_CopyObject_Call", "pTemplate"): "ulCount",
        ("C_CreateObject_Call", "pTemplate"): "ulCount",
        ("C_FindObjectsInit_Call", "pTemplate"): "ulCount",
        ("C_GenerateKey_Call", "pTemplate"): "ulCount",
        ("C_GetAttributeValue_Call", "pTemplate"): "ulCount",
        ("C_SetAttributeValue_Call", "pTemplate"): "ulCount",

        ("C_SeedRandom_Call", "pSeed"): "ulSeedLen",
        ("C_GenerateRandom_Return", "pSeed"): "(sizeof(pSeed) / sizeof(CK_BYTE)) ",

        ("C_Digest_Call", "pData"): "ulDataLen",
        ("C_Encrypt_Call", "pData"): "ulDataLen",
        ("C_Sign_Call", "pData"): "ulDataLen",
        ("C_SignRecover_Call", "pData"): "ulDataLen",
        ("C_Verify_Call", "pData"): "ulDataLen",

        ("C_Decrypt_Return", "pData"): "pulDataLen",
        ("C_VerifyRecover_Return", "pData"): "pulDataLen",

        ("C_SignEncryptUpdate_Call", "pPart"): "ulPartLen",
        ("C_SignUpdate_Call", "pPart"): "ulPartLen",
        ("C_VerifyUpdate_Call", "pPart"): "ulPartLen",
        ("C_DigestEncryptUpdate_Call", "pPart"): "ulPartLen",
        ("C_DigestUpdate_Call", "pPart"): "ulPartLen",
        ("C_EncryptUpdate_Call", "pPart"): "ulPartLen",
        ("C_DecryptDigestUpdate_Return", "pPart"): "pulPartLen",
        ("C_DecryptUpdate_Return", "pPart"): "pulPartLen",
        ("C_DecryptVerifyUpdate_Return", "pPart"): "pulPartLen",

        ('C_GetOperationState_Return', 'pOperationState'): "pulOperationStateLen",
        ('C_SetOperationState_Call', 'pOperationState'): "ulOperationStateLen",

        ('C_Sign_Return', 'pSignature'): "pulSignatureLen",
        ('C_SignFinal_Return', 'pSignature'): "pulSignatureLen",
        ('C_SignRecover_Return', 'pSignature'): "pulSignatureLen",
        ('C_Verify_Call', 'pSignature'): "ulSignatureLen",
        ('C_VerifyFinal_Call', 'pSignature'): "ulSignatureLen",
        ('C_VerifyRecover_Call', 'pSignature'): "ulSignatureLen",

        ('C_UnwrapKey_Call', 'pWrappedKey'): "ulWrappedKeyLen",
        ('C_WrapKey_Return', 'pWrappedKey'): "pulWrappedKeyLen",

        ('C_DecryptDigestUpdate_Call', 'pEncryptedPart'): "ulEncryptedPartLen",
        ('C_DecryptUpdate_Call', 'pEncryptedPart'): "ulEncryptedPartLen",
        ('C_DecryptVerifyUpdate_Call', 'pEncryptedPart'): "ulEncryptedPartLen",
        ('C_DigestEncryptUpdate_Return', 'pEncryptedPart'): "pulEncryptedPartLen",
        ('C_EncryptUpdate_Return', 'pEncryptedPart'): "pulEncryptedPartLen",
        ('C_SignEncryptUpdate_Return', 'pEncryptedPart'): "pulEncryptedPartLen",

        ("C_Decrypt_Call", "pEncryptedData"): "ulEncryptedDataLen",
        ('C_Encrypt_Return', 'pEncryptedData'): "pulEncryptedDataLen",
        ('C_EncryptFinal_Return', 'pEncryptedData'): "pulEncryptedDataLen",

        ('C_GetSlotList_Return', 'pSlotList'): "pulCount",

    }

    no_pointer = {
        ("C_FindObjectsInit_Return", "pTemplate"): True,
        ("C_GetAttributeValue_Return", "pTemplate"): True,
        ("C_GenerateRandom_Return", "pSeed"): True,
    }

    if identifier in unambiguous:
        answer = unambiguous[identifier]
    else:
        answer = ambiguous[(func, identifier)]

    if deref and (func, identifier) not in no_pointer:
        answer = "*" + answer

    return answer
