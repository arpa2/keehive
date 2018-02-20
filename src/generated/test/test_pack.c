#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pack.h"
#include "unpack.h"

/* CK_NOTIFY is an application callback that processes events */
CK_RV notify_callback(
        CK_SESSION_HANDLE hSession,     /* the session's handle */
        CK_NOTIFICATION   event,
        CK_VOID_PTR       pApplication  /* passed to C_OpenSession */
) {
    return CKR_OK;
}
;



void test_pack_C_CancelFunction_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_CancelFunction_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_CancelFunction_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_CancelFunction_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CancelFunction_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_CancelFunction_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_CloseAllSessions_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    

    CK_RV status = pack_C_CloseAllSessions_Call(
        &dercursor,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    

    status = unpack_C_CloseAllSessions_Call(
        &dercursor,
        &slotID_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);



};

void test_pack_C_CloseAllSessions_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CloseAllSessions_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_CloseAllSessions_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_CloseSession_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_CloseSession_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_CloseSession_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_CloseSession_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CloseSession_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_CloseSession_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_CopyObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_CopyObject_Call(
        &dercursor,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hObject_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_CopyObject_Call(
        &dercursor,
        &hSession_unpack,
        &hObject_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hObject, hObject_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_CopyObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phObject = 13;
    

    CK_RV status = pack_C_CopyObject_Return(
        &dercursor,
        &retval,
        &phObject
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phObject_unpack = 0;
    

    status = unpack_C_CopyObject_Return(
        &dercursor,
        &retval_unpack,
        &phObject_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phObject, phObject_unpack);



};



void test_pack_C_CreateObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_CreateObject_Call(
        &dercursor,
        &hSession,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_CreateObject_Call(
        &dercursor,
        &hSession_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_CreateObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phObject = 13;
    

    CK_RV status = pack_C_CreateObject_Return(
        &dercursor,
        &retval,
        &phObject
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phObject_unpack = 0;
    

    status = unpack_C_CreateObject_Return(
        &dercursor,
        &retval_unpack,
        &phObject_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phObject, phObject_unpack);



};



void test_pack_C_Decrypt_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedDataLen = 13;
    CK_ULONG pulDataLen = 13;
    

    CK_RV status = pack_C_Decrypt_Call(
        &dercursor,
        &hSession,
        pEncryptedData,
        &ulEncryptedDataLen,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pEncryptedData_unpack = malloc(1024);
    CK_ULONG ulEncryptedDataLen_unpack = 0;
    CK_ULONG pulDataLen_unpack = 0;
    

    status = unpack_C_Decrypt_Call(
        &dercursor,
        &hSession_unpack,
        pEncryptedData_unpack,
        &ulEncryptedDataLen_unpack,
        &pulDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pEncryptedData, pEncryptedData_unpack, ulEncryptedDataLen);


    assert_int_equal(ulEncryptedDataLen, ulEncryptedDataLen_unpack);


    assert_int_equal(pulDataLen, pulDataLen_unpack);



};

void test_pack_C_Decrypt_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDataLen = 13;
    

    CK_RV status = pack_C_Decrypt_Return(
        &dercursor,
        &retval,
        pData,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG pulDataLen_unpack = 0;
    

    status = unpack_C_Decrypt_Return(
        &dercursor,
        &retval_unpack,
        pData_unpack,
        &pulDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pData, pData_unpack, pulDataLen);


    assert_int_equal(pulDataLen, pulDataLen_unpack);



};



void test_pack_C_DecryptDigestUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptDigestUpdate_Call(
        &dercursor,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG ulEncryptedPartLen_unpack = 0;
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptDigestUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pEncryptedPart_unpack,
        &ulEncryptedPartLen_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, ulEncryptedPartLen);


    assert_int_equal(ulEncryptedPartLen, ulEncryptedPartLen_unpack);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};

void test_pack_C_DecryptDigestUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptDigestUpdate_Return(
        &dercursor,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptDigestUpdate_Return(
        &dercursor,
        &retval_unpack,
        pPart_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pPart, pPart_unpack, pulPartLen);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};



void test_pack_C_DecryptFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG pulLastPartLen = 13;
    

    CK_RV status = pack_C_DecryptFinal_Call(
        &dercursor,
        &hSession,
        &pulLastPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG pulLastPartLen_unpack = 0;
    

    status = unpack_C_DecryptFinal_Call(
        &dercursor,
        &hSession_unpack,
        &pulLastPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pulLastPartLen, pulLastPartLen_unpack);



};

void test_pack_C_DecryptFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pLastPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulLastPartLen = 13;
    

    CK_RV status = pack_C_DecryptFinal_Return(
        &dercursor,
        &retval,
        pLastPart,
        &pulLastPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pLastPart_unpack = malloc(1024);
    CK_ULONG pulLastPartLen_unpack = 0;
    

    status = unpack_C_DecryptFinal_Return(
        &dercursor,
        &retval_unpack,
        pLastPart_unpack,
        &pulLastPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pLastPart, pLastPart_unpack, pulLastPartLen);


    assert_int_equal(pulLastPartLen, pulLastPartLen_unpack);



};



void test_pack_C_DecryptInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_DecryptInit_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_DecryptInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_DecryptInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DecryptInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_DecryptInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_DecryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptUpdate_Call(
        &dercursor,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG ulEncryptedPartLen_unpack = 0;
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pEncryptedPart_unpack,
        &ulEncryptedPartLen_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, ulEncryptedPartLen);


    assert_int_equal(ulEncryptedPartLen, ulEncryptedPartLen_unpack);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};

void test_pack_C_DecryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptUpdate_Return(
        &dercursor,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptUpdate_Return(
        &dercursor,
        &retval_unpack,
        pPart_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pPart, pPart_unpack, pulPartLen);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};



void test_pack_C_DecryptVerifyUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulEncryptedPartLen = 13;
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptVerifyUpdate_Call(
        &dercursor,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG ulEncryptedPartLen_unpack = 0;
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptVerifyUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pEncryptedPart_unpack,
        &ulEncryptedPartLen_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, ulEncryptedPartLen);


    assert_int_equal(ulEncryptedPartLen, ulEncryptedPartLen_unpack);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};

void test_pack_C_DecryptVerifyUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulPartLen = 13;
    

    CK_RV status = pack_C_DecryptVerifyUpdate_Return(
        &dercursor,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG pulPartLen_unpack = 0;
    

    status = unpack_C_DecryptVerifyUpdate_Return(
        &dercursor,
        &retval_unpack,
        pPart_unpack,
        &pulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pPart, pPart_unpack, pulPartLen);


    assert_int_equal(pulPartLen, pulPartLen_unpack);



};



void test_pack_C_DeriveKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hBaseKey = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulAttributeCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_DeriveKey_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hBaseKey,
        pTemplate,
        &ulAttributeCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hBaseKey_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulAttributeCount_unpack = 0;
    

    status = unpack_C_DeriveKey_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hBaseKey_unpack,
        pTemplate_unpack,
        &ulAttributeCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hBaseKey, hBaseKey_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulAttributeCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulAttributeCount, ulAttributeCount_unpack);



};

void test_pack_C_DeriveKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 13;
    

    CK_RV status = pack_C_DeriveKey_Return(
        &dercursor,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phKey_unpack = 0;
    

    status = unpack_C_DeriveKey_Return(
        &dercursor,
        &retval_unpack,
        &phKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phKey, phKey_unpack);



};



void test_pack_C_DestroyObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    

    CK_RV status = pack_C_DestroyObject_Call(
        &dercursor,
        &hSession,
        &hObject
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hObject_unpack = 0;
    

    status = unpack_C_DestroyObject_Call(
        &dercursor,
        &hSession_unpack,
        &hObject_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hObject, hObject_unpack);



};

void test_pack_C_DestroyObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DestroyObject_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_DestroyObject_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_Digest_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_ULONG pulDigestLen = 13;
    

    CK_RV status = pack_C_Digest_Call(
        &dercursor,
        &hSession,
        pData,
        &ulDataLen,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG ulDataLen_unpack = 0;
    CK_ULONG pulDigestLen_unpack = 0;
    

    status = unpack_C_Digest_Call(
        &dercursor,
        &hSession_unpack,
        pData_unpack,
        &ulDataLen_unpack,
        &pulDigestLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pData, pData_unpack, ulDataLen);


    assert_int_equal(ulDataLen, ulDataLen_unpack);


    assert_int_equal(pulDigestLen, pulDigestLen_unpack);



};

void test_pack_C_Digest_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pDigest = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDigestLen = 13;
    

    CK_RV status = pack_C_Digest_Return(
        &dercursor,
        &retval,
        pDigest,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pDigest_unpack = malloc(1024);
    CK_ULONG pulDigestLen_unpack = 0;
    

    status = unpack_C_Digest_Return(
        &dercursor,
        &retval_unpack,
        pDigest_unpack,
        &pulDigestLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pDigest, pDigest_unpack, pulDigestLen);


    assert_int_equal(pulDigestLen, pulDigestLen_unpack);



};



void test_pack_C_DigestEncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_DigestEncryptUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_DigestEncryptUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};

void test_pack_C_DigestEncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_DigestEncryptUpdate_Return(
        &dercursor,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_DigestEncryptUpdate_Return(
        &dercursor,
        &retval_unpack,
        pEncryptedPart_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, pulEncryptedPartLen);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};



void test_pack_C_DigestFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG pulDigestLen = 13;
    

    CK_RV status = pack_C_DigestFinal_Call(
        &dercursor,
        &hSession,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG pulDigestLen_unpack = 0;
    

    status = unpack_C_DigestFinal_Call(
        &dercursor,
        &hSession_unpack,
        &pulDigestLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pulDigestLen, pulDigestLen_unpack);



};

void test_pack_C_DigestFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pDigest = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDigestLen = 13;
    

    CK_RV status = pack_C_DigestFinal_Return(
        &dercursor,
        &retval,
        pDigest,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pDigest_unpack = malloc(1024);
    CK_ULONG pulDigestLen_unpack = 0;
    

    status = unpack_C_DigestFinal_Return(
        &dercursor,
        &retval_unpack,
        pDigest_unpack,
        &pulDigestLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pDigest, pDigest_unpack, pulDigestLen);


    assert_int_equal(pulDigestLen, pulDigestLen_unpack);



};



void test_pack_C_DigestInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    

    CK_RV status = pack_C_DigestInit_Call(
        &dercursor,
        &hSession,
        pMechanism
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    

    status = unpack_C_DigestInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);



};

void test_pack_C_DigestInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_DigestInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_DigestKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_DigestKey_Call(
        &dercursor,
        &hSession,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_DigestKey_Call(
        &dercursor,
        &hSession_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_DigestKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestKey_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_DigestKey_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_DigestUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = pack_C_DigestUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    

    status = unpack_C_DigestUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);



};

void test_pack_C_DigestUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestUpdate_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_DigestUpdate_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_Encrypt_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_ULONG pulEncryptedDataLen = 13;
    

    CK_RV status = pack_C_Encrypt_Call(
        &dercursor,
        &hSession,
        pData,
        &ulDataLen,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG ulDataLen_unpack = 0;
    CK_ULONG pulEncryptedDataLen_unpack = 0;
    

    status = unpack_C_Encrypt_Call(
        &dercursor,
        &hSession_unpack,
        pData_unpack,
        &ulDataLen_unpack,
        &pulEncryptedDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pData, pData_unpack, ulDataLen);


    assert_int_equal(ulDataLen, ulDataLen_unpack);


    assert_int_equal(pulEncryptedDataLen, pulEncryptedDataLen_unpack);



};

void test_pack_C_Encrypt_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedDataLen = 13;
    

    CK_RV status = pack_C_Encrypt_Return(
        &dercursor,
        &retval,
        pEncryptedData,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pEncryptedData_unpack = malloc(1024);
    CK_ULONG pulEncryptedDataLen_unpack = 0;
    

    status = unpack_C_Encrypt_Return(
        &dercursor,
        &retval_unpack,
        pEncryptedData_unpack,
        &pulEncryptedDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pEncryptedData, pEncryptedData_unpack, pulEncryptedDataLen);


    assert_int_equal(pulEncryptedDataLen, pulEncryptedDataLen_unpack);



};



void test_pack_C_EncryptFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG pulEncryptedDataLen = 13;
    

    CK_RV status = pack_C_EncryptFinal_Call(
        &dercursor,
        &hSession,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG pulEncryptedDataLen_unpack = 0;
    

    status = unpack_C_EncryptFinal_Call(
        &dercursor,
        &hSession_unpack,
        &pulEncryptedDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pulEncryptedDataLen, pulEncryptedDataLen_unpack);



};

void test_pack_C_EncryptFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedDataLen = 13;
    

    CK_RV status = pack_C_EncryptFinal_Return(
        &dercursor,
        &retval,
        pEncryptedData,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pEncryptedData_unpack = malloc(1024);
    CK_ULONG pulEncryptedDataLen_unpack = 0;
    

    status = unpack_C_EncryptFinal_Return(
        &dercursor,
        &retval_unpack,
        pEncryptedData_unpack,
        &pulEncryptedDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pEncryptedData, pEncryptedData_unpack, pulEncryptedDataLen);


    assert_int_equal(pulEncryptedDataLen, pulEncryptedDataLen_unpack);



};



void test_pack_C_EncryptInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_EncryptInit_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_EncryptInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_EncryptInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_EncryptInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_EncryptInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_EncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_EncryptUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_EncryptUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};

void test_pack_C_EncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_EncryptUpdate_Return(
        &dercursor,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_EncryptUpdate_Return(
        &dercursor,
        &retval_unpack,
        pEncryptedPart_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, pulEncryptedPartLen);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};



void test_pack_C_Finalize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_VOID_PTR pReserved = NULL_PTR;  /* todo: probably requires finetuning */
    

    CK_RV status = pack_C_Finalize_Call(
        &dercursor,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

    CK_VOID_PTR pReserved_unpack = malloc(1024);
    

    status = unpack_C_Finalize_Call(
        &dercursor,
        pReserved_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    // todo: finish
    // assert_int_equal(pReserved, pReserved_unpack);



};

void test_pack_C_Finalize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    ANY pReserved = NULL; /* todo: probably requires finetuning */
    

    CK_RV status = pack_C_Finalize_Return(
        &dercursor,
        &retval,
        &pReserved
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    ANY pReserved_unpack;
    

    status = unpack_C_Finalize_Return(
        &dercursor,
        &retval_unpack,
        &pReserved_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: finish pReserved (ANY)



};



void test_pack_C_FindObjects_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG ulMaxObjectCount = 13;
    

    CK_RV status = pack_C_FindObjects_Call(
        &dercursor,
        &hSession,
        &ulMaxObjectCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG ulMaxObjectCount_unpack = 0;
    

    status = unpack_C_FindObjects_Call(
        &dercursor,
        &hSession_unpack,
        &ulMaxObjectCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(ulMaxObjectCount, ulMaxObjectCount_unpack);



};

void test_pack_C_FindObjects_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE_ARRAY phObject = (CK_OBJECT_HANDLE_ARRAY) "abcdefghijklm";
    CK_ULONG pulObjectCount = 13;
    

    CK_RV status = pack_C_FindObjects_Return(
        &dercursor,
        &retval,
        phObject,
        &pulObjectCount
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE_ARRAY phObject_unpack = malloc(1024);
    CK_ULONG pulObjectCount_unpack = 0;
    

    status = unpack_C_FindObjects_Return(
        &dercursor,
        &retval_unpack,
        phObject_unpack,
        &pulObjectCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phObject, phObject_unpack);


    assert_int_equal(pulObjectCount, pulObjectCount_unpack);



};



void test_pack_C_FindObjectsFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_FindObjectsFinal_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_FindObjectsFinal_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_FindObjectsFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_FindObjectsFinal_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_FindObjectsFinal_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_FindObjectsInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_FindObjectsInit_Call(
        &dercursor,
        &hSession,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_FindObjectsInit_Call(
        &dercursor,
        &hSession_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_FindObjectsInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    

    CK_RV status = pack_C_FindObjectsInit_Return(
        &dercursor,
        &retval,
        pTemplate
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    

    status = unpack_C_FindObjectsInit_Return(
        &dercursor,
        &retval_unpack,
        pTemplate_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < (sizeof(pTemplate) / sizeof(CK_ATTRIBUTE)); pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/



};



void test_pack_C_GenerateKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_GenerateKey_Call(
        &dercursor,
        &hSession,
        pMechanism,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_GenerateKey_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_GenerateKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 13;
    

    CK_RV status = pack_C_GenerateKey_Return(
        &dercursor,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phKey_unpack = 0;
    

    status = unpack_C_GenerateKey_Return(
        &dercursor,
        &retval_unpack,
        &phKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phKey, phKey_unpack);



};



void test_pack_C_GenerateKeyPair_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_UTF8CHAR pPublicKeyTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pPublicKeyTemplate[] = {
        {.type=CKA_LABEL, .pValue=pPublicKeyTemplate_label, .ulValueLen=sizeof(pPublicKeyTemplate_label)-1} };
    CK_ULONG ulPublicKeyAttributeCount = 13;
    CK_UTF8CHAR pPrivateKeyTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pPrivateKeyTemplate[] = {
        {.type=CKA_LABEL, .pValue=pPrivateKeyTemplate_label, .ulValueLen=sizeof(pPrivateKeyTemplate_label)-1} };
    CK_ULONG ulPrivateKeyAttributeCount = 13;
    

    CK_RV status = pack_C_GenerateKeyPair_Call(
        &dercursor,
        &hSession,
        pMechanism,
        pPublicKeyTemplate,
        &ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        &ulPrivateKeyAttributeCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate_unpack = malloc(1024);
    CK_ULONG ulPublicKeyAttributeCount_unpack = 0;
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate_unpack = malloc(1024);
    CK_ULONG ulPrivateKeyAttributeCount_unpack = 0;
    

    status = unpack_C_GenerateKeyPair_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        pPublicKeyTemplate_unpack,
        &ulPublicKeyAttributeCount_unpack,
        pPrivateKeyTemplate_unpack,
        &ulPrivateKeyAttributeCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    // todo: finish
//  int pPublicKeyTemplate_i;
//  for (pPublicKeyTemplate_i = 0; pPublicKeyTemplate_i < ulPublicKeyAttributeCount; pPublicKeyTemplate_i++) {
//      assert_int_equal(pPublicKeyTemplate[pPublicKeyTemplate_i].type, pPublicKeyTemplate_unpack[pPublicKeyTemplate_i].type);
//      // todo: assert_ptr_equal(pPublicKeyTemplate[pPublicKeyTemplate_i].pValue, pPublicKeyTemplate_unpack[pPublicKeyTemplate_i].pValue);
//      assert_int_equal(pPublicKeyTemplate[pPublicKeyTemplate_i].ulValueLen, pPublicKeyTemplate_unpack[pPublicKeyTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulPublicKeyAttributeCount, ulPublicKeyAttributeCount_unpack);


    // todo: finish
//  int pPrivateKeyTemplate_i;
//  for (pPrivateKeyTemplate_i = 0; pPrivateKeyTemplate_i < ulPrivateKeyAttributeCount; pPrivateKeyTemplate_i++) {
//      assert_int_equal(pPrivateKeyTemplate[pPrivateKeyTemplate_i].type, pPrivateKeyTemplate_unpack[pPrivateKeyTemplate_i].type);
//      // todo: assert_ptr_equal(pPrivateKeyTemplate[pPrivateKeyTemplate_i].pValue, pPrivateKeyTemplate_unpack[pPrivateKeyTemplate_i].pValue);
//      assert_int_equal(pPrivateKeyTemplate[pPrivateKeyTemplate_i].ulValueLen, pPrivateKeyTemplate_unpack[pPrivateKeyTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulPrivateKeyAttributeCount, ulPrivateKeyAttributeCount_unpack);



};

void test_pack_C_GenerateKeyPair_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phPublicKey = 13;
    CK_OBJECT_HANDLE phPrivateKey = 13;
    

    CK_RV status = pack_C_GenerateKeyPair_Return(
        &dercursor,
        &retval,
        &phPublicKey,
        &phPrivateKey
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phPublicKey_unpack = 0;
    CK_OBJECT_HANDLE phPrivateKey_unpack = 0;
    

    status = unpack_C_GenerateKeyPair_Return(
        &dercursor,
        &retval_unpack,
        &phPublicKey_unpack,
        &phPrivateKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phPublicKey, phPublicKey_unpack);


    assert_int_equal(phPrivateKey, phPrivateKey_unpack);



};



void test_pack_C_GenerateRandom_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG ulRandomLen = 13;
    

    CK_RV status = pack_C_GenerateRandom_Call(
        &dercursor,
        &hSession,
        &ulRandomLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG ulRandomLen_unpack = 0;
    

    status = unpack_C_GenerateRandom_Call(
        &dercursor,
        &hSession_unpack,
        &ulRandomLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(ulRandomLen, ulRandomLen_unpack);



};

void test_pack_C_GenerateRandom_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSeed = (CK_BYTE_ARRAY) "abcdefghijklm";
    

    CK_RV status = pack_C_GenerateRandom_Return(
        &dercursor,
        &retval,
        pSeed
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pSeed_unpack = malloc(1024);
    

    status = unpack_C_GenerateRandom_Return(
        &dercursor,
        &retval_unpack,
        pSeed_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pSeed, pSeed_unpack, (sizeof(pSeed) / sizeof(CK_BYTE)) );



};



void test_pack_C_GetAttributeValue_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_GetAttributeValue_Call(
        &dercursor,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hObject_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_GetAttributeValue_Call(
        &dercursor,
        &hSession_unpack,
        &hObject_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hObject, hObject_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_GetAttributeValue_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    

    CK_RV status = pack_C_GetAttributeValue_Return(
        &dercursor,
        &retval,
        pTemplate
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    

    status = unpack_C_GetAttributeValue_Return(
        &dercursor,
        &retval_unpack,
        pTemplate_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < (sizeof(pTemplate) / sizeof(CK_ATTRIBUTE)); pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/



};



void test_pack_C_GetFunctionStatus_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_GetFunctionStatus_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_GetFunctionStatus_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_GetFunctionStatus_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_GetFunctionStatus_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_GetFunctionStatus_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_GetInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    

    CK_RV status = pack_C_GetInfo_Call(
        &dercursor
    );

    assert_int_equal(status, CKR_OK);

    

    status = unpack_C_GetInfo_Call(
        &dercursor
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);



};

void test_pack_C_GetInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_INFO pInfo = { .cryptokiVersion.major = 1,
                            .cryptokiVersion.minor = 1,
                            .manufacturerID = "gijs",
                            .flags = 1,
                            .libraryDescription = "gijs",
                            .libraryVersion.major = 1,
                            .libraryVersion.minor = 1 };
    

    CK_RV status = pack_C_GetInfo_Return(
        &dercursor,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_INFO pInfo_unpack;
    

    status = unpack_C_GetInfo_Return(
        &dercursor,
        &retval_unpack,
        &pInfo_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: assert for pInfo (CK_INFO)
    assert_false(true);



};



void test_pack_C_GetMechanismInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    CK_MECHANISM_TYPE type = 13;
    

    CK_RV status = pack_C_GetMechanismInfo_Call(
        &dercursor,
        &slotID,
        &type
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    CK_MECHANISM_TYPE type_unpack = 0;
    

    status = unpack_C_GetMechanismInfo_Call(
        &dercursor,
        &slotID_unpack,
        &type_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);


    assert_int_equal(type, type_unpack);



};

void test_pack_C_GetMechanismInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_MECHANISM_INFO pInfo = { .ulMinKeySize = 1,
                            .ulMaxKeySize = 1,
                            .flags = 1 };
    

    CK_RV status = pack_C_GetMechanismInfo_Return(
        &dercursor,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_MECHANISM_INFO pInfo_unpack;
    

    status = unpack_C_GetMechanismInfo_Return(
        &dercursor,
        &retval_unpack,
        &pInfo_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: assert for pInfo (CK_MECHANISM_INFO)
    assert_false(true);



};



void test_pack_C_GetMechanismList_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    CK_ULONG pulCount = 13;
    

    CK_RV status = pack_C_GetMechanismList_Call(
        &dercursor,
        &slotID,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    CK_ULONG pulCount_unpack = 0;
    

    status = unpack_C_GetMechanismList_Call(
        &dercursor,
        &slotID_unpack,
        &pulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);


    assert_int_equal(pulCount, pulCount_unpack);



};

void test_pack_C_GetMechanismList_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_MECHANISM_TYPE_ARRAY pMechanismList = NULL; /* todo: probably requires finetuning */
    CK_ULONG pulCount = 13;
    

    CK_RV status = pack_C_GetMechanismList_Return(
        &dercursor,
        &retval,
        pMechanismList,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_MECHANISM_TYPE_ARRAY pMechanismList_unpack = malloc(1024);
    CK_ULONG pulCount_unpack = 0;
    

    status = unpack_C_GetMechanismList_Return(
        &dercursor,
        &retval_unpack,
        pMechanismList_unpack,
        &pulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(pMechanismList, pMechanismList_unpack);


    assert_int_equal(pulCount, pulCount_unpack);



};



void test_pack_C_GetObjectSize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    

    CK_RV status = pack_C_GetObjectSize_Call(
        &dercursor,
        &hSession,
        &hObject
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hObject_unpack = 0;
    

    status = unpack_C_GetObjectSize_Call(
        &dercursor,
        &hSession_unpack,
        &hObject_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hObject, hObject_unpack);



};

void test_pack_C_GetObjectSize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_ULONG pulSize = 13;
    

    CK_RV status = pack_C_GetObjectSize_Return(
        &dercursor,
        &retval,
        &pulSize
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_ULONG pulSize_unpack = 0;
    

    status = unpack_C_GetObjectSize_Return(
        &dercursor,
        &retval_unpack,
        &pulSize_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(pulSize, pulSize_unpack);



};



void test_pack_C_GetOperationState_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG pulOperationStateLen = 13;
    

    CK_RV status = pack_C_GetOperationState_Call(
        &dercursor,
        &hSession,
        &pulOperationStateLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG pulOperationStateLen_unpack = 0;
    

    status = unpack_C_GetOperationState_Call(
        &dercursor,
        &hSession_unpack,
        &pulOperationStateLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pulOperationStateLen, pulOperationStateLen_unpack);



};

void test_pack_C_GetOperationState_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pOperationState = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulOperationStateLen = 13;
    

    CK_RV status = pack_C_GetOperationState_Return(
        &dercursor,
        &retval,
        pOperationState,
        &pulOperationStateLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pOperationState_unpack = malloc(1024);
    CK_ULONG pulOperationStateLen_unpack = 0;
    

    status = unpack_C_GetOperationState_Return(
        &dercursor,
        &retval_unpack,
        pOperationState_unpack,
        &pulOperationStateLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pOperationState, pOperationState_unpack, pulOperationStateLen);


    assert_int_equal(pulOperationStateLen, pulOperationStateLen_unpack);



};



void test_pack_C_GetSessionInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_GetSessionInfo_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_GetSessionInfo_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_GetSessionInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SESSION_INFO pInfo = { .slotID = 1, .state = 1, .flags = 1 };
    

    CK_RV status = pack_C_GetSessionInfo_Return(
        &dercursor,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_SESSION_INFO pInfo_unpack;
    

    status = unpack_C_GetSessionInfo_Return(
        &dercursor,
        &retval_unpack,
        &pInfo_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: assert for pInfo (CK_SESSION_INFO)
    assert_false(true);



};



void test_pack_C_GetSlotInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    

    CK_RV status = pack_C_GetSlotInfo_Call(
        &dercursor,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    

    status = unpack_C_GetSlotInfo_Call(
        &dercursor,
        &slotID_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);



};

void test_pack_C_GetSlotInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SLOT_INFO pInfo = { .slotDescription = "gijs",
                            .manufacturerID = "gijs",
                            .flags = 1,
                            .hardwareVersion.major = 1,
                            .hardwareVersion.minor = 1,
                            .firmwareVersion.major = 1,
                            .firmwareVersion.minor = 1 };
    

    CK_RV status = pack_C_GetSlotInfo_Return(
        &dercursor,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_SLOT_INFO pInfo_unpack;
    

    status = unpack_C_GetSlotInfo_Return(
        &dercursor,
        &retval_unpack,
        &pInfo_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: assert for pInfo (CK_SLOT_INFO)
    assert_false(true);



};



void test_pack_C_GetSlotList_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_BBOOL tokenPresent = CK_TRUE;
    CK_ULONG pulCount = 13;
    

    CK_RV status = pack_C_GetSlotList_Call(
        &dercursor,
        &tokenPresent,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_BBOOL tokenPresent_unpack = 0;
    CK_ULONG pulCount_unpack = 0;
    

    status = unpack_C_GetSlotList_Call(
        &dercursor,
        &tokenPresent_unpack,
        &pulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(tokenPresent, tokenPresent_unpack);


    assert_int_equal(pulCount, pulCount_unpack);



};

void test_pack_C_GetSlotList_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SLOT_ID_ARRAY pSlotList = NULL; /* todo: probably requires finetuning */
    CK_ULONG pulCount = 13;
    

    CK_RV status = pack_C_GetSlotList_Return(
        &dercursor,
        &retval,
        pSlotList,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_SLOT_ID_ARRAY pSlotList_unpack = malloc(1024);
    CK_ULONG pulCount_unpack = 0;
    

    status = unpack_C_GetSlotList_Return(
        &dercursor,
        &retval_unpack,
        pSlotList_unpack,
        &pulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(pSlotList, pSlotList_unpack);


    assert_int_equal(pulCount, pulCount_unpack);



};



void test_pack_C_GetTokenInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    

    CK_RV status = pack_C_GetTokenInfo_Call(
        &dercursor,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    

    status = unpack_C_GetTokenInfo_Call(
        &dercursor,
        &slotID_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);



};

void test_pack_C_GetTokenInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_TOKEN_INFO pInfo = {
                            .label = "labeltje",     
                            .manufacturerID = "manufacturetje",  
                            .model = "modeletje",
                            .serialNumber = "serialletje",    
                            .flags = 10,
                            .ulMaxSessionCount = 1,   
                            .ulSessionCount = 2,
                            .ulMaxRwSessionCount = 3, 
                            .ulRwSessionCount = 4,
                            .ulMaxPinLen = 5,
                            .ulMinPinLen = 6,         
                            .ulTotalPublicMemory = 7, 
                            .ulFreePublicMemory = 8,
                            .ulTotalPrivateMemory = 9,
                            .ulFreePrivateMemory = 10,
                            .hardwareVersion.major = 11,
                            .hardwareVersion.minor = 12,
                            .firmwareVersion.major = 13,
                            .firmwareVersion.minor = 14, 
                            .utcTime = "gijs time" };
    

    CK_RV status = pack_C_GetTokenInfo_Return(
        &dercursor,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_TOKEN_INFO pInfo_unpack;
    

    status = unpack_C_GetTokenInfo_Return(
        &dercursor,
        &retval_unpack,
        &pInfo_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: assert for pInfo (CK_TOKEN_INFO)
    assert_false(true);



};



void test_pack_C_InitPIN_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR_ARRAY pPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    

    CK_RV status = pack_C_InitPIN_Call(
        &dercursor,
        &hSession,
        pPin,
        &ulPinLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_UTF8CHAR_ARRAY pPin_unpack = malloc(1024);
    CK_ULONG ulPinLen_unpack = 0;
    

    status = unpack_C_InitPIN_Call(
        &dercursor,
        &hSession_unpack,
        pPin_unpack,
        &ulPinLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPin, pPin_unpack, ulPinLen);


    assert_int_equal(ulPinLen, ulPinLen_unpack);



};

void test_pack_C_InitPIN_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_InitPIN_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_InitPIN_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_InitToken_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    UTF8String pPin = (UTF8String) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    UTF8String pLabel = (UTF8String) "abcdefghijklm";
    

    CK_RV status = pack_C_InitToken_Call(
        &dercursor,
        &slotID,
        pPin,
        &ulPinLen,
        pLabel
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    UTF8String pPin_unpack = malloc(1024);
    CK_ULONG ulPinLen_unpack = 0;
    UTF8String pLabel_unpack = malloc(1024);
    

    status = unpack_C_InitToken_Call(
        &dercursor,
        &slotID_unpack,
        pPin_unpack,
        &ulPinLen_unpack,
        pLabel_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);


    assert_memory_equal(pPin, pPin_unpack, ulPinLen);


    assert_int_equal(ulPinLen, ulPinLen_unpack);


    assert_memory_equal(pLabel, pLabel_unpack, (sizeof(pLabel) / sizeof(UTF8String)));



};

void test_pack_C_InitToken_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_InitToken_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_InitToken_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_Initialize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_C_INITIALIZE_ARGS pInitArgs_pointed = {
        .CreateMutex = NULL_PTR,
        .DestroyMutex = NULL_PTR,
        .LockMutex = NULL_PTR,
        .UnlockMutex = NULL_PTR,
        .flags = CKF_OS_LOCKING_OK,
        .pReserved = NULL_PTR
    };
    CK_C_INITIALIZE_ARGS_PTR pInitArgs = &pInitArgs_pointed;
    pInitArgs = NULL_PTR; // todo: disabled for now, only works with null pointer. fix this.
    
    

    CK_RV status = pack_C_Initialize_Call(
        &dercursor,
        pInitArgs
    );

    assert_int_equal(status, CKR_OK);

    CK_C_INITIALIZE_ARGS_PTR pInitArgs_unpack = malloc(1024);
    

    status = unpack_C_Initialize_Call(
        &dercursor,
        pInitArgs_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    // todo: should we check for ANY?



};

void test_pack_C_Initialize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    ANY pInitArgs = NULL; /* todo: probably requires finetuning */
    

    CK_RV status = pack_C_Initialize_Return(
        &dercursor,
        &retval,
        &pInitArgs
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    ANY pInitArgs_unpack;
    

    status = unpack_C_Initialize_Return(
        &dercursor,
        &retval_unpack,
        &pInitArgs_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    // todo: finish pInitArgs (ANY)



};



void test_pack_C_Login_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_USER_TYPE userType = 13;
    CK_UTF8CHAR_ARRAY pPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulPinLen = 13;
    

    CK_RV status = pack_C_Login_Call(
        &dercursor,
        &hSession,
        &userType,
        pPin,
        &ulPinLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_USER_TYPE userType_unpack = 0;
    CK_UTF8CHAR_ARRAY pPin_unpack = malloc(1024);
    CK_ULONG ulPinLen_unpack = 0;
    

    status = unpack_C_Login_Call(
        &dercursor,
        &hSession_unpack,
        &userType_unpack,
        pPin_unpack,
        &ulPinLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(userType, userType_unpack);


    assert_memory_equal(pPin, pPin_unpack, ulPinLen);


    assert_int_equal(ulPinLen, ulPinLen_unpack);



};

void test_pack_C_Login_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Login_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_Login_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_Logout_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    

    CK_RV status = pack_C_Logout_Call(
        &dercursor,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    

    status = unpack_C_Logout_Call(
        &dercursor,
        &hSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);



};

void test_pack_C_Logout_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Logout_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_Logout_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_OpenSession_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 13;
    CK_FLAGS flags = 13;
    ANY pApplication = NULL; /* todo: probably requires finetuning */
    CK_NOTIFY notify = NULL_PTR; // todo: set to notify_callback;
    

    CK_RV status = pack_C_OpenSession_Call(
        &dercursor,
        &slotID,
        &flags,
        &pApplication,
        notify
    );

    assert_int_equal(status, CKR_OK);

    CK_SLOT_ID slotID_unpack = 0;
    CK_FLAGS flags_unpack = 0;
    ANY pApplication_unpack;
    CK_NOTIFY notify_unpack;
    

    status = unpack_C_OpenSession_Call(
        &dercursor,
        &slotID_unpack,
        &flags_unpack,
        &pApplication_unpack,
        notify_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(slotID, slotID_unpack);


    assert_int_equal(flags, flags_unpack);


    // todo: finish pApplication (ANY)


    assert_int_equal(notify, notify_unpack);



};

void test_pack_C_OpenSession_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SESSION_HANDLE phSession = 13;
    

    CK_RV status = pack_C_OpenSession_Return(
        &dercursor,
        &retval,
        &phSession
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_SESSION_HANDLE phSession_unpack = 0;
    

    status = unpack_C_OpenSession_Return(
        &dercursor,
        &retval_unpack,
        &phSession_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phSession, phSession_unpack);



};



void test_pack_C_SeedRandom_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSeed = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSeedLen = 13;
    

    CK_RV status = pack_C_SeedRandom_Call(
        &dercursor,
        &hSession,
        pSeed,
        &ulSeedLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pSeed_unpack = malloc(1024);
    CK_ULONG ulSeedLen_unpack = 0;
    

    status = unpack_C_SeedRandom_Call(
        &dercursor,
        &hSession_unpack,
        pSeed_unpack,
        &ulSeedLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pSeed, pSeed_unpack, ulSeedLen);


    assert_int_equal(ulSeedLen, ulSeedLen_unpack);



};

void test_pack_C_SeedRandom_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SeedRandom_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SeedRandom_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_SetAttributeValue_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_OBJECT_HANDLE hObject = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_SetAttributeValue_Call(
        &dercursor,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_OBJECT_HANDLE hObject_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulCount_unpack = 0;
    

    status = unpack_C_SetAttributeValue_Call(
        &dercursor,
        &hSession_unpack,
        &hObject_unpack,
        pTemplate_unpack,
        &ulCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(hObject, hObject_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulCount, ulCount_unpack);



};

void test_pack_C_SetAttributeValue_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetAttributeValue_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SetAttributeValue_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_SetOperationState_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pOperationState = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulOperationStateLen = 13;
    CK_OBJECT_HANDLE hEncryptionKey = 13;
    CK_OBJECT_HANDLE hAuthenticationKey = 13;
    

    CK_RV status = pack_C_SetOperationState_Call(
        &dercursor,
        &hSession,
        pOperationState,
        &ulOperationStateLen,
        &hEncryptionKey,
        &hAuthenticationKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pOperationState_unpack = malloc(1024);
    CK_ULONG ulOperationStateLen_unpack = 0;
    CK_OBJECT_HANDLE hEncryptionKey_unpack = 0;
    CK_OBJECT_HANDLE hAuthenticationKey_unpack = 0;
    

    status = unpack_C_SetOperationState_Call(
        &dercursor,
        &hSession_unpack,
        pOperationState_unpack,
        &ulOperationStateLen_unpack,
        &hEncryptionKey_unpack,
        &hAuthenticationKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pOperationState, pOperationState_unpack, ulOperationStateLen);


    assert_int_equal(ulOperationStateLen, ulOperationStateLen_unpack);


    assert_int_equal(hEncryptionKey, hEncryptionKey_unpack);


    assert_int_equal(hAuthenticationKey, hAuthenticationKey_unpack);



};

void test_pack_C_SetOperationState_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetOperationState_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SetOperationState_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_SetPIN_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_UTF8CHAR_ARRAY pOldPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulOldLen = 13;
    CK_UTF8CHAR_ARRAY pNewPin = (CK_UTF8CHAR_ARRAY) "abcdefghijklm";
    CK_ULONG ulNewPin = 13;
    

    CK_RV status = pack_C_SetPIN_Call(
        &dercursor,
        &hSession,
        pOldPin,
        &ulOldLen,
        pNewPin,
        &ulNewPin
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_UTF8CHAR_ARRAY pOldPin_unpack = malloc(1024);
    CK_ULONG ulOldLen_unpack = 0;
    CK_UTF8CHAR_ARRAY pNewPin_unpack = malloc(1024);
    CK_ULONG ulNewPin_unpack = 0;
    

    status = unpack_C_SetPIN_Call(
        &dercursor,
        &hSession_unpack,
        pOldPin_unpack,
        &ulOldLen_unpack,
        pNewPin_unpack,
        &ulNewPin_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pOldPin, pOldPin_unpack, ulOldLen);


    assert_int_equal(ulOldLen, ulOldLen_unpack);


    assert_memory_equal(pNewPin, pNewPin_unpack, ulNewPin);


    assert_int_equal(ulNewPin, ulNewPin_unpack);



};

void test_pack_C_SetPIN_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetPIN_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SetPIN_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_Sign_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_Sign_Call(
        &dercursor,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG ulDataLen_unpack = 0;
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_Sign_Call(
        &dercursor,
        &hSession_unpack,
        pData_unpack,
        &ulDataLen_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pData, pData_unpack, ulDataLen);


    assert_int_equal(ulDataLen, ulDataLen_unpack);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};

void test_pack_C_Sign_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_Sign_Return(
        &dercursor,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_Sign_Return(
        &dercursor,
        &retval_unpack,
        pSignature_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, pulSignatureLen);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};



void test_pack_C_SignEncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_SignEncryptUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_SignEncryptUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};

void test_pack_C_SignEncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulEncryptedPartLen = 13;
    

    CK_RV status = pack_C_SignEncryptUpdate_Return(
        &dercursor,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pEncryptedPart_unpack = malloc(1024);
    CK_ULONG pulEncryptedPartLen_unpack = 0;
    

    status = unpack_C_SignEncryptUpdate_Return(
        &dercursor,
        &retval_unpack,
        pEncryptedPart_unpack,
        &pulEncryptedPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pEncryptedPart, pEncryptedPart_unpack, pulEncryptedPartLen);


    assert_int_equal(pulEncryptedPartLen, pulEncryptedPartLen_unpack);



};



void test_pack_C_SignFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_SignFinal_Call(
        &dercursor,
        &hSession,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_SignFinal_Call(
        &dercursor,
        &hSession_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};

void test_pack_C_SignFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_SignFinal_Return(
        &dercursor,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_SignFinal_Return(
        &dercursor,
        &retval_unpack,
        pSignature_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, pulSignatureLen);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};



void test_pack_C_SignInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_SignInit_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_SignInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_SignInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SignInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_SignRecover_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_SignRecover_Call(
        &dercursor,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG ulDataLen_unpack = 0;
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_SignRecover_Call(
        &dercursor,
        &hSession_unpack,
        pData_unpack,
        &ulDataLen_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pData, pData_unpack, ulDataLen);


    assert_int_equal(ulDataLen, ulDataLen_unpack);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};

void test_pack_C_SignRecover_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulSignatureLen = 13;
    

    CK_RV status = pack_C_SignRecover_Return(
        &dercursor,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG pulSignatureLen_unpack = 0;
    

    status = unpack_C_SignRecover_Return(
        &dercursor,
        &retval_unpack,
        pSignature_unpack,
        &pulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, pulSignatureLen);


    assert_int_equal(pulSignatureLen, pulSignatureLen_unpack);



};



void test_pack_C_SignRecoverInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_SignRecoverInit_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_SignRecoverInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_SignRecoverInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignRecoverInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SignRecoverInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_SignUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = pack_C_SignUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    

    status = unpack_C_SignUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);



};

void test_pack_C_SignUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignUpdate_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_SignUpdate_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_UnwrapKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hUnwrappingKey = 13;
    CK_BYTE_ARRAY pWrappedKey = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulWrappedKeyLen = 13;
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {.type=CKA_LABEL, .pValue=pTemplate_label, .ulValueLen=sizeof(pTemplate_label)-1} };
    CK_ULONG ulAttributeCount = sizeof(pTemplate) / sizeof(CK_ATTRIBUTE);
    

    CK_RV status = pack_C_UnwrapKey_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hUnwrappingKey,
        pWrappedKey,
        &ulWrappedKeyLen,
        pTemplate,
        &ulAttributeCount
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hUnwrappingKey_unpack = 0;
    CK_BYTE_ARRAY pWrappedKey_unpack = malloc(1024);
    CK_ULONG ulWrappedKeyLen_unpack = 0;
    CK_ATTRIBUTE_ARRAY pTemplate_unpack = malloc(1024);
    CK_ULONG ulAttributeCount_unpack = 0;
    

    status = unpack_C_UnwrapKey_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hUnwrappingKey_unpack,
        pWrappedKey_unpack,
        &ulWrappedKeyLen_unpack,
        pTemplate_unpack,
        &ulAttributeCount_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hUnwrappingKey, hUnwrappingKey_unpack);


    assert_memory_equal(pWrappedKey, pWrappedKey_unpack, ulWrappedKeyLen);


    assert_int_equal(ulWrappedKeyLen, ulWrappedKeyLen_unpack);


    // todo: finish
//  int pTemplate_i;
//  for (pTemplate_i = 0; pTemplate_i < ulAttributeCount; pTemplate_i++) {
//      assert_int_equal(pTemplate[pTemplate_i].type, pTemplate_unpack[pTemplate_i].type);
//      // todo: assert_ptr_equal(pTemplate[pTemplate_i].pValue, pTemplate_unpack[pTemplate_i].pValue);
//      assert_int_equal(pTemplate[pTemplate_i].ulValueLen, pTemplate_unpack[pTemplate_i].ulValueLen);
//  }*/


    assert_int_equal(ulAttributeCount, ulAttributeCount_unpack);



};

void test_pack_C_UnwrapKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 13;
    

    CK_RV status = pack_C_UnwrapKey_Return(
        &dercursor,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_OBJECT_HANDLE phKey_unpack = 0;
    

    status = unpack_C_UnwrapKey_Return(
        &dercursor,
        &retval_unpack,
        &phKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(phKey, phKey_unpack);



};



void test_pack_C_Verify_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulDataLen = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    

    CK_RV status = pack_C_Verify_Call(
        &dercursor,
        &hSession,
        pData,
        &ulDataLen,
        pSignature,
        &ulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG ulDataLen_unpack = 0;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG ulSignatureLen_unpack = 0;
    

    status = unpack_C_Verify_Call(
        &dercursor,
        &hSession_unpack,
        pData_unpack,
        &ulDataLen_unpack,
        pSignature_unpack,
        &ulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pData, pData_unpack, ulDataLen);


    assert_int_equal(ulDataLen, ulDataLen_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, ulSignatureLen);


    assert_int_equal(ulSignatureLen, ulSignatureLen_unpack);



};

void test_pack_C_Verify_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Verify_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_Verify_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_VerifyFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    

    CK_RV status = pack_C_VerifyFinal_Call(
        &dercursor,
        &hSession,
        pSignature,
        &ulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG ulSignatureLen_unpack = 0;
    

    status = unpack_C_VerifyFinal_Call(
        &dercursor,
        &hSession_unpack,
        pSignature_unpack,
        &ulSignatureLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, ulSignatureLen);


    assert_int_equal(ulSignatureLen, ulSignatureLen_unpack);



};

void test_pack_C_VerifyFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyFinal_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_VerifyFinal_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_VerifyInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hKey = 13;
    

    CK_RV status = pack_C_VerifyInit_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hKey_unpack = 0;
    

    status = unpack_C_VerifyInit_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hKey_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hKey, hKey_unpack);



};

void test_pack_C_VerifyInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyInit_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_VerifyInit_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_VerifyRecover_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pSignature = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulSignatureLen = 13;
    CK_ULONG pulDataLen = 13;
    

    CK_RV status = pack_C_VerifyRecover_Call(
        &dercursor,
        &hSession,
        pSignature,
        &ulSignatureLen,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pSignature_unpack = malloc(1024);
    CK_ULONG ulSignatureLen_unpack = 0;
    CK_ULONG pulDataLen_unpack = 0;
    

    status = unpack_C_VerifyRecover_Call(
        &dercursor,
        &hSession_unpack,
        pSignature_unpack,
        &ulSignatureLen_unpack,
        &pulDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pSignature, pSignature_unpack, ulSignatureLen);


    assert_int_equal(ulSignatureLen, ulSignatureLen_unpack);


    assert_int_equal(pulDataLen, pulDataLen_unpack);



};

void test_pack_C_VerifyRecover_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pData = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulDataLen = 13;
    

    CK_RV status = pack_C_VerifyRecover_Return(
        &dercursor,
        &retval,
        pData,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pData_unpack = malloc(1024);
    CK_ULONG pulDataLen_unpack = 0;
    

    status = unpack_C_VerifyRecover_Return(
        &dercursor,
        &retval_unpack,
        pData_unpack,
        &pulDataLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pData, pData_unpack, pulDataLen);


    assert_int_equal(pulDataLen, pulDataLen_unpack);



};



void test_pack_C_VerifyUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_BYTE_ARRAY pPart = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG ulPartLen = 13;
    

    CK_RV status = pack_C_VerifyUpdate_Call(
        &dercursor,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_BYTE_ARRAY pPart_unpack = malloc(1024);
    CK_ULONG ulPartLen_unpack = 0;
    

    status = unpack_C_VerifyUpdate_Call(
        &dercursor,
        &hSession_unpack,
        pPart_unpack,
        &ulPartLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_memory_equal(pPart, pPart_unpack, ulPartLen);


    assert_int_equal(ulPartLen, ulPartLen_unpack);



};

void test_pack_C_VerifyUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyUpdate_Return(
        &dercursor,
        &retval
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    

    status = unpack_C_VerifyUpdate_Return(
        &dercursor,
        &retval_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);



};



void test_pack_C_WaitForSlotEvent_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_FLAGS flags = 13;
    CK_VOID_PTR pReserved = NULL_PTR;  /* todo: probably requires finetuning */
    

    CK_RV status = pack_C_WaitForSlotEvent_Call(
        &dercursor,
        &flags,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

    CK_FLAGS flags_unpack = 0;
    CK_VOID_PTR pReserved_unpack = malloc(1024);
    

    status = unpack_C_WaitForSlotEvent_Call(
        &dercursor,
        &flags_unpack,
        pReserved_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(flags, flags_unpack);


    // todo: finish
    // assert_int_equal(pReserved, pReserved_unpack);



};

void test_pack_C_WaitForSlotEvent_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SLOT_ID pSlot = 13;
    CK_VOID_PTR pReserved = NULL_PTR;  /* todo: probably requires finetuning */
    

    CK_RV status = pack_C_WaitForSlotEvent_Return(
        &dercursor,
        &retval,
        &pSlot,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_SLOT_ID pSlot_unpack = 0;
    CK_VOID_PTR pReserved_unpack = malloc(1024);
    

    status = unpack_C_WaitForSlotEvent_Return(
        &dercursor,
        &retval_unpack,
        &pSlot_unpack,
        pReserved_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_int_equal(pSlot, pSlot_unpack);


    // todo: finish
    // assert_int_equal(pReserved, pReserved_unpack);



};



void test_pack_C_WrapKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 13;
    CK_MECHANISM pMechanism_pointed = {CKM_MD5, NULL_PTR, 0};
    CK_MECHANISM_PTR pMechanism = &pMechanism_pointed; 
    CK_OBJECT_HANDLE hWrappingKey = 13;
    CK_OBJECT_HANDLE hKey = 13;
    CK_ULONG pulWrappedKeyLen = 13;
    

    CK_RV status = pack_C_WrapKey_Call(
        &dercursor,
        &hSession,
        pMechanism,
        &hWrappingKey,
        &hKey,
        &pulWrappedKeyLen
    );

    assert_int_equal(status, CKR_OK);

    CK_SESSION_HANDLE hSession_unpack = 0;
    CK_MECHANISM_PTR pMechanism_unpack = malloc(1024);
    CK_OBJECT_HANDLE hWrappingKey_unpack = 0;
    CK_OBJECT_HANDLE hKey_unpack = 0;
    CK_ULONG pulWrappedKeyLen_unpack = 0;
    

    status = unpack_C_WrapKey_Call(
        &dercursor,
        &hSession_unpack,
        pMechanism_unpack,
        &hWrappingKey_unpack,
        &hKey_unpack,
        &pulWrappedKeyLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(hSession, hSession_unpack);


    assert_int_equal(pMechanism->pParameter, pMechanism_unpack->pParameter);
    assert_int_equal(pMechanism->ulParameterLen, pMechanism_unpack->ulParameterLen);
    assert_int_equal(pMechanism->mechanism, pMechanism_unpack->mechanism);


    assert_int_equal(hWrappingKey, hWrappingKey_unpack);


    assert_int_equal(hKey, hKey_unpack);


    assert_int_equal(pulWrappedKeyLen, pulWrappedKeyLen_unpack);



};

void test_pack_C_WrapKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pWrappedKey = (CK_BYTE_ARRAY) "abcdefghijklm";
    CK_ULONG pulWrappedKeyLen = 13;
    

    CK_RV status = pack_C_WrapKey_Return(
        &dercursor,
        &retval,
        pWrappedKey,
        &pulWrappedKeyLen
    );

    assert_int_equal(status, CKR_OK);

    CK_RV retval_unpack;
    CK_BYTE_ARRAY pWrappedKey_unpack = malloc(1024);
    CK_ULONG pulWrappedKeyLen_unpack = 0;
    

    status = unpack_C_WrapKey_Return(
        &dercursor,
        &retval_unpack,
        pWrappedKey_unpack,
        &pulWrappedKeyLen_unpack
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);


    assert_int_equal(retval, retval_unpack);


    assert_memory_equal(pWrappedKey, pWrappedKey_unpack, pulWrappedKeyLen);


    assert_int_equal(pulWrappedKeyLen, pulWrappedKeyLen_unpack);



};




int main(void) {
    const struct CMUnitTest tests[] = {
            
            cmocka_unit_test(test_pack_C_CancelFunction_Call),
            cmocka_unit_test(test_pack_C_CloseAllSessions_Call),
            cmocka_unit_test(test_pack_C_CloseSession_Call),
            cmocka_unit_test(test_pack_C_CopyObject_Call),
            cmocka_unit_test(test_pack_C_CreateObject_Call),
            cmocka_unit_test(test_pack_C_Decrypt_Call),
            cmocka_unit_test(test_pack_C_DecryptDigestUpdate_Call),
            cmocka_unit_test(test_pack_C_DecryptFinal_Call),
            cmocka_unit_test(test_pack_C_DecryptInit_Call),
            cmocka_unit_test(test_pack_C_DecryptUpdate_Call),
            cmocka_unit_test(test_pack_C_DecryptVerifyUpdate_Call),
            cmocka_unit_test(test_pack_C_DeriveKey_Call),
            cmocka_unit_test(test_pack_C_DestroyObject_Call),
            cmocka_unit_test(test_pack_C_Digest_Call),
            cmocka_unit_test(test_pack_C_DigestEncryptUpdate_Call),
            cmocka_unit_test(test_pack_C_DigestFinal_Call),
            cmocka_unit_test(test_pack_C_DigestInit_Call),
            cmocka_unit_test(test_pack_C_DigestKey_Call),
            cmocka_unit_test(test_pack_C_DigestUpdate_Call),
            cmocka_unit_test(test_pack_C_Encrypt_Call),
            cmocka_unit_test(test_pack_C_EncryptFinal_Call),
            cmocka_unit_test(test_pack_C_EncryptInit_Call),
            cmocka_unit_test(test_pack_C_EncryptUpdate_Call),
            cmocka_unit_test(test_pack_C_Finalize_Call),
            cmocka_unit_test(test_pack_C_FindObjects_Call),
            cmocka_unit_test(test_pack_C_FindObjectsFinal_Call),
            cmocka_unit_test(test_pack_C_FindObjectsInit_Call),
            cmocka_unit_test(test_pack_C_GenerateKey_Call),
            cmocka_unit_test(test_pack_C_GenerateKeyPair_Call),
            cmocka_unit_test(test_pack_C_GenerateRandom_Call),
            cmocka_unit_test(test_pack_C_GetAttributeValue_Call),
            cmocka_unit_test(test_pack_C_GetFunctionStatus_Call),
            cmocka_unit_test(test_pack_C_GetInfo_Call),
            cmocka_unit_test(test_pack_C_GetMechanismInfo_Call),
            cmocka_unit_test(test_pack_C_GetMechanismList_Call),
            cmocka_unit_test(test_pack_C_GetObjectSize_Call),
            cmocka_unit_test(test_pack_C_GetOperationState_Call),
            cmocka_unit_test(test_pack_C_GetSessionInfo_Call),
            cmocka_unit_test(test_pack_C_GetSlotInfo_Call),
            cmocka_unit_test(test_pack_C_GetSlotList_Call),
            cmocka_unit_test(test_pack_C_GetTokenInfo_Call),
            cmocka_unit_test(test_pack_C_InitPIN_Call),
            cmocka_unit_test(test_pack_C_InitToken_Call),
            cmocka_unit_test(test_pack_C_Initialize_Call),
            cmocka_unit_test(test_pack_C_Login_Call),
            cmocka_unit_test(test_pack_C_Logout_Call),
            cmocka_unit_test(test_pack_C_OpenSession_Call),
            cmocka_unit_test(test_pack_C_SeedRandom_Call),
            cmocka_unit_test(test_pack_C_SetAttributeValue_Call),
            cmocka_unit_test(test_pack_C_SetOperationState_Call),
            cmocka_unit_test(test_pack_C_SetPIN_Call),
            cmocka_unit_test(test_pack_C_Sign_Call),
            cmocka_unit_test(test_pack_C_SignEncryptUpdate_Call),
            cmocka_unit_test(test_pack_C_SignFinal_Call),
            cmocka_unit_test(test_pack_C_SignInit_Call),
            cmocka_unit_test(test_pack_C_SignRecover_Call),
            cmocka_unit_test(test_pack_C_SignRecoverInit_Call),
            cmocka_unit_test(test_pack_C_SignUpdate_Call),
            cmocka_unit_test(test_pack_C_UnwrapKey_Call),
            cmocka_unit_test(test_pack_C_Verify_Call),
            cmocka_unit_test(test_pack_C_VerifyFinal_Call),
            cmocka_unit_test(test_pack_C_VerifyInit_Call),
            cmocka_unit_test(test_pack_C_VerifyRecover_Call),
            cmocka_unit_test(test_pack_C_VerifyUpdate_Call),
            cmocka_unit_test(test_pack_C_WaitForSlotEvent_Call),
            cmocka_unit_test(test_pack_C_WrapKey_Call),
            cmocka_unit_test(test_pack_C_CancelFunction_Return),
            cmocka_unit_test(test_pack_C_CloseAllSessions_Return),
            cmocka_unit_test(test_pack_C_CloseSession_Return),
            cmocka_unit_test(test_pack_C_CopyObject_Return),
            cmocka_unit_test(test_pack_C_CreateObject_Return),
            cmocka_unit_test(test_pack_C_Decrypt_Return),
            cmocka_unit_test(test_pack_C_DecryptDigestUpdate_Return),
            cmocka_unit_test(test_pack_C_DecryptFinal_Return),
            cmocka_unit_test(test_pack_C_DecryptInit_Return),
            cmocka_unit_test(test_pack_C_DecryptUpdate_Return),
            cmocka_unit_test(test_pack_C_DecryptVerifyUpdate_Return),
            cmocka_unit_test(test_pack_C_DeriveKey_Return),
            cmocka_unit_test(test_pack_C_DestroyObject_Return),
            cmocka_unit_test(test_pack_C_Digest_Return),
            cmocka_unit_test(test_pack_C_DigestEncryptUpdate_Return),
            cmocka_unit_test(test_pack_C_DigestFinal_Return),
            cmocka_unit_test(test_pack_C_DigestInit_Return),
            cmocka_unit_test(test_pack_C_DigestKey_Return),
            cmocka_unit_test(test_pack_C_DigestUpdate_Return),
            cmocka_unit_test(test_pack_C_Encrypt_Return),
            cmocka_unit_test(test_pack_C_EncryptFinal_Return),
            cmocka_unit_test(test_pack_C_EncryptInit_Return),
            cmocka_unit_test(test_pack_C_EncryptUpdate_Return),
            cmocka_unit_test(test_pack_C_Finalize_Return),
            cmocka_unit_test(test_pack_C_FindObjects_Return),
            cmocka_unit_test(test_pack_C_FindObjectsFinal_Return),
            cmocka_unit_test(test_pack_C_FindObjectsInit_Return),
            cmocka_unit_test(test_pack_C_GenerateKey_Return),
            cmocka_unit_test(test_pack_C_GenerateKeyPair_Return),
            cmocka_unit_test(test_pack_C_GenerateRandom_Return),
            cmocka_unit_test(test_pack_C_GetAttributeValue_Return),
            cmocka_unit_test(test_pack_C_GetFunctionStatus_Return),
            cmocka_unit_test(test_pack_C_GetInfo_Return),
            cmocka_unit_test(test_pack_C_GetMechanismInfo_Return),
            cmocka_unit_test(test_pack_C_GetMechanismList_Return),
            cmocka_unit_test(test_pack_C_GetObjectSize_Return),
            cmocka_unit_test(test_pack_C_GetOperationState_Return),
            cmocka_unit_test(test_pack_C_GetSessionInfo_Return),
            cmocka_unit_test(test_pack_C_GetSlotInfo_Return),
            cmocka_unit_test(test_pack_C_GetSlotList_Return),
            cmocka_unit_test(test_pack_C_GetTokenInfo_Return),
            cmocka_unit_test(test_pack_C_InitPIN_Return),
            cmocka_unit_test(test_pack_C_InitToken_Return),
            cmocka_unit_test(test_pack_C_Initialize_Return),
            cmocka_unit_test(test_pack_C_Login_Return),
            cmocka_unit_test(test_pack_C_Logout_Return),
            cmocka_unit_test(test_pack_C_OpenSession_Return),
            cmocka_unit_test(test_pack_C_SeedRandom_Return),
            cmocka_unit_test(test_pack_C_SetAttributeValue_Return),
            cmocka_unit_test(test_pack_C_SetOperationState_Return),
            cmocka_unit_test(test_pack_C_SetPIN_Return),
            cmocka_unit_test(test_pack_C_Sign_Return),
            cmocka_unit_test(test_pack_C_SignEncryptUpdate_Return),
            cmocka_unit_test(test_pack_C_SignFinal_Return),
            cmocka_unit_test(test_pack_C_SignInit_Return),
            cmocka_unit_test(test_pack_C_SignRecover_Return),
            cmocka_unit_test(test_pack_C_SignRecoverInit_Return),
            cmocka_unit_test(test_pack_C_SignUpdate_Return),
            cmocka_unit_test(test_pack_C_UnwrapKey_Return),
            cmocka_unit_test(test_pack_C_Verify_Return),
            cmocka_unit_test(test_pack_C_VerifyFinal_Return),
            cmocka_unit_test(test_pack_C_VerifyInit_Return),
            cmocka_unit_test(test_pack_C_VerifyRecover_Return),
            cmocka_unit_test(test_pack_C_VerifyUpdate_Return),
            cmocka_unit_test(test_pack_C_WaitForSlotEvent_Return),
            cmocka_unit_test(test_pack_C_WrapKey_Return)

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}