#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "cryptoki.h"
#include "types.h"


CK_RV
client_C_CancelFunction(
    CK_SESSION_HANDLE hSession
);

CK_RV
client_C_CloseAllSessions(
    CK_SLOT_ID slotID
);

CK_RV
client_C_CloseSession(
    CK_SESSION_HANDLE hSession
);

CK_RV
client_C_CopyObject(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
);

CK_RV
client_C_CreateObject(
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
);

CK_RV
client_C_Decrypt(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG ulEncryptedDataLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
);

CK_RV
client_C_DecryptDigestUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
client_C_DecryptFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pLastPart,
    CK_ULONG_PTR pulLastPartLen
);

CK_RV
client_C_DecryptInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_DecryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
client_C_DecryptVerifyUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
);

CK_RV
client_C_DeriveKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hBaseKey,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
);

CK_RV
client_C_DestroyObject(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject
);

CK_RV
client_C_Digest(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
);

CK_RV
client_C_DigestEncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
client_C_DigestFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
);

CK_RV
client_C_DigestInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism
);

CK_RV
client_C_DigestKey(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_DigestUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
client_C_Encrypt(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
client_C_EncryptFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
);

CK_RV
client_C_EncryptInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_EncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
client_C_Finalize(
    ANY pReserved
);

CK_RV
client_C_FindObjects(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE_PTR phObject,
    CK_ULONG ulMaxObjectCount,
    CK_ULONG_PTR pulObjectCount
);

CK_RV
client_C_FindObjectsFinal(
    CK_SESSION_HANDLE hSession
);

CK_RV
client_C_FindObjectsInit(
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
client_C_GenerateKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phKey
);

CK_RV
client_C_GenerateKeyPair(
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
client_C_GenerateRandom(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulRandomLen
);

CK_RV
client_C_GetAttributeValue(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
client_C_GetFunctionStatus(
    CK_SESSION_HANDLE hSession
);

CK_RV
client_C_GetInfo(
    CK_INFO_PTR pInfo
);

CK_RV
client_C_GetMechanismInfo(
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE type,
    CK_MECHANISM_INFO_PTR pInfo
);

CK_RV
client_C_GetMechanismList(
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE_ARRAY pMechanismList,
    CK_ULONG_PTR pulCount
);

CK_RV
client_C_GetObjectSize(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ULONG_PTR pulSize
);

CK_RV
client_C_GetOperationState(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG_PTR pulOperationStateLen
);

CK_RV
client_C_GetSessionInfo(
    CK_SESSION_HANDLE hSession,
    CK_SESSION_INFO_PTR pInfo
);

CK_RV
client_C_GetSlotInfo(
    CK_SLOT_ID slotID,
    CK_SLOT_INFO_PTR pInfo
);

CK_RV
client_C_GetSlotList(
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_ARRAY pSlotList,
    CK_ULONG_PTR pulCount
);

CK_RV
client_C_GetTokenInfo(
    CK_SLOT_ID slotID,
    CK_TOKEN_INFO_PTR pInfo
);

CK_RV
client_C_InitPIN(
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
);

CK_RV
client_C_InitToken(
    CK_SLOT_ID slotID,
    UTF8String pPin,
    CK_ULONG ulPinLen,
    UTF8String pLabel
);

CK_RV
client_C_Initialize(
    CK_VOID_PTR pInitArgs
);

CK_RV
client_C_Login(
    CK_SESSION_HANDLE hSession,
    CK_USER_TYPE userType,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
);

CK_RV
client_C_Logout(
    CK_SESSION_HANDLE hSession
);

CK_RV
client_C_OpenSession(
    CK_SLOT_ID slotID,
    CK_FLAGS flags,
    ANY pApplication,
    CK_NOTIFY notify,
    CK_SESSION_HANDLE_PTR phSession
);

CK_RV
client_C_SeedRandom(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulSeedLen
);

CK_RV
client_C_SetAttributeValue(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
);

CK_RV
client_C_SetOperationState(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG ulOperationStateLen,
    CK_OBJECT_HANDLE hEncryptionKey,
    CK_OBJECT_HANDLE hAuthenticationKey
);

CK_RV
client_C_SetPIN(
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pOldPin,
    CK_ULONG ulOldLen,
    CK_UTF8CHAR_ARRAY pNewPin,
    CK_ULONG ulNewPin
);

CK_RV
client_C_Sign(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
client_C_SignEncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
);

CK_RV
client_C_SignFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
client_C_SignInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_SignRecover(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
);

CK_RV
client_C_SignRecoverInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_SignUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
client_C_UnwrapKey(
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
client_C_Verify(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
);

CK_RV
client_C_VerifyFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
);

CK_RV
client_C_VerifyInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
);

CK_RV
client_C_VerifyRecover(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
);

CK_RV
client_C_VerifyUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
);

CK_RV
client_C_WaitForSlotEvent(
    CK_FLAGS flags,
    CK_SLOT_ID_PTR pSlot,
    CK_VOID_PTR pReserved
);

CK_RV
client_C_WrapKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hWrappingKey,
    CK_OBJECT_HANDLE hKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG_PTR pulWrappedKeyLen
);



#endif //KEEHIVE_CLIENT_H