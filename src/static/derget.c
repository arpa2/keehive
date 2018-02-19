#include "derget.h"
#include "unpack.h"
#include "returncodes.h"
#include "packer.h"



int der_get_char(dercursor cursor, char *val )
{
    if (cursor.derlen == 0)
        return -1;
    *val = *(cursor.derptr);

    return 0;
}


int der_get_uchar(dercursor cursor, unsigned char *val )
{
    if (cursor.derlen == 0)
        return -1;
    *val = *(cursor.derptr);

    return 0;
}


int der_get_long(dercursor cursor, long int *valp)
{
    return der_get_int32 (cursor, (int32_t *)valp);
};


int
der_get_ulong(
        dercursor cursor,
        long unsigned int* valp
) {
    *valp = 0; // make sure long part is reset
    return der_get_uint32 (cursor, (u_int32_t *)valp);
};


CK_RV
der_get_CK_ATTRIBUTE_ARRAY(
        ACK_ATTRIBUTE_ARRAY_t* Ack_Attribute_Array,
        CK_ATTRIBUTE_ARRAY pTemplate) {

    dercursor iterator;
    int status;
    int i = 0;
    dercursor der_attribute;

    CK_ATTRIBUTE attribute;

    if (der_iterate_first(&Ack_Attribute_Array->wire, &iterator)) {
        do {
            status = der_unpack(&iterator, AttributeArray_packer, &der_attribute, REPEAT);
            if (status == -1)
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
            /*status = der_get_ulong(der_attribute, &attribute);
            if (status == -1)
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
            (pTemplate)[i] = attribute; */
            i++;
        } while (der_iterate_next(&iterator));
    }
    return CKR_OK;
};

int der_get_CK_BYTE_ARRAY(ACK_BYTE_ARRAY_t* Ack_Byte_Array, CK_BYTE_ARRAY pEncryptedData) {
    return -1;
};

int der_get_CK_MECHANISM_PTR(ACK_MECHANISM_t* Ack_Mechanism, CK_MECHANISM_PTR pMechanism) {
    return -1;
};

int der_get_CK_MECHANISM_TYPE_PTR(ACK_MECHANISM_TYPE_t* Ack_Mechanism_Type, CK_MECHANISM_TYPE_PTR pMechanismList) {
    return -1;
};

int der_get_CK_MECHANISM_INFO_PTR(ACK_MECHANISM_INFO_t* Ack_Mechanism_Info, CK_MECHANISM_INFO_PTR pInfo) {
    return -1;
};

int
der_get_CK_VOID_PTR(
        void* Ack_Void,
        CK_VOID_PTR pReserved
) {
/* TODO: ok problem here, which one do we want?
 *  - 'struct DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved *'
 *  - 'struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call_pReserved *'
*/
    return -1;
};

int der_get_CK_UTF8CHAR_ARRAY(ACK_UTF8CHAR_ARRAY_t* Ack_Utf8char_Array, CK_UTF8CHAR_PTR pPin) {
    return -1;
};

int der_get_UTF8String(dercursor* cursor, UTF8String pPin) {
    return -1;
};

int der_get_CK_BBOOL_PTR(ACK_BBOOL_t* Ack_Bbool, CK_BBOOL_PTR tokenPresent) {
    return -1;
};

int der_get_CK_FLAGS_PTR(ACK_FLAGS_t* Ack_Flags, CK_FLAGS_PTR flags) {
    return -1;
};

int
der_get_ANY(
        dercursor* cursor,
        ANY pApplication
) {
    /* todo: problem here! Some functions expect struct DER_OVLY_RemotePKCS11_C_OpenSession_Call_pApplication */
    return -1;
};

int der_get_CK_NOTIFY(DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify* bla, CK_NOTIFY notify) {
    return -1;
};

int der_get_CK_C_INITIALIZE_ARGS_PTR(DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs* bla, CK_C_INITIALIZE_ARGS_PTR pInitArgs) {
    return -1;
};

int der_get_CK_OBJECT_HANDLE_PTR(ACK_OBJECT_HANDLE_t* Ack_Object_Handle, CK_OBJECT_HANDLE_PTR phObject) {
    return -1;
};

int der_get_CK_INFO_PTR(ACK_INFO_t* Ack_Info, CK_INFO_PTR pInfo) {
    return -1;
};

int der_get_CK_SESSION_INFO_PTR(ACK_SESSION_INFO_t* Ack_Session_Info, CK_SESSION_INFO_PTR pInfo) {
    return -1;
};

int der_get_CK_SLOT_INFO_PTR(ACK_SLOT_INFO_t* Ack_Slot_info, CK_SLOT_INFO_PTR pInfo) {
    return -1;
};

int der_get_CK_TOKEN_INFO_PTR(ACK_TOKEN_INFO_t* Ack_Token_Info, CK_TOKEN_INFO_PTR pInfo) {
    return -1;
};

int
der_get_CK_SLOT_ID_PTR(
        ACK_SLOT_ID_t* Ack_Slot_id,
        CK_SLOT_ID_PTR pSlotid
) {
    return der_get_ulong(*Ack_Slot_id, pSlotid);
};

int der_get_CK_OBJECT_HANDLE_ARRAY(ACK_OBJECT_HANDLE_ARRAY_t* Ack_Object_Handle_Array, CK_OBJECT_HANDLE_ARRAY phObject) {
    return -1;
};

int der_get_CK_MECHANISM_TYPE_ARRAY(struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Return_pMechanismList * bla, CK_MECHANISM_TYPE_ARRAY pMechanism) {
    return -1;
};

int der_get_CK_SLOT_ID_ARRAY(struct DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList * Ack_Slot_Id_Array, CK_SLOT_ID_ARRAY pSlot) {
    return -1;
};
