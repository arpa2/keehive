#include "derget.h"



int der_get_char(dercursor *cursor, char *val )
{
    if (cursor->derlen == 0)
        return -1;
    *val = *cursor->derptr;

    return 0;
}


int der_get_uchar(dercursor *cursor, unsigned char *val )
{
    if (cursor->derlen == 0)
        return -1;
    *val = *cursor->derptr;

    return 0;
}


int der_get_long(dercursor cursor, long int *valp)
{
    return der_get_int32 (cursor, (int32_t *)valp);
};


int der_get_ulong(dercursor cursor,  long unsigned int *valp)
{
    return der_get_uint32 (cursor, (u_int32_t *)valp);
};


void der_get_CK_ATTRIBUTE_ARRAY( CK_ATTRIBUTE_ARRAY pTemplate) {};

void der_get_CK_BYTE_ARRAY(CK_BYTE_ARRAY pEncryptedData) {};

void der_get_CK_MECHANISM_PTR(CK_MECHANISM_PTR pMechanism) {};

void der_get_CK_MECHANISM_TYPE_PTR(CK_MECHANISM_TYPE_PTR pMechanismList) {};

void der_get_CK_MECHANISM_INFO_PTR(CK_MECHANISM_INFO_PTR pInfo) {};

void der_get_CK_VOID_PTR(CK_VOID_PTR pReserved) {};

void der_get_CK_UTF8CHAR_ARRAY(CK_UTF8CHAR_PTR pPin) {};

void der_get_UTF8String(UTF8String pPin) {};

void der_get_CK_BBOOL_PTR(CK_BBOOL_PTR tokenPresent) {};

void der_get_CK_FLAGS_PTR(CK_FLAGS_PTR flags) {};

void der_get_ANY(ANY pApplication) {};

void der_get_CK_NOTIFY(CK_NOTIFY notify) {};

void der_get_CK_C_INITIALIZE_ARGS_PTR(CK_C_INITIALIZE_ARGS_PTR pInitArgs) {};

void der_get_CK_OBJECT_HANDLE_PTR(CK_OBJECT_HANDLE_PTR phObject) {};

void der_get_CK_INFO_PTR(CK_INFO_PTR pInfo) {};

void der_get_CK_SESSION_INFO_PTR(CK_SESSION_INFO_PTR pInfo) {};

void der_get_CK_SLOT_INFO_PTR(CK_SLOT_INFO_PTR pInfo) {};

void der_get_CK_TOKEN_INFO_PTR(CK_TOKEN_INFO_PTR pInfo) {};

void der_get_CK_SLOT_ID_PTR(CK_SLOT_ID_PTR pSlotid) {};

void der_get_CK_OBJECT_HANDLE_ARRAY(CK_OBJECT_HANDLE_ARRAY phObject) {};

void der_get_CK_MECHANISM_TYPE_ARRAY(CK_MECHANISM_TYPE_ARRAY pMechanism) {};

void der_get_CK_SLOT_ID_ARRAY(CK_SLOT_ID_ARRAY pSlot) {};