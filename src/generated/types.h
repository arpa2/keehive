#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"
#include "cryptoki.h"

typedef CK_VOID_PTR_PTR CK_OPAQUE;
typedef CK_UTF8CHAR_PTR UTF8String;
typedef CK_BBOOL BOOLEAN;
typedef CK_BBOOL CK_PTR CK_BBOOL_PTR;
typedef CK_VOID_PTR ANY;
typedef CK_RV CK_PTR CK_RV_PTR;
typedef CK_FLAGS CK_PTR CK_FLAGS_PTR;
typedef CK_USER_TYPE CK_PTR CK_USER_TYPE_PTR;
typedef void CK_VOID;

typedef CK_ATTRIBUTE_PTR CK_ATTRIBUTE_ARRAY;
typedef CK_BYTE_PTR CK_BYTE_ARRAY;
typedef CK_MECHANISM_TYPE_PTR CK_MECHANISM_TYPE_ARRAY;
typedef CK_OBJECT_HANDLE_PTR CK_OBJECT_HANDLE_ARRAY;
typedef CK_SLOT_ID_PTR CK_SLOT_ID_ARRAY;
typedef CK_UTF8CHAR_PTR CK_UTF8CHAR_ARRAY;


typedef DER_OVLY_RemotePKCS11_C_CancelFunction_Call C_CancelFunction_Call_t;
typedef DER_OVLY_RemotePKCS11_C_CloseAllSessions_Call C_CloseAllSessions_Call_t;
typedef DER_OVLY_RemotePKCS11_C_CloseSession_Call C_CloseSession_Call_t;
typedef DER_OVLY_RemotePKCS11_C_CopyObject_Call C_CopyObject_Call_t;
typedef DER_OVLY_RemotePKCS11_C_CreateObject_Call C_CreateObject_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Decrypt_Call C_Decrypt_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Call C_DecryptDigestUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptFinal_Call C_DecryptFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptInit_Call C_DecryptInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptUpdate_Call C_DecryptUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Call C_DecryptVerifyUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DeriveKey_Call C_DeriveKey_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DestroyObject_Call C_DestroyObject_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Digest_Call C_Digest_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Call C_DigestEncryptUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DigestFinal_Call C_DigestFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DigestInit_Call C_DigestInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DigestKey_Call C_DigestKey_Call_t;
typedef DER_OVLY_RemotePKCS11_C_DigestUpdate_Call C_DigestUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Encrypt_Call C_Encrypt_Call_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptFinal_Call C_EncryptFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptInit_Call C_EncryptInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptUpdate_Call C_EncryptUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Finalize_Call C_Finalize_Call_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjects_Call C_FindObjects_Call_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Call C_FindObjectsFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjectsInit_Call C_FindObjectsInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateKey_Call C_GenerateKey_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Call C_GenerateKeyPair_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateRandom_Call C_GenerateRandom_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetAttributeValue_Call C_GetAttributeValue_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Call C_GetFunctionStatus_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetInfo_Call C_GetInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Call C_GetMechanismInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetMechanismList_Call C_GetMechanismList_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetObjectSize_Call C_GetObjectSize_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetOperationState_Call C_GetOperationState_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSessionInfo_Call C_GetSessionInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotInfo_Call C_GetSlotInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call C_GetSlotList_Call_t;
typedef DER_OVLY_RemotePKCS11_C_GetTokenInfo_Call C_GetTokenInfo_Call_t;
typedef DER_OVLY_RemotePKCS11_C_InitPIN_Call C_InitPIN_Call_t;
typedef DER_OVLY_RemotePKCS11_C_InitToken_Call C_InitToken_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Initialize_Call C_Initialize_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Login_Call C_Login_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Logout_Call C_Logout_Call_t;
typedef DER_OVLY_RemotePKCS11_C_OpenSession_Call C_OpenSession_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SeedRandom_Call C_SeedRandom_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SetAttributeValue_Call C_SetAttributeValue_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SetOperationState_Call C_SetOperationState_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SetPIN_Call C_SetPIN_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Sign_Call C_Sign_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Call C_SignEncryptUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignFinal_Call C_SignFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignInit_Call C_SignInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignRecover_Call C_SignRecover_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignRecoverInit_Call C_SignRecoverInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_SignUpdate_Call C_SignUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_UnwrapKey_Call C_UnwrapKey_Call_t;
typedef DER_OVLY_RemotePKCS11_C_Verify_Call C_Verify_Call_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyFinal_Call C_VerifyFinal_Call_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyInit_Call C_VerifyInit_Call_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyRecover_Call C_VerifyRecover_Call_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyUpdate_Call C_VerifyUpdate_Call_t;
typedef DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call C_WaitForSlotEvent_Call_t;
typedef DER_OVLY_RemotePKCS11_C_WrapKey_Call C_WrapKey_Call_t;
typedef DER_OVLY_RemotePKCS11_C_CancelFunction_Return C_CancelFunction_Return_t;
typedef DER_OVLY_RemotePKCS11_C_CloseAllSessions_Return C_CloseAllSessions_Return_t;
typedef DER_OVLY_RemotePKCS11_C_CloseSession_Return C_CloseSession_Return_t;
typedef DER_OVLY_RemotePKCS11_C_CopyObject_Return C_CopyObject_Return_t;
typedef DER_OVLY_RemotePKCS11_C_CreateObject_Return C_CreateObject_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Decrypt_Return C_Decrypt_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Return C_DecryptDigestUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptFinal_Return C_DecryptFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptInit_Return C_DecryptInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptUpdate_Return C_DecryptUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Return C_DecryptVerifyUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DeriveKey_Return C_DeriveKey_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DestroyObject_Return C_DestroyObject_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Digest_Return C_Digest_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Return C_DigestEncryptUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DigestFinal_Return C_DigestFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DigestInit_Return C_DigestInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DigestKey_Return C_DigestKey_Return_t;
typedef DER_OVLY_RemotePKCS11_C_DigestUpdate_Return C_DigestUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Encrypt_Return C_Encrypt_Return_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptFinal_Return C_EncryptFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptInit_Return C_EncryptInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_EncryptUpdate_Return C_EncryptUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Finalize_Return C_Finalize_Return_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjects_Return C_FindObjects_Return_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Return C_FindObjectsFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_FindObjectsInit_Return C_FindObjectsInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateKey_Return C_GenerateKey_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Return C_GenerateKeyPair_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GenerateRandom_Return C_GenerateRandom_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetAttributeValue_Return C_GetAttributeValue_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Return C_GetFunctionStatus_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetInfo_Return C_GetInfo_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Return C_GetMechanismInfo_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetMechanismList_Return C_GetMechanismList_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetObjectSize_Return C_GetObjectSize_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetOperationState_Return C_GetOperationState_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetSessionInfo_Return C_GetSessionInfo_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotInfo_Return C_GetSlotInfo_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return C_GetSlotList_Return_t;
typedef DER_OVLY_RemotePKCS11_C_GetTokenInfo_Return C_GetTokenInfo_Return_t;
typedef DER_OVLY_RemotePKCS11_C_InitPIN_Return C_InitPIN_Return_t;
typedef DER_OVLY_RemotePKCS11_C_InitToken_Return C_InitToken_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Initialize_Return C_Initialize_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Login_Return C_Login_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Logout_Return C_Logout_Return_t;
typedef DER_OVLY_RemotePKCS11_C_OpenSession_Return C_OpenSession_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SeedRandom_Return C_SeedRandom_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SetAttributeValue_Return C_SetAttributeValue_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SetOperationState_Return C_SetOperationState_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SetPIN_Return C_SetPIN_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Sign_Return C_Sign_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Return C_SignEncryptUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignFinal_Return C_SignFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignInit_Return C_SignInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignRecover_Return C_SignRecover_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignRecoverInit_Return C_SignRecoverInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_SignUpdate_Return C_SignUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_UnwrapKey_Return C_UnwrapKey_Return_t;
typedef DER_OVLY_RemotePKCS11_C_Verify_Return C_Verify_Return_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyFinal_Return C_VerifyFinal_Return_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyInit_Return C_VerifyInit_Return_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyRecover_Return C_VerifyRecover_Return_t;
typedef DER_OVLY_RemotePKCS11_C_VerifyUpdate_Return C_VerifyUpdate_Return_t;
typedef DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return C_WaitForSlotEvent_Return_t;
typedef DER_OVLY_RemotePKCS11_C_WrapKey_Return C_WrapKey_Return_t;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG ACK_ULONG_t;
typedef DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_TYPE ACK_ATTRIBUTE_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_OPAQUE ACK_OPAQUE_t;
typedef DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE ACK_ATTRIBUTE_t;
typedef DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY ACK_ATTRIBUTE_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_BBOOL ACK_BBOOL_t;
typedef DER_OVLY_RemotePKCS11_ACK_BYTE ACK_BYTE_t;
typedef DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY ACK_BYTE_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_FLAGS ACK_FLAGS_t;
typedef DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS ACK_C_INITIALIZE_ARGS_t;
typedef DER_OVLY_RemotePKCS11_ACK_CERTIFICATE_CATEGORY ACK_CERTIFICATE_CATEGORY_t;
typedef DER_OVLY_RemotePKCS11_ACK_CERTIFICATE_TYPE ACK_CERTIFICATE_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_CHAR ACK_CHAR_t;
typedef DER_OVLY_RemotePKCS11_ACK_CHAR_ARRAY ACK_CHAR_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_DATE ACK_DATE_t;
typedef DER_OVLY_RemotePKCS11_ACK_VERSION ACK_VERSION_t;
typedef DER_OVLY_RemotePKCS11_ACK_FUNCTION_LIST ACK_FUNCTION_LIST_t;
typedef DER_OVLY_RemotePKCS11_ACK_HW_FEATURE_TYPE ACK_HW_FEATURE_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_INFO ACK_INFO_t;
typedef DER_OVLY_RemotePKCS11_ACK_JAVA_MIDP_SECURITY_DOMAIN ACK_JAVA_MIDP_SECURITY_DOMAIN_t;
typedef DER_OVLY_RemotePKCS11_ACK_KEY_TYPE ACK_KEY_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_LONG ACK_LONG_t;
typedef DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE ACK_MECHANISM_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_MECHANISM ACK_MECHANISM_t;
typedef DER_OVLY_RemotePKCS11_ACK_MECHANISM_INFO ACK_MECHANISM_INFO_t;
typedef DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY ACK_MECHANISM_TYPE_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_NOTIFICATION ACK_NOTIFICATION_t;
typedef DER_OVLY_RemotePKCS11_ACK_OBJECT_CLASS ACK_OBJECT_CLASS_t;
typedef DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE ACK_OBJECT_HANDLE_t;
typedef DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY ACK_OBJECT_HANDLE_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_OPAQUE_ARRAY ACK_OPAQUE_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_RV ACK_RV_t;
typedef DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE ACK_SESSION_HANDLE_t;
typedef DER_OVLY_RemotePKCS11_ACK_STATE ACK_STATE_t;
typedef DER_OVLY_RemotePKCS11_ACK_SLOT_ID ACK_SLOT_ID_t;
typedef DER_OVLY_RemotePKCS11_ACK_SESSION_INFO ACK_SESSION_INFO_t;
typedef DER_OVLY_RemotePKCS11_ACK_SLOT_ID_ARRAY ACK_SLOT_ID_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_SLOT_INFO ACK_SLOT_INFO_t;
typedef DER_OVLY_RemotePKCS11_ACK_TOKEN_INFO ACK_TOKEN_INFO_t;
typedef DER_OVLY_RemotePKCS11_ACK_ULONG_ARRAY ACK_ULONG_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_ACK_USER_TYPE ACK_USER_TYPE_t;
typedef DER_OVLY_RemotePKCS11_ACK_UTF8CHAR ACK_UTF8CHAR_t;
typedef DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY ACK_UTF8CHAR_ARRAY_t;
typedef DER_OVLY_RemotePKCS11_NotifierCode NotifierCode_t;
typedef DER_OVLY_RemotePKCS11_OperationCode OperationCode_t;
typedef DER_OVLY_RemotePKCS11_RemoteNotificationCall RemoteNotificationCall_t;
typedef DER_OVLY_RemotePKCS11_RemoteNotificationReturn RemoteNotificationReturn_t;
typedef DER_OVLY_RemotePKCS11_RemoteProcedureCall RemoteProcedureCall_t;
typedef DER_OVLY_RemotePKCS11_RemoteProcedureReturn RemoteProcedureReturn_t;
typedef DER_OVLY_RemotePKCS11_TransportMessage TransportMessage_t;

#endif //KEEHIVE_CONSTANTS_H
