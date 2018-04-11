#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "cryptoki.h"



CK_RV
call_C_CancelFunction(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
);

CK_RV
call_C_CloseAllSessions(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID
);

CK_RV
call_C_CloseSession(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
);

CK_RV
call_C_CopyObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
);

CK_RV
call_C_CreateObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
);

CK_RV
call_C_Decrypt(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG ulEncryptedDataLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
);

CK_RV
call_C_DecryptDigestUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
call_C_DecryptFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pLastPart,
    CK_ULONG_PTR pulLastPartLen
);

CK_RV
call_C_DecryptInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_DecryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
call_C_DecryptVerifyUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
call_C_DeriveKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hBaseKey,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
);

CK_RV
call_C_DestroyObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject
);

CK_RV
call_C_Digest(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
);

CK_RV
call_C_DigestEncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
call_C_DigestFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
);

CK_RV
call_C_DigestInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism
);

CK_RV
call_C_DigestKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_DigestUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
call_C_Encrypt(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
call_C_EncryptFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
call_C_EncryptInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_EncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
call_C_Finalize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    ANY pReserved
);

CK_RV
call_C_FindObjects(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE_ARRAY phObject,
    CK_ULONG ulMaxObjectCount,
    CK_ULONG_PTR pulObjectCount
);

CK_RV
call_C_FindObjectsFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
);

CK_RV
call_C_FindObjectsInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
call_C_GenerateKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phKey
);

CK_RV
call_C_GenerateKeyPair(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate,
    CK_ULONG ulPublicKeyAttributeCount,
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate,
    CK_ULONG ulPrivateKeyAttributeCount,
    CK_OBJECT_HANDLE_PTR phPublicKey,
    CK_OBJECT_HANDLE_PTR phPrivateKey
);

CK_RV
call_C_GenerateRandom(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulRandomLen
);

CK_RV
call_C_GetAttributeValue(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
call_C_GetFunctionStatus(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
);

CK_RV
call_C_GetInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_INFO_PTR pInfo
);

CK_RV
call_C_GetMechanismInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE type,
    CK_MECHANISM_INFO_PTR pInfo
);

CK_RV
call_C_GetMechanismList(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE_ARRAY pMechanismList,
    CK_ULONG_PTR pulCount
);

CK_RV
call_C_GetObjectSize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ULONG_PTR pulSize
);

CK_RV
call_C_GetOperationState(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG_PTR pulOperationStateLen
);

CK_RV
call_C_GetSessionInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_SESSION_INFO_PTR pInfo
);

CK_RV
call_C_GetSlotInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_SLOT_INFO_PTR pInfo
);

CK_RV
call_C_GetSlotList(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_ARRAY pSlotList,
    CK_ULONG_PTR pulCount
);

CK_RV
call_C_GetTokenInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_TOKEN_INFO_PTR pInfo
);

CK_RV
call_C_InitPIN(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
);

CK_RV
call_C_InitToken(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    UTF8String pPin,
    CK_ULONG ulPinLen,
    UTF8String pLabel
);

CK_RV
call_C_Initialize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_VOID_PTR pInitArgs
);

CK_RV
call_C_Login(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_USER_TYPE userType,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
);

CK_RV
call_C_Logout(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
);

CK_RV
call_C_OpenSession(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_FLAGS flags,
    ANY pApplication,
    CK_NOTIFY notify,
    CK_SESSION_HANDLE_PTR phSession
);

CK_RV
call_C_SeedRandom(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulSeedLen
);

CK_RV
call_C_SetAttributeValue(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
call_C_SetOperationState(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG ulOperationStateLen,
    CK_OBJECT_HANDLE hEncryptionKey,
    CK_OBJECT_HANDLE hAuthenticationKey
);

CK_RV
call_C_SetPIN(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pOldPin,
    CK_ULONG ulOldLen,
    CK_UTF8CHAR_ARRAY pNewPin,
    CK_ULONG ulNewPin
);

CK_RV
call_C_Sign(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
call_C_SignEncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
call_C_SignFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
call_C_SignInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_SignRecover(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
call_C_SignRecoverInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_SignUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
call_C_UnwrapKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hUnwrappingKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG ulWrappedKeyLen,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
);

CK_RV
call_C_Verify(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
);

CK_RV
call_C_VerifyFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
);

CK_RV
call_C_VerifyInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_VerifyRecover(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
);

CK_RV
call_C_VerifyRecoverInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
call_C_VerifyUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
call_C_WaitForSlotEvent(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_FLAGS flags,
    CK_SLOT_ID_PTR pSlot,
    CK_VOID_PTR pReserved
);

CK_RV
call_C_WrapKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hWrappingKey,
    CK_OBJECT_HANDLE hKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG_PTR pulWrappedKeyLen
);



#endif //KEEHIVE_WRAP_C_H