#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pack.h"




void test_pack_C_CancelFunction_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_CancelFunction_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_CancelFunction_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CancelFunction_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_CloseAllSessions_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    

    CK_RV status = pack_C_CloseAllSessions_Call(
        &dercursor
        ,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_CloseAllSessions_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CloseAllSessions_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_CloseSession_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_CloseSession_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_CloseSession_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_CloseSession_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_CopyObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_CopyObject_Call(
        &dercursor
        ,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_CopyObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phObject = 0;
    

    CK_RV status = pack_C_CopyObject_Return(
        &dercursor
        ,
        &retval,
        &phObject
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_CreateObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_CreateObject_Call(
        &dercursor
        ,
        &hSession,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_CreateObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phObject = 0;
    

    CK_RV status = pack_C_CreateObject_Return(
        &dercursor
        ,
        &retval,
        &phObject
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Decrypt_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG ulEncryptedDataLen = 0;
    CK_ULONG pulDataLen = 0;
    

    CK_RV status = pack_C_Decrypt_Call(
        &dercursor
        ,
        &hSession,
        pEncryptedData,
        &ulEncryptedDataLen,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Decrypt_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG pulDataLen = 0;
    

    CK_RV status = pack_C_Decrypt_Return(
        &dercursor
        ,
        &retval,
        pData,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DecryptDigestUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptDigestUpdate_Call(
        &dercursor
        ,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DecryptDigestUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptDigestUpdate_Return(
        &dercursor
        ,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DecryptFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulLastPartLen = 0;
    

    CK_RV status = pack_C_DecryptFinal_Call(
        &dercursor
        ,
        &hSession,
        &pulLastPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DecryptFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pLastPart = NULL;
    CK_ULONG pulLastPartLen = 0;
    

    CK_RV status = pack_C_DecryptFinal_Return(
        &dercursor
        ,
        &retval,
        pLastPart,
        &pulLastPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DecryptInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_DecryptInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DecryptInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DecryptInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DecryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptUpdate_Call(
        &dercursor
        ,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DecryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptUpdate_Return(
        &dercursor
        ,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DecryptVerifyUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptVerifyUpdate_Call(
        &dercursor
        ,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DecryptVerifyUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG pulPartLen = 0;
    

    CK_RV status = pack_C_DecryptVerifyUpdate_Return(
        &dercursor
        ,
        &retval,
        pPart,
        &pulPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DeriveKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hBaseKey = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulAttributeCount = 0;
    

    CK_RV status = pack_C_DeriveKey_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hBaseKey,
        pTemplate,
        &ulAttributeCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DeriveKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 0;
    

    CK_RV status = pack_C_DeriveKey_Return(
        &dercursor
        ,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DestroyObject_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    

    CK_RV status = pack_C_DestroyObject_Call(
        &dercursor
        ,
        &hSession,
        &hObject
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DestroyObject_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DestroyObject_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Digest_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulDigestLen = 0;
    

    CK_RV status = pack_C_Digest_Call(
        &dercursor
        ,
        &hSession,
        pData,
        &ulDataLen,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Digest_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG pulDigestLen = 0;
    

    CK_RV status = pack_C_Digest_Return(
        &dercursor
        ,
        &retval,
        pDigest,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DigestEncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_DigestEncryptUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DigestEncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_DigestEncryptUpdate_Return(
        &dercursor
        ,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DigestFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulDigestLen = 0;
    

    CK_RV status = pack_C_DigestFinal_Call(
        &dercursor
        ,
        &hSession,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DigestFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG pulDigestLen = 0;
    

    CK_RV status = pack_C_DigestFinal_Return(
        &dercursor
        ,
        &retval,
        pDigest,
        &pulDigestLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DigestInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    

    CK_RV status = pack_C_DigestInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DigestInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DigestKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_DigestKey_Call(
        &dercursor
        ,
        &hSession,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DigestKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestKey_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_DigestUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = pack_C_DigestUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_DigestUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_DigestUpdate_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Encrypt_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulEncryptedDataLen = 0;
    

    CK_RV status = pack_C_Encrypt_Call(
        &dercursor
        ,
        &hSession,
        pData,
        &ulDataLen,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Encrypt_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG pulEncryptedDataLen = 0;
    

    CK_RV status = pack_C_Encrypt_Return(
        &dercursor
        ,
        &retval,
        pEncryptedData,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_EncryptFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulEncryptedDataLen = 0;
    

    CK_RV status = pack_C_EncryptFinal_Call(
        &dercursor
        ,
        &hSession,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_EncryptFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG pulEncryptedDataLen = 0;
    

    CK_RV status = pack_C_EncryptFinal_Return(
        &dercursor
        ,
        &retval,
        pEncryptedData,
        &pulEncryptedDataLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_EncryptInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_EncryptInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_EncryptInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_EncryptInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_EncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_EncryptUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_EncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_EncryptUpdate_Return(
        &dercursor
        ,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Finalize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_VOID_PTR pReserved = NULL_PTR;
    

    CK_RV status = pack_C_Finalize_Call(
        &dercursor
        ,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Finalize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    ANY pReserved = NULL;
    

    CK_RV status = pack_C_Finalize_Return(
        &dercursor
        ,
        &retval,
        &pReserved
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_FindObjects_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG ulMaxObjectCount = 0;
    

    CK_RV status = pack_C_FindObjects_Call(
        &dercursor
        ,
        &hSession,
        &ulMaxObjectCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_FindObjects_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE_ARRAY phObject = NULL;
    CK_ULONG pulObjectCount = 0;
    

    CK_RV status = pack_C_FindObjects_Return(
        &dercursor
        ,
        &retval,
        phObject,
        &pulObjectCount
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_FindObjectsFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_FindObjectsFinal_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_FindObjectsFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_FindObjectsFinal_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_FindObjectsInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_FindObjectsInit_Call(
        &dercursor
        ,
        &hSession,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_FindObjectsInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    

    CK_RV status = pack_C_FindObjectsInit_Return(
        &dercursor
        ,
        &retval,
        pTemplate
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GenerateKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_GenerateKey_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GenerateKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 0;
    

    CK_RV status = pack_C_GenerateKey_Return(
        &dercursor
        ,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GenerateKeyPair_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    
    CK_UTF8CHAR pPublicKeyTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pPublicKeyTemplate[] = {
        {CKA_LABEL, pPublicKeyTemplate_label, sizeof(pPublicKeyTemplate_label)-1},
    };
    CK_ULONG ulPublicKeyAttributeCount = 0;
    
    CK_UTF8CHAR pPrivateKeyTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pPrivateKeyTemplate[] = {
        {CKA_LABEL, pPrivateKeyTemplate_label, sizeof(pPrivateKeyTemplate_label)-1},
    };
    CK_ULONG ulPrivateKeyAttributeCount = 0;
    

    CK_RV status = pack_C_GenerateKeyPair_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        pPublicKeyTemplate,
        &ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        &ulPrivateKeyAttributeCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GenerateKeyPair_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phPublicKey = 0;
    CK_OBJECT_HANDLE phPrivateKey = 0;
    

    CK_RV status = pack_C_GenerateKeyPair_Return(
        &dercursor
        ,
        &retval,
        &phPublicKey,
        &phPrivateKey
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GenerateRandom_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG ulRandomLen = 0;
    

    CK_RV status = pack_C_GenerateRandom_Call(
        &dercursor
        ,
        &hSession,
        &ulRandomLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GenerateRandom_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSeed = NULL;
    

    CK_RV status = pack_C_GenerateRandom_Return(
        &dercursor
        ,
        &retval,
        pSeed
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetAttributeValue_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_GetAttributeValue_Call(
        &dercursor
        ,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetAttributeValue_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    

    CK_RV status = pack_C_GetAttributeValue_Return(
        &dercursor
        ,
        &retval,
        pTemplate
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetFunctionStatus_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_GetFunctionStatus_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetFunctionStatus_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_GetFunctionStatus_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    

    CK_RV status = pack_C_GetInfo_Call(
        &dercursor
        
    );

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
        &dercursor
        ,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetMechanismInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    CK_MECHANISM_TYPE type = 0;
    

    CK_RV status = pack_C_GetMechanismInfo_Call(
        &dercursor
        ,
        &slotID,
        &type
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetMechanismInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_MECHANISM_INFO pInfo = { .ulMinKeySize = 1,
                            .ulMaxKeySize = 1,
                            .flags = 1 };
    

    CK_RV status = pack_C_GetMechanismInfo_Return(
        &dercursor
        ,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetMechanismList_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    CK_ULONG pulCount = 0;
    

    CK_RV status = pack_C_GetMechanismList_Call(
        &dercursor
        ,
        &slotID,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetMechanismList_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_MECHANISM_TYPE_ARRAY pMechanismList = NULL;
    CK_ULONG pulCount = 0;
    

    CK_RV status = pack_C_GetMechanismList_Return(
        &dercursor
        ,
        &retval,
        pMechanismList,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetObjectSize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    

    CK_RV status = pack_C_GetObjectSize_Call(
        &dercursor
        ,
        &hSession,
        &hObject
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetObjectSize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_ULONG pulSize = 0;
    

    CK_RV status = pack_C_GetObjectSize_Return(
        &dercursor
        ,
        &retval,
        &pulSize
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetOperationState_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulOperationStateLen = 0;
    

    CK_RV status = pack_C_GetOperationState_Call(
        &dercursor
        ,
        &hSession,
        &pulOperationStateLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetOperationState_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG pulOperationStateLen = 0;
    

    CK_RV status = pack_C_GetOperationState_Return(
        &dercursor
        ,
        &retval,
        pOperationState,
        &pulOperationStateLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetSessionInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_GetSessionInfo_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetSessionInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SESSION_INFO pInfo = { .slotID = 1, .state = 1, .flags = 1 };
    

    CK_RV status = pack_C_GetSessionInfo_Return(
        &dercursor
        ,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetSlotInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    

    CK_RV status = pack_C_GetSlotInfo_Call(
        &dercursor
        ,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

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
        &dercursor
        ,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetSlotList_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_BBOOL tokenPresent = 0;
    CK_ULONG pulCount = 0;
    

    CK_RV status = pack_C_GetSlotList_Call(
        &dercursor
        ,
        &tokenPresent,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetSlotList_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SLOT_ID_ARRAY pSlotList = NULL;
    CK_ULONG pulCount = 0;
    

    CK_RV status = pack_C_GetSlotList_Return(
        &dercursor
        ,
        &retval,
        pSlotList,
        &pulCount
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_GetTokenInfo_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    

    CK_RV status = pack_C_GetTokenInfo_Call(
        &dercursor
        ,
        &slotID
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_GetTokenInfo_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_TOKEN_INFO pInfo = {
                            .label = "gijs",     
                            .manufacturerID = "gijs",  
                            .model = "gijs",
                            .serialNumber = "gijs",    
                            .flags = 1,
                            .ulMaxSessionCount = 1,   
                            .ulSessionCount = 1,
                            .ulMaxRwSessionCount = 1, 
                            .ulRwSessionCount = 1,
                            .ulMaxPinLen = 1,
                            .ulMinPinLen = 1,         
                            .ulTotalPublicMemory = 1, 
                            .ulFreePublicMemory = 1,
                            .ulTotalPrivateMemory = 1,
                            .ulFreePrivateMemory = 1,
                            .hardwareVersion.major = 1,
                            .hardwareVersion.minor = 1,
                            .firmwareVersion.major = 1,
                            .firmwareVersion.minor = 1, 
                            .utcTime = "gijs" };
    

    CK_RV status = pack_C_GetTokenInfo_Return(
        &dercursor
        ,
        &retval,
        &pInfo
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_InitPIN_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    CK_RV status = pack_C_InitPIN_Call(
        &dercursor
        ,
        &hSession,
        pPin,
        &ulPinLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_InitPIN_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_InitPIN_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_InitToken_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    UTF8String pPin = NULL;
    CK_ULONG ulPinLen = 0;
    UTF8String pLabel = NULL;
    

    CK_RV status = pack_C_InitToken_Call(
        &dercursor
        ,
        &slotID,
        pPin,
        &ulPinLen,
        pLabel
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_InitToken_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_InitToken_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Initialize_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_C_INITIALIZE_ARGS_PTR pInitArgs = NULL_PTR;
    

    CK_RV status = pack_C_Initialize_Call(
        &dercursor
        ,
        pInitArgs
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Initialize_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    ANY pInitArgs = NULL;
    

    CK_RV status = pack_C_Initialize_Return(
        &dercursor
        ,
        &retval,
        &pInitArgs
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Login_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_USER_TYPE userType = 0;
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    CK_RV status = pack_C_Login_Call(
        &dercursor
        ,
        &hSession,
        &userType,
        pPin,
        &ulPinLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Login_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Login_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Logout_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    

    CK_RV status = pack_C_Logout_Call(
        &dercursor
        ,
        &hSession
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Logout_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Logout_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_OpenSession_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SLOT_ID slotID = 0;
    CK_FLAGS flags = 0;
    ANY pApplication = NULL;
    CK_NOTIFY notify = NULL;
    

    CK_RV status = pack_C_OpenSession_Call(
        &dercursor
        ,
        &slotID,
        &flags,
        &pApplication,
        notify
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_OpenSession_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SESSION_HANDLE phSession = 0;
    

    CK_RV status = pack_C_OpenSession_Return(
        &dercursor
        ,
        &retval,
        &phSession
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SeedRandom_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSeed = NULL;
    CK_ULONG ulSeedLen = 0;
    

    CK_RV status = pack_C_SeedRandom_Call(
        &dercursor
        ,
        &hSession,
        pSeed,
        &ulSeedLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SeedRandom_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SeedRandom_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SetAttributeValue_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulCount = 0;
    

    CK_RV status = pack_C_SetAttributeValue_Call(
        &dercursor
        ,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SetAttributeValue_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetAttributeValue_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SetOperationState_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG ulOperationStateLen = 0;
    CK_OBJECT_HANDLE hEncryptionKey = 0;
    CK_OBJECT_HANDLE hAuthenticationKey = 0;
    

    CK_RV status = pack_C_SetOperationState_Call(
        &dercursor
        ,
        &hSession,
        pOperationState,
        &ulOperationStateLen,
        &hEncryptionKey,
        &hAuthenticationKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SetOperationState_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetOperationState_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SetPIN_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pOldPin = NULL;
    CK_ULONG ulOldLen = 0;
    CK_UTF8CHAR_ARRAY pNewPin = NULL;
    CK_ULONG ulNewPin = 0;
    

    CK_RV status = pack_C_SetPIN_Call(
        &dercursor
        ,
        &hSession,
        pOldPin,
        &ulOldLen,
        pNewPin,
        &ulNewPin
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SetPIN_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SetPIN_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Sign_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_Sign_Call(
        &dercursor
        ,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Sign_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_Sign_Return(
        &dercursor
        ,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignEncryptUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_SignEncryptUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignEncryptUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG pulEncryptedPartLen = 0;
    

    CK_RV status = pack_C_SignEncryptUpdate_Return(
        &dercursor
        ,
        &retval,
        pEncryptedPart,
        &pulEncryptedPartLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_SignFinal_Call(
        &dercursor
        ,
        &hSession,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_SignFinal_Return(
        &dercursor
        ,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_SignInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignRecover_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_SignRecover_Call(
        &dercursor
        ,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignRecover_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG pulSignatureLen = 0;
    

    CK_RV status = pack_C_SignRecover_Return(
        &dercursor
        ,
        &retval,
        pSignature,
        &pulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignRecoverInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_SignRecoverInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignRecoverInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignRecoverInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_SignUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = pack_C_SignUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_SignUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_SignUpdate_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_UnwrapKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hUnwrappingKey = 0;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG ulWrappedKeyLen = 0;
    
    CK_UTF8CHAR pTemplate_label[] = "Just a simple attribute array";
    CK_ATTRIBUTE pTemplate[] = {
        {CKA_LABEL, pTemplate_label, sizeof(pTemplate_label)-1},
    };
    CK_ULONG ulAttributeCount = 0;
    

    CK_RV status = pack_C_UnwrapKey_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hUnwrappingKey,
        pWrappedKey,
        &ulWrappedKeyLen,
        pTemplate,
        &ulAttributeCount
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_UnwrapKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_OBJECT_HANDLE phKey = 0;
    

    CK_RV status = pack_C_UnwrapKey_Return(
        &dercursor
        ,
        &retval,
        &phKey
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_Verify_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    CK_RV status = pack_C_Verify_Call(
        &dercursor
        ,
        &hSession,
        pData,
        &ulDataLen,
        pSignature,
        &ulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_Verify_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_Verify_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_VerifyFinal_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    CK_RV status = pack_C_VerifyFinal_Call(
        &dercursor
        ,
        &hSession,
        pSignature,
        &ulSignatureLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_VerifyFinal_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyFinal_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_VerifyInit_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = pack_C_VerifyInit_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hKey
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_VerifyInit_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyInit_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_VerifyRecover_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    CK_ULONG pulDataLen = 0;
    

    CK_RV status = pack_C_VerifyRecover_Call(
        &dercursor
        ,
        &hSession,
        pSignature,
        &ulSignatureLen,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_VerifyRecover_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG pulDataLen = 0;
    

    CK_RV status = pack_C_VerifyRecover_Return(
        &dercursor
        ,
        &retval,
        pData,
        &pulDataLen
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_VerifyUpdate_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = pack_C_VerifyUpdate_Call(
        &dercursor
        ,
        &hSession,
        pPart,
        &ulPartLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_VerifyUpdate_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    

    CK_RV status = pack_C_VerifyUpdate_Return(
        &dercursor
        ,
        &retval
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_WaitForSlotEvent_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_FLAGS flags = 0;
    CK_VOID_PTR pReserved = NULL_PTR;
    

    CK_RV status = pack_C_WaitForSlotEvent_Call(
        &dercursor
        ,
        &flags,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_WaitForSlotEvent_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_SLOT_ID pSlot = 0;
    CK_VOID_PTR pReserved = NULL_PTR;
    

    CK_RV status = pack_C_WaitForSlotEvent_Return(
        &dercursor
        ,
        &retval,
        &pSlot,
        pReserved
    );

    assert_int_equal(status, CKR_OK);

};



void test_pack_C_WrapKey_Call(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hWrappingKey = 0;
    CK_OBJECT_HANDLE hKey = 0;
    CK_ULONG pulWrappedKeyLen = 0;
    

    CK_RV status = pack_C_WrapKey_Call(
        &dercursor
        ,
        &hSession,
        pMechanism,
        &hWrappingKey,
        &hKey,
        &pulWrappedKeyLen
    );

    assert_int_equal(status, CKR_OK);

};

void test_pack_C_WrapKey_Return(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    CK_RV retval = CKR_OK;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG pulWrappedKeyLen = 0;
    

    CK_RV status = pack_C_WrapKey_Return(
        &dercursor
        ,
        &retval,
        pWrappedKey,
        &pulWrappedKeyLen
    );

    assert_int_equal(status, CKR_OK);

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