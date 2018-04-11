#ifndef KEEHIVE_DERGET_H
#define KEEHIVE_DERGET_H

#include "cryptoki.h"
#include "types.h"


int der_get_CK_ATTRIBUTE_ARRAY(ACK_ATTRIBUTE_ARRAY_t ,CK_ATTRIBUTE_ARRAY);

int der_get_CK_BYTE_ARRAY( ACK_BYTE_ARRAY_t, CK_BYTE_ARRAY);

int der_get_CK_MECHANISM_PTR(ACK_MECHANISM_t,CK_MECHANISM_PTR);

int der_get_CK_UTF8CHAR_ARRAY( ACK_UTF8CHAR_ARRAY_t,CK_UTF8CHAR_PTR);

int der_get_UTF8String(dercursor cursor, UTF8String);

int der_get_uchar(dercursor cursor, unsigned char *val );

int der_get_ulong (dercursor cursor, long unsigned int *valp);

int der_get_CK_MECHANISM_INFO_PTR(ACK_MECHANISM_INFO_t, CK_MECHANISM_INFO_PTR);

int der_get_CK_VOID_PTR(DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved, CK_VOID_PTR );

int der_get_CK_BBOOL_PTR(ACK_BBOOL_t, CK_BBOOL_PTR );

int der_get_CK_FLAGS_PTR(ACK_FLAGS_t, CK_FLAGS_PTR );

int der_get_CK_NOTIFY(DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify, CK_NOTIFY );

int der_get_CK_C_INITIALIZE_ARGS_PTR(DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs, CK_C_INITIALIZE_ARGS_PTR);

int der_get_CK_INFO_PTR(ACK_INFO_t, CK_INFO_PTR);

int der_get_CK_SESSION_INFO_PTR(ACK_SESSION_INFO_t, CK_SESSION_INFO_PTR);

int der_get_CK_SLOT_INFO_PTR(ACK_SLOT_INFO_t, CK_SLOT_INFO_PTR);

int der_get_CK_TOKEN_INFO_PTR(ACK_TOKEN_INFO_t, CK_TOKEN_INFO_PTR);

int der_get_CK_OBJECT_HANDLE_ARRAY(ACK_OBJECT_HANDLE_ARRAY_t, CK_OBJECT_HANDLE_ARRAY );

int der_get_CK_MECHANISM_TYPE_ARRAY(ACK_MECHANISM_TYPE_ARRAY_t, CK_MECHANISM_TYPE_ARRAY);

int der_get_CK_SLOT_ID_ARRAY( DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList, CK_SLOT_ID_ARRAY);

int der_get_CK_ULONG_ARRAY(dernode, CK_ULONG_PTR);

#endif //KEEHIVE_DERGET_H
