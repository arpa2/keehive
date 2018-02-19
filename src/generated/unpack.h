#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "static/RemotePKCS11.h"
#include "quick-der/api.h"




CK_RV
unpack_C_CancelFunction_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_CancelFunction_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_CloseAllSessions_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
);

CK_RV
unpack_C_CloseAllSessions_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_CloseSession_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_CloseSession_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_CopyObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_CopyObject_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phObject
);



CK_RV
unpack_C_CreateObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_CreateObject_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phObject
);



CK_RV
unpack_C_Decrypt_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR ulEncryptedDataLen,
        CK_ULONG_PTR pulDataLen
);

CK_RV
unpack_C_Decrypt_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR pulDataLen
);



CK_RV
unpack_C_DecryptDigestUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
);

CK_RV
unpack_C_DecryptDigestUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
);



CK_RV
unpack_C_DecryptFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulLastPartLen
);

CK_RV
unpack_C_DecryptFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pLastPart,
        CK_ULONG_PTR pulLastPartLen
);



CK_RV
unpack_C_DecryptInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_DecryptInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_DecryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
);

CK_RV
unpack_C_DecryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
);



CK_RV
unpack_C_DecryptVerifyUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
);

CK_RV
unpack_C_DecryptVerifyUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
);



CK_RV
unpack_C_DeriveKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hBaseKey,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulAttributeCount
);

CK_RV
unpack_C_DeriveKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
);



CK_RV
unpack_C_DestroyObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject
);

CK_RV
unpack_C_DestroyObject_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_Digest_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulDigestLen
);

CK_RV
unpack_C_Digest_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pDigest,
        CK_ULONG_PTR pulDigestLen
);



CK_RV
unpack_C_DigestEncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
unpack_C_DigestEncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
);



CK_RV
unpack_C_DigestFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulDigestLen
);

CK_RV
unpack_C_DigestFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pDigest,
        CK_ULONG_PTR pulDigestLen
);



CK_RV
unpack_C_DigestInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism
);

CK_RV
unpack_C_DigestInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_DigestKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_DigestKey_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_DigestUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
);

CK_RV
unpack_C_DigestUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_Encrypt_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
unpack_C_Encrypt_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR pulEncryptedDataLen
);



CK_RV
unpack_C_EncryptFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
unpack_C_EncryptFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR pulEncryptedDataLen
);



CK_RV
unpack_C_EncryptInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_EncryptInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_EncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
unpack_C_EncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
);



CK_RV
unpack_C_Finalize_Call(
        dercursor* packed,
        CK_VOID_PTR pReserved
);

CK_RV
unpack_C_Finalize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        ANY pReserved
);



CK_RV
unpack_C_FindObjects_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR ulMaxObjectCount
);

CK_RV
unpack_C_FindObjects_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_ARRAY phObject,
        CK_ULONG_PTR pulObjectCount
);



CK_RV
unpack_C_FindObjectsFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_FindObjectsFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_FindObjectsInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_FindObjectsInit_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ATTRIBUTE_ARRAY pTemplate
);



CK_RV
unpack_C_GenerateKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_GenerateKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
);



CK_RV
unpack_C_GenerateKeyPair_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_ATTRIBUTE_ARRAY pPublicKeyTemplate,
        CK_ULONG_PTR ulPublicKeyAttributeCount,
        CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate,
        CK_ULONG_PTR ulPrivateKeyAttributeCount
);

CK_RV
unpack_C_GenerateKeyPair_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phPublicKey,
        CK_OBJECT_HANDLE_PTR phPrivateKey
);



CK_RV
unpack_C_GenerateRandom_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR ulRandomLen
);

CK_RV
unpack_C_GenerateRandom_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSeed
);



CK_RV
unpack_C_GetAttributeValue_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_GetAttributeValue_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ATTRIBUTE_ARRAY pTemplate
);



CK_RV
unpack_C_GetFunctionStatus_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_GetFunctionStatus_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_GetInfo_Call(
        dercursor* packed
);

CK_RV
unpack_C_GetInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_INFO_PTR pInfo
);



CK_RV
unpack_C_GetMechanismInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_MECHANISM_TYPE_PTR type
);

CK_RV
unpack_C_GetMechanismInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_MECHANISM_INFO_PTR pInfo
);



CK_RV
unpack_C_GetMechanismList_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_ULONG_PTR pulCount
);

CK_RV
unpack_C_GetMechanismList_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_MECHANISM_TYPE_ARRAY pMechanismList,
        CK_ULONG_PTR pulCount
);



CK_RV
unpack_C_GetObjectSize_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject
);

CK_RV
unpack_C_GetObjectSize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ULONG_PTR pulSize
);



CK_RV
unpack_C_GetOperationState_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulOperationStateLen
);

CK_RV
unpack_C_GetOperationState_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pOperationState,
        CK_ULONG_PTR pulOperationStateLen
);



CK_RV
unpack_C_GetSessionInfo_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_GetSessionInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SESSION_INFO_PTR pInfo
);



CK_RV
unpack_C_GetSlotInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
);

CK_RV
unpack_C_GetSlotInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_INFO_PTR pInfo
);



CK_RV
unpack_C_GetSlotList_Call(
        dercursor* packed,
        CK_BBOOL_PTR tokenPresent,
        CK_ULONG_PTR pulCount
);

CK_RV
unpack_C_GetSlotList_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_ID_ARRAY pSlotList,
        CK_ULONG_PTR pulCount
);



CK_RV
unpack_C_GetTokenInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
);

CK_RV
unpack_C_GetTokenInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_TOKEN_INFO_PTR pInfo
);



CK_RV
unpack_C_InitPIN_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_UTF8CHAR_ARRAY* pPin,
        CK_ULONG_PTR ulPinLen
);

CK_RV
unpack_C_InitPIN_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_InitToken_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        UTF8String pPin,
        CK_ULONG_PTR ulPinLen,
        UTF8String pLabel
);

CK_RV
unpack_C_InitToken_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_Initialize_Call(
        dercursor* packed,
        CK_C_INITIALIZE_ARGS_PTR pInitArgs
);

CK_RV
unpack_C_Initialize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        ANY pInitArgs
);



CK_RV
unpack_C_Login_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_USER_TYPE_PTR userType,
        CK_UTF8CHAR_ARRAY pPin,
        CK_ULONG_PTR ulPinLen
);

CK_RV
unpack_C_Login_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_Logout_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
);

CK_RV
unpack_C_Logout_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_OpenSession_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_FLAGS_PTR flags,
        ANY pApplication,
        CK_NOTIFY notify
);

CK_RV
unpack_C_OpenSession_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SESSION_HANDLE_PTR phSession
);



CK_RV
unpack_C_SeedRandom_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSeed,
        CK_ULONG_PTR ulSeedLen
);

CK_RV
unpack_C_SeedRandom_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_SetAttributeValue_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
);

CK_RV
unpack_C_SetAttributeValue_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_SetOperationState_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pOperationState,
        CK_ULONG_PTR ulOperationStateLen,
        CK_OBJECT_HANDLE_PTR hEncryptionKey,
        CK_OBJECT_HANDLE_PTR hAuthenticationKey
);

CK_RV
unpack_C_SetOperationState_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_SetPIN_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_UTF8CHAR_ARRAY pOldPin,
        CK_ULONG_PTR ulOldLen,
        CK_UTF8CHAR_ARRAY pNewPin,
        CK_ULONG_PTR ulNewPin
);

CK_RV
unpack_C_SetPIN_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_Sign_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulSignatureLen
);

CK_RV
unpack_C_Sign_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
);



CK_RV
unpack_C_SignEncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
unpack_C_SignEncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
);



CK_RV
unpack_C_SignFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulSignatureLen
);

CK_RV
unpack_C_SignFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
);



CK_RV
unpack_C_SignInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_SignInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_SignRecover_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulSignatureLen
);

CK_RV
unpack_C_SignRecover_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
);



CK_RV
unpack_C_SignRecoverInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_SignRecoverInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_SignUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
);

CK_RV
unpack_C_SignUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_UnwrapKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hUnwrappingKey,
        CK_BYTE_ARRAY pWrappedKey,
        CK_ULONG_PTR ulWrappedKeyLen,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulAttributeCount
);

CK_RV
unpack_C_UnwrapKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
);



CK_RV
unpack_C_Verify_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen
);

CK_RV
unpack_C_Verify_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_VerifyFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen
);

CK_RV
unpack_C_VerifyFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_VerifyInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
);

CK_RV
unpack_C_VerifyInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_VerifyRecover_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen,
        CK_ULONG_PTR pulDataLen
);

CK_RV
unpack_C_VerifyRecover_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR pulDataLen
);



CK_RV
unpack_C_VerifyUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
);

CK_RV
unpack_C_VerifyUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
);



CK_RV
unpack_C_WaitForSlotEvent_Call(
        dercursor* packed,
        CK_FLAGS_PTR flags,
        CK_VOID_PTR pReserved
);

CK_RV
unpack_C_WaitForSlotEvent_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_ID_PTR pSlot,
        CK_VOID_PTR pReserved
);



CK_RV
unpack_C_WrapKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hWrappingKey,
        CK_OBJECT_HANDLE_PTR hKey,
        CK_ULONG_PTR pulWrappedKeyLen
);

CK_RV
unpack_C_WrapKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pWrappedKey,
        CK_ULONG_PTR pulWrappedKeyLen
);



#endif //KEEHIVE_UNPACK_H