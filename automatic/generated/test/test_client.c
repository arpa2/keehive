#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "client.h"




void test_client_C_CancelFunction(void **state){
    CK_SESSION_HANDLE hSession = 0;
    

    client_C_CancelFunction(
        hSession
    );
};


void test_client_C_CloseAllSessions(void **state){
    CK_SLOT_ID slotID = 0;
    

    client_C_CloseAllSessions(
        slotID
    );
};


void test_client_C_CloseSession(void **state){
    CK_SESSION_HANDLE hSession = 0;
    

    client_C_CloseSession(
        hSession
    );
};


void test_client_C_CopyObject(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phObject = NULL_PTR;
    

    client_C_CopyObject(
        hSession,
        hObject,
        pTemplate,
        ulCount,
        phObject
    );
};


void test_client_C_CreateObject(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phObject = NULL_PTR;
    

    client_C_CreateObject(
        hSession,
        pTemplate,
        ulCount,
        phObject
    );
};


void test_client_C_Decrypt(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG ulEncryptedDataLen = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG_PTR pulDataLen = NULL_PTR;
    

    client_C_Decrypt(
        hSession,
        pEncryptedData,
        ulEncryptedDataLen,
        pData,
        pulDataLen
    );
};


void test_client_C_DecryptDigestUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    client_C_DecryptDigestUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_client_C_DecryptFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pLastPart = NULL;
    CK_ULONG_PTR pulLastPartLen = NULL_PTR;
    

    client_C_DecryptFinal(
        hSession,
        pLastPart,
        pulLastPartLen
    );
};


void test_client_C_DecryptInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_DecryptInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_client_C_DecryptUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    client_C_DecryptUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_client_C_DecryptVerifyUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    client_C_DecryptVerifyUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_client_C_DeriveKey(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hBaseKey = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    client_C_DeriveKey(
        hSession,
        pMechanism,
        hBaseKey,
        pTemplate,
        ulAttributeCount,
        phKey
    );
};


void test_client_C_DestroyObject(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    

    client_C_DestroyObject(
        hSession,
        hObject
    );
};


void test_client_C_Digest(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG_PTR pulDigestLen = NULL_PTR;
    

    client_C_Digest(
        hSession,
        pData,
        ulDataLen,
        pDigest,
        pulDigestLen
    );
};


void test_client_C_DigestEncryptUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    client_C_DigestEncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_client_C_DigestFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG_PTR pulDigestLen = NULL_PTR;
    

    client_C_DigestFinal(
        hSession,
        pDigest,
        pulDigestLen
    );
};


void test_client_C_DigestInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    

    client_C_DigestInit(
        hSession,
        pMechanism
    );
};


void test_client_C_DigestKey(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_DigestKey(
        hSession,
        hKey
    );
};


void test_client_C_DigestUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    client_C_DigestUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_client_C_Encrypt(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG_PTR pulEncryptedDataLen = NULL_PTR;
    

    client_C_Encrypt(
        hSession,
        pData,
        ulDataLen,
        pEncryptedData,
        pulEncryptedDataLen
    );
};


void test_client_C_EncryptFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG_PTR pulEncryptedDataLen = NULL_PTR;
    

    client_C_EncryptFinal(
        hSession,
        pEncryptedData,
        pulEncryptedDataLen
    );
};


void test_client_C_EncryptInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_EncryptInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_client_C_EncryptUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    client_C_EncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_client_C_Finalize(void **state){
    ANY pReserved = NULL;
    

    client_C_Finalize(
        pReserved
    );
};


void test_client_C_FindObjects(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE_ARRAY phObject = NULL;
    CK_ULONG ulMaxObjectCount = 0;
    CK_ULONG_PTR pulObjectCount = NULL_PTR;
    

    client_C_FindObjects(
        hSession,
        phObject,
        ulMaxObjectCount,
        pulObjectCount
    );
};


void test_client_C_FindObjectsFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    

    client_C_FindObjectsFinal(
        hSession
    );
};


void test_client_C_FindObjectsInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    client_C_FindObjectsInit(
        hSession,
        pTemplate,
        ulCount
    );
};


void test_client_C_GenerateKey(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    client_C_GenerateKey(
        hSession,
        pMechanism,
        pTemplate,
        ulCount,
        phKey
    );
};


void test_client_C_GenerateKeyPair(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate = NULL;
    CK_ULONG ulPublicKeyAttributeCount = 0;
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate = NULL;
    CK_ULONG ulPrivateKeyAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phPublicKey = NULL_PTR;
    CK_OBJECT_HANDLE_PTR phPrivateKey = NULL_PTR;
    

    client_C_GenerateKeyPair(
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


void test_client_C_GenerateRandom(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSeed = NULL;
    CK_ULONG ulRandomLen = 0;
    

    client_C_GenerateRandom(
        hSession,
        pSeed,
        ulRandomLen
    );
};


void test_client_C_GetAttributeValue(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    client_C_GetAttributeValue(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );
};


void test_client_C_GetFunctionStatus(void **state){
    CK_SESSION_HANDLE hSession = 0;
    

    client_C_GetFunctionStatus(
        hSession
    );
};


void test_client_C_GetInfo(void **state){
    CK_INFO_PTR pInfo = NULL_PTR;
    

    client_C_GetInfo(
        pInfo
    );
};


void test_client_C_GetMechanismInfo(void **state){
    CK_SLOT_ID slotID = 0;
    CK_MECHANISM_TYPE type = 0;
    CK_MECHANISM_INFO_PTR pInfo = NULL_PTR;
    

    client_C_GetMechanismInfo(
        slotID,
        type,
        pInfo
    );
};


void test_client_C_GetMechanismList(void **state){
    CK_SLOT_ID slotID = 0;
    CK_MECHANISM_TYPE_ARRAY pMechanismList = NULL;
    CK_ULONG_PTR pulCount = NULL_PTR;
    

    client_C_GetMechanismList(
        slotID,
        pMechanismList,
        pulCount
    );
};


void test_client_C_GetObjectSize(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ULONG_PTR pulSize = NULL_PTR;
    

    client_C_GetObjectSize(
        hSession,
        hObject,
        pulSize
    );
};


void test_client_C_GetOperationState(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG_PTR pulOperationStateLen = NULL_PTR;
    

    client_C_GetOperationState(
        hSession,
        pOperationState,
        pulOperationStateLen
    );
};


void test_client_C_GetSessionInfo(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_SESSION_INFO_PTR pInfo = NULL_PTR;
    

    client_C_GetSessionInfo(
        hSession,
        pInfo
    );
};


void test_client_C_GetSlotInfo(void **state){
    CK_SLOT_ID slotID = 0;
    CK_SLOT_INFO_PTR pInfo = NULL_PTR;
    

    client_C_GetSlotInfo(
        slotID,
        pInfo
    );
};


void test_client_C_GetSlotList(void **state){
    CK_BBOOL tokenPresent = 0;
    CK_SLOT_ID_ARRAY pSlotList = NULL;
    CK_ULONG_PTR pulCount = NULL_PTR;
    

    client_C_GetSlotList(
        tokenPresent,
        pSlotList,
        pulCount
    );
};


void test_client_C_GetTokenInfo(void **state){
    CK_SLOT_ID slotID = 0;
    CK_TOKEN_INFO_PTR pInfo = NULL_PTR;
    

    client_C_GetTokenInfo(
        slotID,
        pInfo
    );
};


void test_client_C_InitPIN(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    client_C_InitPIN(
        hSession,
        pPin,
        ulPinLen
    );
};


void test_client_C_InitToken(void **state){
    CK_SLOT_ID slotID = 0;
    UTF8String pPin = NULL;
    CK_ULONG ulPinLen = 0;
    UTF8String pLabel = NULL;
    

    client_C_InitToken(
        slotID,
        pPin,
        ulPinLen,
        pLabel
    );
};


void test_client_C_Initialize(void **state){
    CK_C_INITIALIZE_ARGS_PTR pInitArgs = NULL_PTR;
    

    client_C_Initialize(
        pInitArgs
    );
};


void test_client_C_Login(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_USER_TYPE userType = 0;
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    client_C_Login(
        hSession,
        userType,
        pPin,
        ulPinLen
    );
};


void test_client_C_Logout(void **state){
    CK_SESSION_HANDLE hSession = 0;
    

    client_C_Logout(
        hSession
    );
};


void test_client_C_OpenSession(void **state){
    CK_SLOT_ID slotID = 0;
    CK_FLAGS flags = 0;
    ANY pApplication = NULL;
    CK_NOTIFY notify = NULL;
    CK_SESSION_HANDLE_PTR phSession = NULL_PTR;
    

    client_C_OpenSession(
        slotID,
        flags,
        pApplication,
        notify,
        phSession
    );
};


void test_client_C_SeedRandom(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSeed = NULL;
    CK_ULONG ulSeedLen = 0;
    

    client_C_SeedRandom(
        hSession,
        pSeed,
        ulSeedLen
    );
};


void test_client_C_SetAttributeValue(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    client_C_SetAttributeValue(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );
};


void test_client_C_SetOperationState(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG ulOperationStateLen = 0;
    CK_OBJECT_HANDLE hEncryptionKey = 0;
    CK_OBJECT_HANDLE hAuthenticationKey = 0;
    

    client_C_SetOperationState(
        hSession,
        pOperationState,
        ulOperationStateLen,
        hEncryptionKey,
        hAuthenticationKey
    );
};


void test_client_C_SetPIN(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pOldPin = NULL;
    CK_ULONG ulOldLen = 0;
    CK_UTF8CHAR_ARRAY pNewPin = NULL;
    CK_ULONG ulNewPin = 0;
    

    client_C_SetPIN(
        hSession,
        pOldPin,
        ulOldLen,
        pNewPin,
        ulNewPin
    );
};


void test_client_C_Sign(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    client_C_Sign(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );
};


void test_client_C_SignEncryptUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    client_C_SignEncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_client_C_SignFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    client_C_SignFinal(
        hSession,
        pSignature,
        pulSignatureLen
    );
};


void test_client_C_SignInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_SignInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_client_C_SignRecover(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    client_C_SignRecover(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );
};


void test_client_C_SignRecoverInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_SignRecoverInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_client_C_SignUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    client_C_SignUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_client_C_UnwrapKey(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hUnwrappingKey = 0;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG ulWrappedKeyLen = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    client_C_UnwrapKey(
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


void test_client_C_Verify(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    client_C_Verify(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        ulSignatureLen
    );
};


void test_client_C_VerifyFinal(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    client_C_VerifyFinal(
        hSession,
        pSignature,
        ulSignatureLen
    );
};


void test_client_C_VerifyInit(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    client_C_VerifyInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_client_C_VerifyRecover(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG_PTR pulDataLen = NULL_PTR;
    

    client_C_VerifyRecover(
        hSession,
        pSignature,
        ulSignatureLen,
        pData,
        pulDataLen
    );
};


void test_client_C_VerifyUpdate(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    client_C_VerifyUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_client_C_WaitForSlotEvent(void **state){
    CK_FLAGS flags = 0;
    CK_SLOT_ID_PTR pSlot = NULL_PTR;
    CK_VOID_PTR pReserved = NULL_PTR;
    

    client_C_WaitForSlotEvent(
        flags,
        pSlot,
        pReserved
    );
};


void test_client_C_WrapKey(void **state){
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hWrappingKey = 0;
    CK_OBJECT_HANDLE hKey = 0;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG_PTR pulWrappedKeyLen = NULL_PTR;
    

    client_C_WrapKey(
        hSession,
        pMechanism,
        hWrappingKey,
        hKey,
        pWrappedKey,
        pulWrappedKeyLen
    );
};




int main(void) {
    const struct CMUnitTest tests[] = {
            
            cmocka_unit_test(test_client_C_CancelFunction),
            cmocka_unit_test(test_client_C_CloseAllSessions),
            cmocka_unit_test(test_client_C_CloseSession),
            cmocka_unit_test(test_client_C_CopyObject),
            cmocka_unit_test(test_client_C_CreateObject),
            cmocka_unit_test(test_client_C_Decrypt),
            cmocka_unit_test(test_client_C_DecryptDigestUpdate),
            cmocka_unit_test(test_client_C_DecryptFinal),
            cmocka_unit_test(test_client_C_DecryptInit),
            cmocka_unit_test(test_client_C_DecryptUpdate),
            cmocka_unit_test(test_client_C_DecryptVerifyUpdate),
            cmocka_unit_test(test_client_C_DeriveKey),
            cmocka_unit_test(test_client_C_DestroyObject),
            cmocka_unit_test(test_client_C_Digest),
            cmocka_unit_test(test_client_C_DigestEncryptUpdate),
            cmocka_unit_test(test_client_C_DigestFinal),
            cmocka_unit_test(test_client_C_DigestInit),
            cmocka_unit_test(test_client_C_DigestKey),
            cmocka_unit_test(test_client_C_DigestUpdate),
            cmocka_unit_test(test_client_C_Encrypt),
            cmocka_unit_test(test_client_C_EncryptFinal),
            cmocka_unit_test(test_client_C_EncryptInit),
            cmocka_unit_test(test_client_C_EncryptUpdate),
            cmocka_unit_test(test_client_C_Finalize),
            cmocka_unit_test(test_client_C_FindObjects),
            cmocka_unit_test(test_client_C_FindObjectsFinal),
            cmocka_unit_test(test_client_C_FindObjectsInit),
            cmocka_unit_test(test_client_C_GenerateKey),
            cmocka_unit_test(test_client_C_GenerateKeyPair),
            cmocka_unit_test(test_client_C_GenerateRandom),
            cmocka_unit_test(test_client_C_GetAttributeValue),
            cmocka_unit_test(test_client_C_GetFunctionStatus),
            cmocka_unit_test(test_client_C_GetInfo),
            cmocka_unit_test(test_client_C_GetMechanismInfo),
            cmocka_unit_test(test_client_C_GetMechanismList),
            cmocka_unit_test(test_client_C_GetObjectSize),
            cmocka_unit_test(test_client_C_GetOperationState),
            cmocka_unit_test(test_client_C_GetSessionInfo),
            cmocka_unit_test(test_client_C_GetSlotInfo),
            cmocka_unit_test(test_client_C_GetSlotList),
            cmocka_unit_test(test_client_C_GetTokenInfo),
            cmocka_unit_test(test_client_C_InitPIN),
            cmocka_unit_test(test_client_C_InitToken),
            cmocka_unit_test(test_client_C_Initialize),
            cmocka_unit_test(test_client_C_Login),
            cmocka_unit_test(test_client_C_Logout),
            cmocka_unit_test(test_client_C_OpenSession),
            cmocka_unit_test(test_client_C_SeedRandom),
            cmocka_unit_test(test_client_C_SetAttributeValue),
            cmocka_unit_test(test_client_C_SetOperationState),
            cmocka_unit_test(test_client_C_SetPIN),
            cmocka_unit_test(test_client_C_Sign),
            cmocka_unit_test(test_client_C_SignEncryptUpdate),
            cmocka_unit_test(test_client_C_SignFinal),
            cmocka_unit_test(test_client_C_SignInit),
            cmocka_unit_test(test_client_C_SignRecover),
            cmocka_unit_test(test_client_C_SignRecoverInit),
            cmocka_unit_test(test_client_C_SignUpdate),
            cmocka_unit_test(test_client_C_UnwrapKey),
            cmocka_unit_test(test_client_C_Verify),
            cmocka_unit_test(test_client_C_VerifyFinal),
            cmocka_unit_test(test_client_C_VerifyInit),
            cmocka_unit_test(test_client_C_VerifyRecover),
            cmocka_unit_test(test_client_C_VerifyUpdate),
            cmocka_unit_test(test_client_C_WaitForSlotEvent),
            cmocka_unit_test(test_client_C_WrapKey)
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}