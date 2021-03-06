#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>
#include "cryptoki.h"
#include "types.h"




void test_C_CancelFunction(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = C_CancelFunction(
        hSession
    );
};


void test_C_CloseAllSessions(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    

    CK_RV status = C_CloseAllSessions(
        slotID
    );
};


void test_C_CloseSession(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = C_CloseSession(
        hSession
    );
};


void test_C_CopyObject(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phObject_pointed = 12;
    CK_OBJECT_HANDLE_PTR phObject = &phObject_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_CopyObject(
        hSession,
        hObject,
        pTemplate,
        ulCount,
        phObject
    );
};


void test_C_CreateObject(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phObject_pointed = 12;
    CK_OBJECT_HANDLE_PTR phObject = &phObject_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_CreateObject(
        hSession,
        pTemplate,
        ulCount,
        phObject
    );
};


void test_C_Decrypt(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedDataLen = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDataLen_pointed = 0;
    CK_ULONG_PTR pulDataLen = &pulDataLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_Decrypt(
        hSession,
        pEncryptedData,
        ulEncryptedDataLen,
        pData,
        pulDataLen
    );
};


void test_C_DecryptDigestUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen_pointed = 0;
    CK_ULONG_PTR pulPartLen = &pulPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DecryptDigestUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_C_DecryptFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pLastPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulLastPartLen_pointed = 0;
    CK_ULONG_PTR pulLastPartLen = &pulLastPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DecryptFinal(
        hSession,
        pLastPart,
        pulLastPartLen
    );
};


void test_C_DecryptInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_DecryptInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_DecryptUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen_pointed = 0;
    CK_ULONG_PTR pulPartLen = &pulPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DecryptUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_C_DecryptVerifyUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen_pointed = 0;
    CK_ULONG_PTR pulPartLen = &pulPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DecryptVerifyUpdate(
        hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
    );
};


void test_C_DeriveKey(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hBaseKey = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulAttributeCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phKey_pointed = 12;
    CK_OBJECT_HANDLE_PTR phKey = &phKey_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_DeriveKey(
        hSession,
        pMechanism,
        hBaseKey,
        pTemplate,
        ulAttributeCount,
        phKey
    );
};


void test_C_DestroyObject(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    

    CK_RV status = C_DestroyObject(
        hSession,
        hObject
    );
};


void test_C_Digest(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pDigest = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDigestLen_pointed = 0;
    CK_ULONG_PTR pulDigestLen = &pulDigestLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_Digest(
        hSession,
        pData,
        ulDataLen,
        pDigest,
        pulDigestLen
    );
};


void test_C_DigestEncryptUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen_pointed = 0;
    CK_ULONG_PTR pulEncryptedPartLen = &pulEncryptedPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DigestEncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_C_DigestFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pDigest = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDigestLen_pointed = 0;
    CK_ULONG_PTR pulDigestLen = &pulDigestLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_DigestFinal(
        hSession,
        pDigest,
        pulDigestLen
    );
};


void test_C_DigestInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    

    CK_RV status = C_DigestInit(
        hSession,
        pMechanism
    );
};


void test_C_DigestKey(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_DigestKey(
        hSession,
        hKey
    );
};


void test_C_DigestUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = C_DigestUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_C_Encrypt(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedDataLen_pointed = 0;
    CK_ULONG_PTR pulEncryptedDataLen = &pulEncryptedDataLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_Encrypt(
        hSession,
        pData,
        ulDataLen,
        pEncryptedData,
        pulEncryptedDataLen
    );
};


void test_C_EncryptFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedDataLen_pointed = 0;
    CK_ULONG_PTR pulEncryptedDataLen = &pulEncryptedDataLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_EncryptFinal(
        hSession,
        pEncryptedData,
        pulEncryptedDataLen
    );
};


void test_C_EncryptInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_EncryptInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_EncryptUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen_pointed = 0;
    CK_ULONG_PTR pulEncryptedPartLen = &pulEncryptedPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_EncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_C_Finalize(void **state){

    (void) state; /* unused */

    ANY pReserved = NULL;
    

    CK_RV status = C_Finalize(
        pReserved
    );
};


void test_C_FindObjects(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE phObject[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    CK_ULONG ulMaxObjectCount = 13;
    CK_ULONG pulObjectCount_pointed = 0;
    CK_ULONG_PTR pulObjectCount = &pulObjectCount_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_FindObjects(
        hSession,
        phObject,
        ulMaxObjectCount,
        pulObjectCount
    );
};


void test_C_FindObjectsFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = C_FindObjectsFinal(
        hSession
    );
};


void test_C_FindObjectsInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = C_FindObjectsInit(
        hSession,
        pTemplate,
        ulCount
    );
};


void test_C_GenerateKey(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phKey_pointed = 12;
    CK_OBJECT_HANDLE_PTR phKey = &phKey_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_GenerateKey(
        hSession,
        pMechanism,
        pTemplate,
        ulCount,
        phKey
    );
};


void test_C_GenerateKeyPair(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_UTF8CHAR pPublicKeyTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pPublicKeyTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pPublicKeyTemplate[] = {
        {.type=CKA_LABEL, .pValue=pPublicKeyTemplate_label, .ulValueLen=sizeof(pPublicKeyTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pPublicKeyTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulPublicKeyAttributeCount = sizeof(pPublicKeyTemplate) / sizeof(CK_ATTRIBUTE);
    CK_UTF8CHAR pPrivateKeyTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pPrivateKeyTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pPrivateKeyTemplate[] = {
        {.type=CKA_LABEL, .pValue=pPrivateKeyTemplate_label, .ulValueLen=sizeof(pPrivateKeyTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pPrivateKeyTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulPrivateKeyAttributeCount = sizeof(pPrivateKeyTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phPublicKey_pointed = 12;
    CK_OBJECT_HANDLE_PTR phPublicKey = &phPublicKey_pointed; /* we do this funny to simplify code generation */
    CK_OBJECT_HANDLE phPrivateKey_pointed = 12;
    CK_OBJECT_HANDLE_PTR phPrivateKey = &phPrivateKey_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_GenerateKeyPair(
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


void test_C_GenerateRandom(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSeed = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulRandomLen = 13;
    

    CK_RV status = C_GenerateRandom(
        hSession,
        pSeed,
        ulRandomLen
    );
};


void test_C_GetAttributeValue(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = C_GetAttributeValue(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );
};


void test_C_GetFunctionStatus(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = C_GetFunctionStatus(
        hSession
    );
};


void test_C_GetInfo(void **state){

    (void) state; /* unused */

    CK_INFO_PTR pInfo = malloc(1024);
    

    CK_RV status = C_GetInfo(
        pInfo
    );
};


void test_C_GetMechanismInfo(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    CK_MECHANISM_TYPE type = 13;
    CK_MECHANISM_INFO_PTR pInfo = malloc(1024);
    

    CK_RV status = C_GetMechanismInfo(
        slotID,
        type,
        pInfo
    );
};


void test_C_GetMechanismList(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    CK_MECHANISM_TYPE pMechanismList[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    CK_ULONG pulCount_pointed = 0;
    CK_ULONG_PTR pulCount = &pulCount_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_GetMechanismList(
        slotID,
        pMechanismList,
        pulCount
    );
};


void test_C_GetObjectSize(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_ULONG pulSize_pointed = 0;
    CK_ULONG_PTR pulSize = &pulSize_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_GetObjectSize(
        hSession,
        hObject,
        pulSize
    );
};


void test_C_GetOperationState(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pOperationState = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulOperationStateLen_pointed = 0;
    CK_ULONG_PTR pulOperationStateLen = &pulOperationStateLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_GetOperationState(
        hSession,
        pOperationState,
        pulOperationStateLen
    );
};


void test_C_GetSessionInfo(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_SESSION_INFO_PTR pInfo = malloc(1024);
    

    CK_RV status = C_GetSessionInfo(
        hSession,
        pInfo
    );
};


void test_C_GetSlotInfo(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    CK_SLOT_INFO_PTR pInfo = malloc(1024);
    

    CK_RV status = C_GetSlotInfo(
        slotID,
        pInfo
    );
};


void test_C_GetSlotList(void **state){

    (void) state; /* unused */

    CK_BBOOL tokenPresent = CK_TRUE;
    CK_SLOT_ID pSlotList[] = { 1, 5, 19 };
    CK_ULONG pulCount_pointed = 0;
    CK_ULONG_PTR pulCount = &pulCount_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_GetSlotList(
        tokenPresent,
        pSlotList,
        pulCount
    );
};


void test_C_GetTokenInfo(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    CK_TOKEN_INFO_PTR pInfo = malloc(1024);
    

    CK_RV status = C_GetTokenInfo(
        slotID,
        pInfo
    );
};


void test_C_InitPIN(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR_ARRAY pPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    

    CK_RV status = C_InitPIN(
        hSession,
        pPin,
        ulPinLen
    );
};


void test_C_InitToken(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    UTF8String pPin = (UTF8String) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    UTF8String pLabel = (UTF8String) "abcdefghijklm";
    

    CK_RV status = C_InitToken(
        slotID,
        pPin,
        ulPinLen,
        pLabel
    );
};


void test_C_Initialize(void **state){

    (void) state; /* unused */

    CK_C_INITIALIZE_ARGS pInitArgs_pointed = { 
        .CreateMutex = NULL,
        .DestroyMutex = NULL,
        .LockMutex = NULL,
        .UnlockMutex = NULL,
        .flags = CKF_OS_LOCKING_OK,
        .pReserved = NULL
    };
    CK_C_INITIALIZE_ARGS_PTR pInitArgs = &pInitArgs_pointed; // we do this a bit weird to simplify code generation
    
    

    CK_RV status = C_Initialize(
        pInitArgs
    );
};


void test_C_Login(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_USER_TYPE userType = 13;
    CK_UTF8CHAR_ARRAY pPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    

    CK_RV status = C_Login(
        hSession,
        userType,
        pPin,
        ulPinLen
    );
};


void test_C_Logout(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = C_Logout(
        hSession
    );
};


void test_C_OpenSession(void **state){

    (void) state; /* unused */

    CK_SLOT_ID slotID = 13;
    CK_FLAGS flags = CKF_CLOCK_ON_TOKEN | CKF_DIGEST;
    ANY pApplication = NULL;
    CK_NOTIFY notify = NULL; // todo: set to notify_callback;
    CK_SESSION_HANDLE phSession_pointed = 0;
    CK_OBJECT_HANDLE_PTR phSession = &phSession_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_OpenSession(
        slotID,
        flags,
        pApplication,
        notify,
        phSession
    );
};


void test_C_SeedRandom(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSeed = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSeedLen = 13;
    

    CK_RV status = C_SeedRandom(
        hSession,
        pSeed,
        ulSeedLen
    );
};


void test_C_SetAttributeValue(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = C_SetAttributeValue(
        hSession,
        hObject,
        pTemplate,
        ulCount
    );
};


void test_C_SetOperationState(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pOperationState = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulOperationStateLen = 13;
    CK_OBJECT_HANDLE hEncryptionKey = 13;
    CK_OBJECT_HANDLE hAuthenticationKey = 13;
    

    CK_RV status = C_SetOperationState(
        hSession,
        pOperationState,
        ulOperationStateLen,
        hEncryptionKey,
        hAuthenticationKey
    );
};


void test_C_SetPIN(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR_ARRAY pOldPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulOldLen = 13;
    CK_UTF8CHAR_ARRAY pNewPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulNewPin = 13;
    

    CK_RV status = C_SetPIN(
        hSession,
        pOldPin,
        ulOldLen,
        pNewPin,
        ulNewPin
    );
};


void test_C_Sign(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen_pointed = 0;
    CK_ULONG_PTR pulSignatureLen = &pulSignatureLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_Sign(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );
};


void test_C_SignEncryptUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen_pointed = 0;
    CK_ULONG_PTR pulEncryptedPartLen = &pulEncryptedPartLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_SignEncryptUpdate(
        hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
    );
};


void test_C_SignFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen_pointed = 0;
    CK_ULONG_PTR pulSignatureLen = &pulSignatureLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_SignFinal(
        hSession,
        pSignature,
        pulSignatureLen
    );
};


void test_C_SignInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_SignInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_SignRecover(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen_pointed = 0;
    CK_ULONG_PTR pulSignatureLen = &pulSignatureLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_SignRecover(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
    );
};


void test_C_SignRecoverInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_SignRecoverInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_SignUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = C_SignUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_C_UnwrapKey(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hUnwrappingKey = 13;
    CK_BYTE_ARRAY pWrappedKey = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulWrappedKeyLen = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_BBOOL pTemplate_copyable = CK_TRUE;
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)},
        {.type=CKA_COPYABLE, .pValue=&pTemplate_copyable, .ulValueLen=sizeof(CK_BBOOL)},
    };
    CK_ULONG ulAttributeCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    CK_OBJECT_HANDLE phKey_pointed = 12;
    CK_OBJECT_HANDLE_PTR phKey = &phKey_pointed; /* we do this funny to simplify code generation */
    

    CK_RV status = C_UnwrapKey(
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


void test_C_Verify(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    

    CK_RV status = C_Verify(
        hSession,
        pData,
        ulDataLen,
        pSignature,
        ulSignatureLen
    );
};


void test_C_VerifyFinal(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    

    CK_RV status = C_VerifyFinal(
        hSession,
        pSignature,
        ulSignatureLen
    );
};


void test_C_VerifyInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_VerifyInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_VerifyRecover(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDataLen_pointed = 0;
    CK_ULONG_PTR pulDataLen = &pulDataLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_VerifyRecover(
        hSession,
        pSignature,
        ulSignatureLen,
        pData,
        pulDataLen
    );
};


void test_C_VerifyRecoverInit(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = C_VerifyRecoverInit(
        hSession,
        pMechanism,
        hKey
    );
};


void test_C_VerifyUpdate(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = C_VerifyUpdate(
        hSession,
        pPart,
        ulPartLen
    );
};


void test_C_WaitForSlotEvent(void **state){

    (void) state; /* unused */

    CK_FLAGS flags = CKF_CLOCK_ON_TOKEN | CKF_DIGEST;
    CK_SLOT_ID_PTR pSlot = malloc(1024);
    CK_VOID_PTR pReserved = NULL; // assuming reserved for future usage
    

    CK_RV status = C_WaitForSlotEvent(
        flags,
        pSlot,
        pReserved
    );
};


void test_C_WrapKey(void **state){

    (void) state; /* unused */

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism[] = {CKM_MD5, NULL, 0};
    CK_OBJECT_HANDLE hWrappingKey = 13;
    CK_OBJECT_HANDLE hKey = 13;
    CK_BYTE_ARRAY pWrappedKey = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulWrappedKeyLen_pointed = 0;
    CK_ULONG_PTR pulWrappedKeyLen = &pulWrappedKeyLen_pointed; /* we do this a bit weird to simplify code generation */
    

    CK_RV status = C_WrapKey(
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
            
            cmocka_unit_test(test_C_CancelFunction),
            cmocka_unit_test(test_C_CloseAllSessions),
            cmocka_unit_test(test_C_CloseSession),
            cmocka_unit_test(test_C_CopyObject),
            cmocka_unit_test(test_C_CreateObject),
            cmocka_unit_test(test_C_Decrypt),
            cmocka_unit_test(test_C_DecryptDigestUpdate),
            cmocka_unit_test(test_C_DecryptFinal),
            cmocka_unit_test(test_C_DecryptInit),
            cmocka_unit_test(test_C_DecryptUpdate),
            cmocka_unit_test(test_C_DecryptVerifyUpdate),
            cmocka_unit_test(test_C_DeriveKey),
            cmocka_unit_test(test_C_DestroyObject),
            cmocka_unit_test(test_C_Digest),
            cmocka_unit_test(test_C_DigestEncryptUpdate),
            cmocka_unit_test(test_C_DigestFinal),
            cmocka_unit_test(test_C_DigestInit),
            cmocka_unit_test(test_C_DigestKey),
            cmocka_unit_test(test_C_DigestUpdate),
            cmocka_unit_test(test_C_Encrypt),
            cmocka_unit_test(test_C_EncryptFinal),
            cmocka_unit_test(test_C_EncryptInit),
            cmocka_unit_test(test_C_EncryptUpdate),
            cmocka_unit_test(test_C_Finalize),
            cmocka_unit_test(test_C_FindObjects),
            cmocka_unit_test(test_C_FindObjectsFinal),
            cmocka_unit_test(test_C_FindObjectsInit),
            cmocka_unit_test(test_C_GenerateKey),
            cmocka_unit_test(test_C_GenerateKeyPair),
            cmocka_unit_test(test_C_GenerateRandom),
            cmocka_unit_test(test_C_GetAttributeValue),
            cmocka_unit_test(test_C_GetFunctionStatus),
            cmocka_unit_test(test_C_GetInfo),
            cmocka_unit_test(test_C_GetMechanismInfo),
            cmocka_unit_test(test_C_GetMechanismList),
            cmocka_unit_test(test_C_GetObjectSize),
            cmocka_unit_test(test_C_GetOperationState),
            cmocka_unit_test(test_C_GetSessionInfo),
            cmocka_unit_test(test_C_GetSlotInfo),
            cmocka_unit_test(test_C_GetSlotList),
            cmocka_unit_test(test_C_GetTokenInfo),
            cmocka_unit_test(test_C_InitPIN),
            cmocka_unit_test(test_C_InitToken),
            cmocka_unit_test(test_C_Initialize),
            cmocka_unit_test(test_C_Login),
            cmocka_unit_test(test_C_Logout),
            cmocka_unit_test(test_C_OpenSession),
            cmocka_unit_test(test_C_SeedRandom),
            cmocka_unit_test(test_C_SetAttributeValue),
            cmocka_unit_test(test_C_SetOperationState),
            cmocka_unit_test(test_C_SetPIN),
            cmocka_unit_test(test_C_Sign),
            cmocka_unit_test(test_C_SignEncryptUpdate),
            cmocka_unit_test(test_C_SignFinal),
            cmocka_unit_test(test_C_SignInit),
            cmocka_unit_test(test_C_SignRecover),
            cmocka_unit_test(test_C_SignRecoverInit),
            cmocka_unit_test(test_C_SignUpdate),
            cmocka_unit_test(test_C_UnwrapKey),
            cmocka_unit_test(test_C_Verify),
            cmocka_unit_test(test_C_VerifyFinal),
            cmocka_unit_test(test_C_VerifyInit),
            cmocka_unit_test(test_C_VerifyRecover),
            cmocka_unit_test(test_C_VerifyRecoverInit),
            cmocka_unit_test(test_C_VerifyUpdate),
            cmocka_unit_test(test_C_WaitForSlotEvent),
            cmocka_unit_test(test_C_WrapKey)
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}