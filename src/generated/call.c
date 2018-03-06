#include "call.h"




CK_RV
call_C_CancelFunction(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
) {
    return ((*function_list)->C_CancelFunction)(
        hSession
    );

};


CK_RV
call_C_CloseAllSessions(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID
) {
    return ((*function_list)->C_CloseAllSessions)(
        slotID
    );

};


CK_RV
call_C_CloseSession(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
) {
    return ((*function_list)->C_CloseSession)(
        hSession
    );

};


CK_RV
call_C_CopyObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
) {
    return ((*function_list)->C_CopyObject)(
        hSession,
        hObject,
        pTemplate,
        ulCount,
        phObject
    );

};


CK_RV
call_C_CreateObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
) {
    return ((*function_list)->C_CreateObject)(
        hSession,
        pTemplate,
        ulCount,
        phObject
    );

};


CK_RV
call_C_Decrypt(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG ulEncryptedDataLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
) {
    return ((*function_list)->C_Decrypt)(
        hSession,
        pEncryptedData,
        ulEncryptedDataLen,
        pData,
        pulDataLen
    );

};


CK_RV
call_C_DecryptDigestUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    return ((*function_list)->C_DecryptDigestUpdate)(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );

};


CK_RV
call_C_DecryptFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pLastPart,
    CK_ULONG_PTR pulLastPartLen
) {
    return ((*function_list)->C_DecryptFinal)(
        hSession,
        pLastPart,
        pulLastPartLen
    );

};


CK_RV
call_C_DecryptInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_DecryptInit)(
        hSession,
        pMechanism,
        hKey
    );

};


CK_RV
call_C_DecryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    return ((*function_list)->C_DecryptUpdate)(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );

};


CK_RV
call_C_DecryptVerifyUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    return ((*function_list)->C_DecryptVerifyUpdate)(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );

};


CK_RV
call_C_DeriveKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hBaseKey,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
) {
    return ((*function_list)->C_DeriveKey)(
        hSession,
        pMechanism,
        hBaseKey,
        pTemplate,
        ulAttributeCount,
        phKey
    );

};


CK_RV
call_C_DestroyObject(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject
) {
    return ((*function_list)->C_DestroyObject)(
        hSession,
        hObject
    );

};


CK_RV
call_C_Digest(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
) {
    return ((*function_list)->C_Digest)(
        hSession,
        pData,
        ulDataLen,
        pDigest,
        pulDigestLen
    );

};


CK_RV
call_C_DigestEncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    return ((*function_list)->C_DigestEncryptUpdate)(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );

};


CK_RV
call_C_DigestFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
) {
    return ((*function_list)->C_DigestFinal)(
        hSession,
        pDigest,
        pulDigestLen
    );

};


CK_RV
call_C_DigestInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism
) {
    return ((*function_list)->C_DigestInit)(
        hSession,
        pMechanism
    );

};


CK_RV
call_C_DigestKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_DigestKey)(
        hSession,
        hKey
    );

};


CK_RV
call_C_DigestUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    return ((*function_list)->C_DigestUpdate)(
        hSession,
        pPart,
        ulPartLen
    );

};


CK_RV
call_C_Encrypt(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
) {
    return ((*function_list)->C_Encrypt)(
        hSession,
        pData,
        ulDataLen,
        pEncryptedData,
        pulEncryptedDataLen
    );

};


CK_RV
call_C_EncryptFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
) {
    return ((*function_list)->C_EncryptFinal)(
        hSession,
        pEncryptedData,
        pulEncryptedDataLen
    );

};


CK_RV
call_C_EncryptInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_EncryptInit)(
        hSession,
        pMechanism,
        hKey
    );

};


CK_RV
call_C_EncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    return ((*function_list)->C_EncryptUpdate)(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );

};


CK_RV
call_C_Finalize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    ANY pReserved
) {
    return ((*function_list)->C_Finalize)(
        pReserved
    );

};


CK_RV
call_C_FindObjects(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE_ARRAY phObject,
    CK_ULONG ulMaxObjectCount,
    CK_ULONG_PTR pulObjectCount
) {
    return ((*function_list)->C_FindObjects)(
        hSession,
        phObject,
        ulMaxObjectCount,
        pulObjectCount
    );

};


CK_RV
call_C_FindObjectsFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
) {
    return ((*function_list)->C_FindObjectsFinal)(
        hSession
    );

};


CK_RV
call_C_FindObjectsInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    return ((*function_list)->C_FindObjectsInit)(
        hSession,
        pTemplate,
        ulCount
    );

};


CK_RV
call_C_GenerateKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phKey
) {
    return ((*function_list)->C_GenerateKey)(
        hSession,
        pMechanism,
        pTemplate,
        ulCount,
        phKey
    );

};


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
) {
    return ((*function_list)->C_GenerateKeyPair)(
        hSession,
        pMechanism,
        pPublicKeyTemplate,
        ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        ulPrivateKeyAttributeCount,
        phPublicKey,
        phPrivateKey
    );

};


CK_RV
call_C_GenerateRandom(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulRandomLen
) {
    return ((*function_list)->C_GenerateRandom)(
        hSession,
        pSeed,
        ulRandomLen
    );

};


CK_RV
call_C_GetAttributeValue(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    return ((*function_list)->C_GetAttributeValue)(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );

};


CK_RV
call_C_GetFunctionStatus(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
) {
    return ((*function_list)->C_GetFunctionStatus)(
        hSession
    );

};


CK_RV
call_C_GetInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_INFO_PTR pInfo
) {
    return ((*function_list)->C_GetInfo)(
        pInfo
    );

};


CK_RV
call_C_GetMechanismInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE type,
    CK_MECHANISM_INFO_PTR pInfo
) {
    return ((*function_list)->C_GetMechanismInfo)(
        slotID,
        type,
        pInfo
    );

};


CK_RV
call_C_GetMechanismList(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE_ARRAY pMechanismList,
    CK_ULONG_PTR pulCount
) {
    return ((*function_list)->C_GetMechanismList)(
        slotID,
        pMechanismList,
        pulCount
    );

};


CK_RV
call_C_GetObjectSize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ULONG_PTR pulSize
) {
    return ((*function_list)->C_GetObjectSize)(
        hSession,
        hObject,
        pulSize
    );

};


CK_RV
call_C_GetOperationState(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG_PTR pulOperationStateLen
) {
    return ((*function_list)->C_GetOperationState)(
        hSession,
        pOperationState,
        pulOperationStateLen
    );

};


CK_RV
call_C_GetSessionInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_SESSION_INFO_PTR pInfo
) {
    return ((*function_list)->C_GetSessionInfo)(
        hSession,
        pInfo
    );

};


CK_RV
call_C_GetSlotInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_SLOT_INFO_PTR pInfo
) {
    return ((*function_list)->C_GetSlotInfo)(
        slotID,
        pInfo
    );

};


CK_RV
call_C_GetSlotList(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_ARRAY pSlotList,
    CK_ULONG_PTR pulCount
) {
    return ((*function_list)->C_GetSlotList)(
        tokenPresent,
        pSlotList,
        pulCount
    );

};


CK_RV
call_C_GetTokenInfo(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_TOKEN_INFO_PTR pInfo
) {
    return ((*function_list)->C_GetTokenInfo)(
        slotID,
        pInfo
    );

};


CK_RV
call_C_InitPIN(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
) {
    return ((*function_list)->C_InitPIN)(
        hSession,
        pPin,
        ulPinLen
    );

};


CK_RV
call_C_InitToken(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    UTF8String pPin,
    CK_ULONG ulPinLen,
    UTF8String pLabel
) {
    return ((*function_list)->C_InitToken)(
        slotID,
        pPin,
        ulPinLen,
        pLabel
    );

};


CK_RV
call_C_Initialize(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_VOID_PTR pInitArgs
) {
    return ((*function_list)->C_Initialize)(
        pInitArgs
    );

};


CK_RV
call_C_Login(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_USER_TYPE userType,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
) {
    return ((*function_list)->C_Login)(
        hSession,
        userType,
        pPin,
        ulPinLen
    );

};


CK_RV
call_C_Logout(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession
) {
    return ((*function_list)->C_Logout)(
        hSession
    );

};


CK_RV
call_C_OpenSession(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SLOT_ID slotID,
    CK_FLAGS flags,
    ANY pApplication,
    CK_NOTIFY notify,
    CK_SESSION_HANDLE_PTR phSession
) {
    return ((*function_list)->C_OpenSession)(
        slotID,
        flags,
        pApplication,
        notify,
        phSession
    );

};


CK_RV
call_C_SeedRandom(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulSeedLen
) {
    return ((*function_list)->C_SeedRandom)(
        hSession,
        pSeed,
        ulSeedLen
    );

};


CK_RV
call_C_SetAttributeValue(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    return ((*function_list)->C_SetAttributeValue)(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );

};


CK_RV
call_C_SetOperationState(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG ulOperationStateLen,
    CK_OBJECT_HANDLE hEncryptionKey,
    CK_OBJECT_HANDLE hAuthenticationKey
) {
    return ((*function_list)->C_SetOperationState)(
        hSession,
        pOperationState,
        ulOperationStateLen,
        hEncryptionKey,
        hAuthenticationKey
    );

};


CK_RV
call_C_SetPIN(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pOldPin,
    CK_ULONG ulOldLen,
    CK_UTF8CHAR_ARRAY pNewPin,
    CK_ULONG ulNewPin
) {
    return ((*function_list)->C_SetPIN)(
        hSession,
        pOldPin,
        ulOldLen,
        pNewPin,
        ulNewPin
    );

};


CK_RV
call_C_Sign(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    return ((*function_list)->C_Sign)(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );

};


CK_RV
call_C_SignEncryptUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    return ((*function_list)->C_SignEncryptUpdate)(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );

};


CK_RV
call_C_SignFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    return ((*function_list)->C_SignFinal)(
        hSession,
        pSignature,
        pulSignatureLen
    );

};


CK_RV
call_C_SignInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_SignInit)(
        hSession,
        pMechanism,
        hKey
    );

};


CK_RV
call_C_SignRecover(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    return ((*function_list)->C_SignRecover)(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );

};


CK_RV
call_C_SignRecoverInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_SignRecoverInit)(
        hSession,
        pMechanism,
        hKey
    );

};


CK_RV
call_C_SignUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    return ((*function_list)->C_SignUpdate)(
        hSession,
        pPart,
        ulPartLen
    );

};


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
) {
    return ((*function_list)->C_UnwrapKey)(
        hSession,
        pMechanism,
        hUnwrappingKey,
        pWrappedKey,
        ulWrappedKeyLen,
        pTemplate,
        ulAttributeCount,
        phKey
    );

};


CK_RV
call_C_Verify(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
) {
    return ((*function_list)->C_Verify)(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        ulSignatureLen
    );

};


CK_RV
call_C_VerifyFinal(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
) {
    return ((*function_list)->C_VerifyFinal)(
        hSession,
        pSignature,
        ulSignatureLen
    );

};


CK_RV
call_C_VerifyInit(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    return ((*function_list)->C_VerifyInit)(
        hSession,
        pMechanism,
        hKey
    );

};


CK_RV
call_C_VerifyRecover(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
) {
    return ((*function_list)->C_VerifyRecover)(
        hSession,
        pSignature,
        ulSignatureLen,
        pData,
        pulDataLen
    );

};


CK_RV
call_C_VerifyUpdate(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    return ((*function_list)->C_VerifyUpdate)(
        hSession,
        pPart,
        ulPartLen
    );

};


CK_RV
call_C_WaitForSlotEvent(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_FLAGS flags,
    CK_SLOT_ID_PTR pSlot,
    CK_VOID_PTR pReserved
) {
    return ((*function_list)->C_WaitForSlotEvent)(
        flags,
        pSlot,
        pReserved
    );

};


CK_RV
call_C_WrapKey(
    CK_FUNCTION_LIST_PTR_PTR function_list,
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hWrappingKey,
    CK_OBJECT_HANDLE hKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG_PTR pulWrappedKeyLen
) {
    return ((*function_list)->C_WrapKey)(
        hSession,
        pMechanism,
        hWrappingKey,
        hKey,
        pWrappedKey,
        pulWrappedKeyLen
    );

};
