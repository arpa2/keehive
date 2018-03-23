#ifndef KEEHIVE_DERGET_H
#define KEEHIVE_DERGET_H

#include "cryptoki.h"
#include "types.h"


int
der_get_CK_ATTRIBUTE_ARRAY(
        ACK_ATTRIBUTE_ARRAY_t* Ack_Attribute_Array,
        CK_ATTRIBUTE_ARRAY pTemplate
);

int
der_get_CK_BYTE_ARRAY(
        ACK_BYTE_ARRAY_t* Ack_Byte_Array,
        CK_BYTE_ARRAY pEncryptedData
);

int
der_get_CK_MECHANISM_PTR(
        ACK_MECHANISM_t* Ack_Mechanism,
        CK_MECHANISM_PTR pMechanism
);

int
der_get_CK_UTF8CHAR_ARRAY(
        ACK_UTF8CHAR_ARRAY_t* Ack_Utf8char_Array,
        CK_UTF8CHAR_PTR pPin
);

int
der_get_UTF8String(
        dercursor* cursor,
        UTF8String pPin
);


int der_get_char(dercursor cursor, char *val );

int der_get_uchar(dercursor cursor, unsigned char *val );

int der_get_long (dercursor cursor, long int *valp);

int der_get_ulong (dercursor cursor, long unsigned int *valp);


int der_get_CK_MECHANISM_TYPE_PTR(ACK_MECHANISM_TYPE_t* Ack_Mechanism_Type, CK_MECHANISM_TYPE_PTR pMechanismList);

int der_get_CK_MECHANISM_INFO_PTR(ACK_MECHANISM_INFO_t* Ack_Mechanism_Info, CK_MECHANISM_INFO_PTR pInfo);

int der_get_CK_VOID_PTR(void* Ack_Void, CK_VOID_PTR pReserved);

int der_get_CK_BBOOL_PTR(ACK_BBOOL_t* Ack_Bbool, CK_BBOOL_PTR tokenPresent);

int der_get_CK_FLAGS_PTR(ACK_FLAGS_t* Ack_Flags, CK_FLAGS_PTR flags);

int der_get_ANY(dercursor* cursor, ANY pApplication);

int der_get_CK_NOTIFY(DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify* bla, CK_NOTIFY notify);

int
der_get_CK_C_INITIALIZE_ARGS_PTR(
        DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs* ,
        CK_C_INITIALIZE_ARGS_PTR
);

int der_get_CK_OBJECT_HANDLE_PTR(ACK_OBJECT_HANDLE_t* Ack_Object_Handle, CK_OBJECT_HANDLE_PTR phObject);

int der_get_CK_INFO_PTR(ACK_INFO_t* Ack_Info, CK_INFO_PTR pInfo);

int der_get_CK_SESSION_INFO_PTR(ACK_SESSION_INFO_t* Ack_Session_Info, CK_SESSION_INFO_PTR pInfo);

int der_get_CK_SLOT_INFO_PTR(ACK_SLOT_INFO_t* Ack_Slot_info, CK_SLOT_INFO_PTR pInfo);

int der_get_CK_TOKEN_INFO_PTR(ACK_TOKEN_INFO_t* Ack_Token_Info, CK_TOKEN_INFO_PTR pInfo);

int der_get_CK_SLOT_ID_PTR(ACK_SLOT_ID_t* Ack_Slot_id, CK_SLOT_ID_PTR pSlotid);

int der_get_CK_OBJECT_HANDLE_ARRAY(ACK_OBJECT_HANDLE_ARRAY_t* Ack_Object_Handle_Array, CK_OBJECT_HANDLE_ARRAY phObject);

int
der_get_CK_MECHANISM_TYPE_ARRAY(
        ACK_MECHANISM_TYPE_ARRAY_t,
        CK_MECHANISM_TYPE_ARRAY
);

int
der_get_CK_SLOT_ID_ARRAY(
        DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList * Ack_Slot_Id_Array,
        CK_SLOT_ID_ARRAY pSlot
);

#endif //KEEHIVE_DERGET_H
