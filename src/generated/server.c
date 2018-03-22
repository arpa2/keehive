#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "returncodes.h"
#include "settings.h"
#include "loader.h"


const char path[] = LIBSOFTHSM2_LIBRARY;


CK_FUNCTION_LIST_PTR function_list = NULL;


CK_RV
server_Begin(){
    CK_RV status = cryptoki_loader(path, &function_list);

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    function_list = NULL;
    return CKR_OK;
}



CK_RV
server_C_CancelFunction(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_CancelFunction_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_CancelFunction(
        &function_list,
        hSession  // CK_SESSION_HANDLE
    );

    status = pack_C_CancelFunction_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_CloseAllSessions(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    



    CK_RV status = unpack_C_CloseAllSessions_Call(
        cursorIn,
        &slotID
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_CloseAllSessions(
        &function_list,
        slotID  // CK_SLOT_ID
    );

    status = pack_C_CloseAllSessions_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_CloseSession(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_CloseSession_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_CloseSession(
        &function_list,
        hSession  // CK_SESSION_HANDLE
    );

    status = pack_C_CloseSession_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_CopyObject(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_CopyObject_Call(
        cursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phObject = 0;
    

    retval = call_C_CopyObject(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hObject,  // CK_OBJECT_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount,  // CK_ULONG
        &phObject  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_CopyObject_Return(
        CursorOut,
        &retval,  // CK_RV
        &phObject  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_CreateObject(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_CreateObject_Call(
        cursorIn,
        &hSession,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phObject = 0;
    

    retval = call_C_CreateObject(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount,  // CK_ULONG
        &phObject  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_CreateObject_Return(
        CursorOut,
        &retval,  // CK_RV
        &phObject  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Decrypt(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedData = malloc(1024);
    CK_ULONG ulEncryptedDataLen = 0;
    CK_ULONG pulDataLen = 0;
    



    CK_RV status = unpack_C_Decrypt_Call(
        cursorIn,
        &hSession,
        pEncryptedData,
        &ulEncryptedDataLen,
        &pulDataLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pData = malloc(1024);
    
    

    retval = call_C_Decrypt(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pEncryptedData,  // CK_BYTE_ARRAY
        ulEncryptedDataLen,  // CK_ULONG
        pData,  // CK_BYTE_ARRAY
        &pulDataLen  // CK_ULONG_PTR
    );

    status = pack_C_Decrypt_Return(
        CursorOut,
        &retval,  // CK_RV
        pData,  // CK_BYTE_ARRAY
        &pulDataLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DecryptDigestUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    



    CK_RV status = unpack_C_DecryptDigestUpdate_Call(
        cursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pPart = malloc(1024);
    
    

    retval = call_C_DecryptDigestUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pEncryptedPart,  // CK_BYTE_ARRAY
        ulEncryptedPartLen,  // CK_ULONG
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG_PTR
    );

    status = pack_C_DecryptDigestUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DecryptFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulLastPartLen = 0;
    



    CK_RV status = unpack_C_DecryptFinal_Call(
        cursorIn,
        &hSession,
        &pulLastPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pLastPart = malloc(1024);
    
    

    retval = call_C_DecryptFinal(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pLastPart,  // CK_BYTE_ARRAY
        &pulLastPartLen  // CK_ULONG_PTR
    );

    status = pack_C_DecryptFinal_Return(
        CursorOut,
        &retval,  // CK_RV
        pLastPart,  // CK_BYTE_ARRAY
        &pulLastPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DecryptInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_DecryptInit_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_DecryptInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_DecryptInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DecryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    



    CK_RV status = unpack_C_DecryptUpdate_Call(
        cursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pPart = malloc(1024);
    
    

    retval = call_C_DecryptUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pEncryptedPart,  // CK_BYTE_ARRAY
        ulEncryptedPartLen,  // CK_ULONG
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG_PTR
    );

    status = pack_C_DecryptUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DecryptVerifyUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    CK_ULONG ulEncryptedPartLen = 0;
    CK_ULONG pulPartLen = 0;
    



    CK_RV status = unpack_C_DecryptVerifyUpdate_Call(
        cursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        &pulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pPart = malloc(1024);
    
    

    retval = call_C_DecryptVerifyUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pEncryptedPart,  // CK_BYTE_ARRAY
        ulEncryptedPartLen,  // CK_ULONG
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG_PTR
    );

    status = pack_C_DecryptVerifyUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pPart,  // CK_BYTE_ARRAY
        &pulPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DeriveKey(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hBaseKey = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulAttributeCount = 0;
    



    CK_RV status = unpack_C_DeriveKey_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hBaseKey,
        pTemplate,
        &ulAttributeCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phKey = 0;
    

    retval = call_C_DeriveKey(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hBaseKey,  // CK_OBJECT_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulAttributeCount,  // CK_ULONG
        &phKey  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_DeriveKey_Return(
        CursorOut,
        &retval,  // CK_RV
        &phKey  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DestroyObject(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    



    CK_RV status = unpack_C_DestroyObject_Call(
        cursorIn,
        &hSession,
        &hObject
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_DestroyObject(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hObject  // CK_OBJECT_HANDLE
    );

    status = pack_C_DestroyObject_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Digest(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = malloc(1024);
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulDigestLen = 0;
    



    CK_RV status = unpack_C_Digest_Call(
        cursorIn,
        &hSession,
        pData,
        &ulDataLen,
        &pulDigestLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pDigest = malloc(1024);
    
    

    retval = call_C_Digest(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pData,  // CK_BYTE_ARRAY
        ulDataLen,  // CK_ULONG
        pDigest,  // CK_BYTE_ARRAY
        &pulDigestLen  // CK_ULONG_PTR
    );

    status = pack_C_Digest_Return(
        CursorOut,
        &retval,  // CK_RV
        pDigest,  // CK_BYTE_ARRAY
        &pulDigestLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DigestEncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    



    CK_RV status = unpack_C_DigestEncryptUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    
    

    retval = call_C_DigestEncryptUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen,  // CK_ULONG
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG_PTR
    );

    status = pack_C_DigestEncryptUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DigestFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulDigestLen = 0;
    



    CK_RV status = unpack_C_DigestFinal_Call(
        cursorIn,
        &hSession,
        &pulDigestLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pDigest = malloc(1024);
    
    

    retval = call_C_DigestFinal(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pDigest,  // CK_BYTE_ARRAY
        &pulDigestLen  // CK_ULONG_PTR
    );

    status = pack_C_DigestFinal_Return(
        CursorOut,
        &retval,  // CK_RV
        pDigest,  // CK_BYTE_ARRAY
        &pulDigestLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DigestInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    



    CK_RV status = unpack_C_DigestInit_Call(
        cursorIn,
        &hSession,
        pMechanism
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_DigestInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism  // CK_MECHANISM_PTR
    );

    status = pack_C_DigestInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DigestKey(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_DigestKey_Call(
        cursorIn,
        &hSession,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_DigestKey(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_DigestKey_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_DigestUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    



    CK_RV status = unpack_C_DigestUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_DigestUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen  // CK_ULONG
    );

    status = pack_C_DigestUpdate_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Encrypt(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = malloc(1024);
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulEncryptedDataLen = 0;
    



    CK_RV status = unpack_C_Encrypt_Call(
        cursorIn,
        &hSession,
        pData,
        &ulDataLen,
        &pulEncryptedDataLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pEncryptedData = malloc(1024);
    
    

    retval = call_C_Encrypt(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pData,  // CK_BYTE_ARRAY
        ulDataLen,  // CK_ULONG
        pEncryptedData,  // CK_BYTE_ARRAY
        &pulEncryptedDataLen  // CK_ULONG_PTR
    );

    status = pack_C_Encrypt_Return(
        CursorOut,
        &retval,  // CK_RV
        pEncryptedData,  // CK_BYTE_ARRAY
        &pulEncryptedDataLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_EncryptFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulEncryptedDataLen = 0;
    



    CK_RV status = unpack_C_EncryptFinal_Call(
        cursorIn,
        &hSession,
        &pulEncryptedDataLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pEncryptedData = malloc(1024);
    
    

    retval = call_C_EncryptFinal(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pEncryptedData,  // CK_BYTE_ARRAY
        &pulEncryptedDataLen  // CK_ULONG_PTR
    );

    status = pack_C_EncryptFinal_Return(
        CursorOut,
        &retval,  // CK_RV
        pEncryptedData,  // CK_BYTE_ARRAY
        &pulEncryptedDataLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_EncryptInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_EncryptInit_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_EncryptInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_EncryptInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_EncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    



    CK_RV status = unpack_C_EncryptUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    
    

    retval = call_C_EncryptUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen,  // CK_ULONG
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG_PTR
    );

    status = pack_C_EncryptUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Finalize(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_VOID_PTR pReserved = malloc(1024);
    



    CK_RV status = unpack_C_Finalize_Call(
        cursorIn,
        pReserved
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    
    

    retval = call_C_Finalize(
        &function_list,
        pReserved  // ANY
    );

    status = pack_C_Finalize_Return(
        CursorOut,
        &retval,  // CK_RV
        &pReserved  // ANY
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_FindObjects(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG ulMaxObjectCount = 0;
    



    CK_RV status = unpack_C_FindObjects_Call(
        cursorIn,
        &hSession,
        &ulMaxObjectCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE_ARRAY phObject = malloc(1024);
    CK_ULONG pulObjectCount = 0;
    

    retval = call_C_FindObjects(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        phObject,  // CK_OBJECT_HANDLE_ARRAY
        ulMaxObjectCount,  // CK_ULONG
        &pulObjectCount  // CK_ULONG_PTR
    );

    status = pack_C_FindObjects_Return(
        CursorOut,
        &retval,  // CK_RV
        phObject,  // CK_OBJECT_HANDLE_ARRAY
        &pulObjectCount  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_FindObjectsFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_FindObjectsFinal_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_FindObjectsFinal(
        &function_list,
        hSession  // CK_SESSION_HANDLE
    );

    status = pack_C_FindObjectsFinal_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_FindObjectsInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_FindObjectsInit_Call(
        cursorIn,
        &hSession,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    
    

    retval = call_C_FindObjectsInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount  // CK_ULONG
    );

    status = pack_C_FindObjectsInit_Return(
        CursorOut,
        &retval,  // CK_RV
        pTemplate  // CK_ATTRIBUTE_ARRAY
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GenerateKey(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_GenerateKey_Call(
        cursorIn,
        &hSession,
        pMechanism,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phKey = 0;
    

    retval = call_C_GenerateKey(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount,  // CK_ULONG
        &phKey  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_GenerateKey_Return(
        CursorOut,
        &retval,  // CK_RV
        &phKey  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GenerateKeyPair(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate = malloc(1024);
    CK_ULONG ulPublicKeyAttributeCount = 0;
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate = malloc(1024);
    CK_ULONG ulPrivateKeyAttributeCount = 0;
    



    CK_RV status = unpack_C_GenerateKeyPair_Call(
        cursorIn,
        &hSession,
        pMechanism,
        pPublicKeyTemplate,
        &ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        &ulPrivateKeyAttributeCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phPublicKey = 0;
    CK_OBJECT_HANDLE phPrivateKey = 0;
    

    retval = call_C_GenerateKeyPair(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        pPublicKeyTemplate,  // CK_ATTRIBUTE_ARRAY
        ulPublicKeyAttributeCount,  // CK_ULONG
        pPrivateKeyTemplate,  // CK_ATTRIBUTE_ARRAY
        ulPrivateKeyAttributeCount,  // CK_ULONG
        &phPublicKey,  // CK_OBJECT_HANDLE_PTR
        &phPrivateKey  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_GenerateKeyPair_Return(
        CursorOut,
        &retval,  // CK_RV
        &phPublicKey,  // CK_OBJECT_HANDLE
        &phPrivateKey  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GenerateRandom(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG ulRandomLen = 0;
    



    CK_RV status = unpack_C_GenerateRandom_Call(
        cursorIn,
        &hSession,
        &ulRandomLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pSeed = malloc(1024);
    

    retval = call_C_GenerateRandom(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pSeed,  // CK_BYTE_ARRAY
        ulRandomLen  // CK_ULONG
    );

    status = pack_C_GenerateRandom_Return(
        CursorOut,
        &retval,  // CK_RV
        pSeed  // CK_BYTE_ARRAY
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetAttributeValue(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_GetAttributeValue_Call(
        cursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    
    

    retval = call_C_GetAttributeValue(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hObject,  // CK_OBJECT_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount  // CK_ULONG
    );

    status = pack_C_GetAttributeValue_Return(
        CursorOut,
        &retval,  // CK_RV
        pTemplate  // CK_ATTRIBUTE_ARRAY
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetFunctionStatus(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_GetFunctionStatus_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_GetFunctionStatus(
        &function_list,
        hSession  // CK_SESSION_HANDLE
    );

    status = pack_C_GetFunctionStatus_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    



    CK_RV status = unpack_C_GetInfo_Call(
        cursorIn
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_INFO pInfo;
    

    retval = call_C_GetInfo(
        &function_list,
        &pInfo  // CK_INFO_PTR
    );

    status = pack_C_GetInfo_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInfo  // CK_INFO
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetMechanismInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    CK_MECHANISM_TYPE type = 0;
    



    CK_RV status = unpack_C_GetMechanismInfo_Call(
        cursorIn,
        &slotID,
        &type
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_MECHANISM_INFO pInfo;
    

    retval = call_C_GetMechanismInfo(
        &function_list,
        slotID,  // CK_SLOT_ID
        type,  // CK_MECHANISM_TYPE
        &pInfo  // CK_MECHANISM_INFO_PTR
    );

    status = pack_C_GetMechanismInfo_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInfo  // CK_MECHANISM_INFO
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetMechanismList(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    CK_ULONG pulCount = 0;
    



    CK_RV status = unpack_C_GetMechanismList_Call(
        cursorIn,
        &slotID,
        &pulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_MECHANISM_TYPE_ARRAY pMechanismList = malloc(1024);
    
    

    retval = call_C_GetMechanismList(
        &function_list,
        slotID,  // CK_SLOT_ID
        pMechanismList,  // CK_MECHANISM_TYPE_ARRAY
        &pulCount  // CK_ULONG_PTR
    );

    status = pack_C_GetMechanismList_Return(
        CursorOut,
        &retval,  // CK_RV
        pMechanismList,  // CK_MECHANISM_TYPE_ARRAY
        &pulCount  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetObjectSize(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    



    CK_RV status = unpack_C_GetObjectSize_Call(
        cursorIn,
        &hSession,
        &hObject
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_ULONG pulSize = 0;
    

    retval = call_C_GetObjectSize(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hObject,  // CK_OBJECT_HANDLE
        &pulSize  // CK_ULONG_PTR
    );

    status = pack_C_GetObjectSize_Return(
        CursorOut,
        &retval,  // CK_RV
        &pulSize  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetOperationState(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulOperationStateLen = 0;
    



    CK_RV status = unpack_C_GetOperationState_Call(
        cursorIn,
        &hSession,
        &pulOperationStateLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pOperationState = malloc(1024);
    
    

    retval = call_C_GetOperationState(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pOperationState,  // CK_BYTE_ARRAY
        &pulOperationStateLen  // CK_ULONG_PTR
    );

    status = pack_C_GetOperationState_Return(
        CursorOut,
        &retval,  // CK_RV
        pOperationState,  // CK_BYTE_ARRAY
        &pulOperationStateLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetSessionInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_GetSessionInfo_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_SESSION_INFO pInfo;
    

    retval = call_C_GetSessionInfo(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        &pInfo  // CK_SESSION_INFO_PTR
    );

    status = pack_C_GetSessionInfo_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInfo  // CK_SESSION_INFO
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetSlotInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    



    CK_RV status = unpack_C_GetSlotInfo_Call(
        cursorIn,
        &slotID
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_SLOT_INFO pInfo;
    

    retval = call_C_GetSlotInfo(
        &function_list,
        slotID,  // CK_SLOT_ID
        &pInfo  // CK_SLOT_INFO_PTR
    );

    status = pack_C_GetSlotInfo_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInfo  // CK_SLOT_INFO
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_BBOOL tokenPresent = 0;
    CK_ULONG pulCount = 0;
    



    CK_RV status = unpack_C_GetSlotList_Call(
        cursorIn,
        &tokenPresent,
        &pulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_SLOT_ID_ARRAY pSlotList = malloc(1024);
    
    

    retval = call_C_GetSlotList(
        &function_list,
        tokenPresent,  // CK_BBOOL
        pSlotList,  // CK_SLOT_ID_ARRAY
        &pulCount  // CK_ULONG_PTR
    );

    status = pack_C_GetSlotList_Return(
        CursorOut,
        &retval,  // CK_RV
        pSlotList,  // CK_SLOT_ID_ARRAY
        &pulCount  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_GetTokenInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    



    CK_RV status = unpack_C_GetTokenInfo_Call(
        cursorIn,
        &slotID
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_TOKEN_INFO pInfo;
    

    retval = call_C_GetTokenInfo(
        &function_list,
        slotID,  // CK_SLOT_ID
        &pInfo  // CK_TOKEN_INFO_PTR
    );

    status = pack_C_GetTokenInfo_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInfo  // CK_TOKEN_INFO
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_InitPIN(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pPin = malloc(1024);
    CK_ULONG ulPinLen = 0;
    



    CK_RV status = unpack_C_InitPIN_Call(
        cursorIn,
        &hSession,
        pPin,
        &ulPinLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_InitPIN(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPin,  // CK_UTF8CHAR_ARRAY
        ulPinLen  // CK_ULONG
    );

    status = pack_C_InitPIN_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_InitToken(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    UTF8String pPin = malloc(1024);
    CK_ULONG ulPinLen = 0;
    UTF8String pLabel = malloc(1024);
    



    CK_RV status = unpack_C_InitToken_Call(
        cursorIn,
        &slotID,
        pPin,
        &ulPinLen,
        pLabel
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_InitToken(
        &function_list,
        slotID,  // CK_SLOT_ID
        pPin,  // UTF8String
        ulPinLen,  // CK_ULONG
        pLabel  // UTF8String
    );

    status = pack_C_InitToken_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Initialize(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_VOID_PTR pInitArgs = malloc(1024);
    



    CK_RV status = unpack_C_Initialize_Call(
        cursorIn,
        pInitArgs
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    
    

    retval = call_C_Initialize(
        &function_list,
        pInitArgs  // CK_VOID_PTR
    );

    status = pack_C_Initialize_Return(
        CursorOut,
        &retval,  // CK_RV
        &pInitArgs  // ANY
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Login(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_USER_TYPE userType = 0;
    CK_UTF8CHAR_ARRAY pPin = malloc(1024);
    CK_ULONG ulPinLen = 0;
    



    CK_RV status = unpack_C_Login_Call(
        cursorIn,
        &hSession,
        &userType,
        pPin,
        &ulPinLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_Login(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        userType,  // CK_USER_TYPE
        pPin,  // CK_UTF8CHAR_ARRAY
        ulPinLen  // CK_ULONG
    );

    status = pack_C_Login_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Logout(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    



    CK_RV status = unpack_C_Logout_Call(
        cursorIn,
        &hSession
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_Logout(
        &function_list,
        hSession  // CK_SESSION_HANDLE
    );

    status = pack_C_Logout_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_OpenSession(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SLOT_ID slotID = 0;
    CK_FLAGS flags = 0;
    ANY pApplication;
    CK_NOTIFY notify;
    



    CK_RV status = unpack_C_OpenSession_Call(
        cursorIn,
        &slotID,
        &flags,
        &pApplication,
        notify
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_SESSION_HANDLE phSession = 0;
    

    retval = call_C_OpenSession(
        &function_list,
        slotID,  // CK_SLOT_ID
        flags,  // CK_FLAGS
        pApplication,  // ANY
        notify,  // CK_NOTIFY
        &phSession  // CK_SESSION_HANDLE_PTR
    );

    status = pack_C_OpenSession_Return(
        CursorOut,
        &retval,  // CK_RV
        &phSession  // CK_SESSION_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SeedRandom(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSeed = malloc(1024);
    CK_ULONG ulSeedLen = 0;
    



    CK_RV status = unpack_C_SeedRandom_Call(
        cursorIn,
        &hSession,
        pSeed,
        &ulSeedLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SeedRandom(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pSeed,  // CK_BYTE_ARRAY
        ulSeedLen  // CK_ULONG
    );

    status = pack_C_SeedRandom_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SetAttributeValue(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_OBJECT_HANDLE hObject = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulCount = 0;
    



    CK_RV status = unpack_C_SetAttributeValue_Call(
        cursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SetAttributeValue(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        hObject,  // CK_OBJECT_HANDLE
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulCount  // CK_ULONG
    );

    status = pack_C_SetAttributeValue_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SetOperationState(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pOperationState = malloc(1024);
    CK_ULONG ulOperationStateLen = 0;
    CK_OBJECT_HANDLE hEncryptionKey = 0;
    CK_OBJECT_HANDLE hAuthenticationKey = 0;
    



    CK_RV status = unpack_C_SetOperationState_Call(
        cursorIn,
        &hSession,
        pOperationState,
        &ulOperationStateLen,
        &hEncryptionKey,
        &hAuthenticationKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SetOperationState(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pOperationState,  // CK_BYTE_ARRAY
        ulOperationStateLen,  // CK_ULONG
        hEncryptionKey,  // CK_OBJECT_HANDLE
        hAuthenticationKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_SetOperationState_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SetPIN(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_UTF8CHAR_ARRAY pOldPin = malloc(1024);
    CK_ULONG ulOldLen = 0;
    CK_UTF8CHAR_ARRAY pNewPin = malloc(1024);
    CK_ULONG ulNewPin = 0;
    



    CK_RV status = unpack_C_SetPIN_Call(
        cursorIn,
        &hSession,
        pOldPin,
        &ulOldLen,
        pNewPin,
        &ulNewPin
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SetPIN(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pOldPin,  // CK_UTF8CHAR_ARRAY
        ulOldLen,  // CK_ULONG
        pNewPin,  // CK_UTF8CHAR_ARRAY
        ulNewPin  // CK_ULONG
    );

    status = pack_C_SetPIN_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Sign(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = malloc(1024);
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulSignatureLen = 0;
    



    CK_RV status = unpack_C_Sign_Call(
        cursorIn,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    
    

    retval = call_C_Sign(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pData,  // CK_BYTE_ARRAY
        ulDataLen,  // CK_ULONG
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG_PTR
    );

    status = pack_C_Sign_Return(
        CursorOut,
        &retval,  // CK_RV
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignEncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    CK_ULONG pulEncryptedPartLen = 0;
    



    CK_RV status = unpack_C_SignEncryptUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        &pulEncryptedPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pEncryptedPart = malloc(1024);
    
    

    retval = call_C_SignEncryptUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen,  // CK_ULONG
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG_PTR
    );

    status = pack_C_SignEncryptUpdate_Return(
        CursorOut,
        &retval,  // CK_RV
        pEncryptedPart,  // CK_BYTE_ARRAY
        &pulEncryptedPartLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_ULONG pulSignatureLen = 0;
    



    CK_RV status = unpack_C_SignFinal_Call(
        cursorIn,
        &hSession,
        &pulSignatureLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    
    

    retval = call_C_SignFinal(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG_PTR
    );

    status = pack_C_SignFinal_Return(
        CursorOut,
        &retval,  // CK_RV
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_SignInit_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SignInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_SignInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignRecover(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = malloc(1024);
    CK_ULONG ulDataLen = 0;
    CK_ULONG pulSignatureLen = 0;
    



    CK_RV status = unpack_C_SignRecover_Call(
        cursorIn,
        &hSession,
        pData,
        &ulDataLen,
        &pulSignatureLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    
    

    retval = call_C_SignRecover(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pData,  // CK_BYTE_ARRAY
        ulDataLen,  // CK_ULONG
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG_PTR
    );

    status = pack_C_SignRecover_Return(
        CursorOut,
        &retval,  // CK_RV
        pSignature,  // CK_BYTE_ARRAY
        &pulSignatureLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignRecoverInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_SignRecoverInit_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SignRecoverInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_SignRecoverInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_SignUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    



    CK_RV status = unpack_C_SignUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_SignUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen  // CK_ULONG
    );

    status = pack_C_SignUpdate_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_UnwrapKey(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hUnwrappingKey = 0;
    CK_BYTE_ARRAY pWrappedKey = malloc(1024);
    CK_ULONG ulWrappedKeyLen = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = malloc(1024);
    CK_ULONG ulAttributeCount = 0;
    



    CK_RV status = unpack_C_UnwrapKey_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hUnwrappingKey,
        pWrappedKey,
        &ulWrappedKeyLen,
        pTemplate,
        &ulAttributeCount
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_OBJECT_HANDLE phKey = 0;
    

    retval = call_C_UnwrapKey(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hUnwrappingKey,  // CK_OBJECT_HANDLE
        pWrappedKey,  // CK_BYTE_ARRAY
        ulWrappedKeyLen,  // CK_ULONG
        pTemplate,  // CK_ATTRIBUTE_ARRAY
        ulAttributeCount,  // CK_ULONG
        &phKey  // CK_OBJECT_HANDLE_PTR
    );

    status = pack_C_UnwrapKey_Return(
        CursorOut,
        &retval,  // CK_RV
        &phKey  // CK_OBJECT_HANDLE
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_Verify(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pData = malloc(1024);
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    CK_ULONG ulSignatureLen = 0;
    



    CK_RV status = unpack_C_Verify_Call(
        cursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pSignature,
        &ulSignatureLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_Verify(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pData,  // CK_BYTE_ARRAY
        ulDataLen,  // CK_ULONG
        pSignature,  // CK_BYTE_ARRAY
        ulSignatureLen  // CK_ULONG
    );

    status = pack_C_Verify_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_VerifyFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    CK_ULONG ulSignatureLen = 0;
    



    CK_RV status = unpack_C_VerifyFinal_Call(
        cursorIn,
        &hSession,
        pSignature,
        &ulSignatureLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_VerifyFinal(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pSignature,  // CK_BYTE_ARRAY
        ulSignatureLen  // CK_ULONG
    );

    status = pack_C_VerifyFinal_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_VerifyInit(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hKey = 0;
    



    CK_RV status = unpack_C_VerifyInit_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_VerifyInit(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hKey  // CK_OBJECT_HANDLE
    );

    status = pack_C_VerifyInit_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_VerifyRecover(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pSignature = malloc(1024);
    CK_ULONG ulSignatureLen = 0;
    CK_ULONG pulDataLen = 0;
    



    CK_RV status = unpack_C_VerifyRecover_Call(
        cursorIn,
        &hSession,
        pSignature,
        &ulSignatureLen,
        &pulDataLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pData = malloc(1024);
    
    

    retval = call_C_VerifyRecover(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pSignature,  // CK_BYTE_ARRAY
        ulSignatureLen,  // CK_ULONG
        pData,  // CK_BYTE_ARRAY
        &pulDataLen  // CK_ULONG_PTR
    );

    status = pack_C_VerifyRecover_Return(
        CursorOut,
        &retval,  // CK_RV
        pData,  // CK_BYTE_ARRAY
        &pulDataLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_VerifyUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_BYTE_ARRAY pPart = malloc(1024);
    CK_ULONG ulPartLen = 0;
    



    CK_RV status = unpack_C_VerifyUpdate_Call(
        cursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    

    retval = call_C_VerifyUpdate(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pPart,  // CK_BYTE_ARRAY
        ulPartLen  // CK_ULONG
    );

    status = pack_C_VerifyUpdate_Return(
        CursorOut,
        &retval  // CK_RV
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_WaitForSlotEvent(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_FLAGS flags = 0;
    CK_VOID_PTR pReserved = malloc(1024);
    



    CK_RV status = unpack_C_WaitForSlotEvent_Call(
        cursorIn,
        &flags,
        pReserved
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_SLOT_ID pSlot = 0;
    
    

    retval = call_C_WaitForSlotEvent(
        &function_list,
        flags,  // CK_FLAGS
        &pSlot,  // CK_SLOT_ID_PTR
        &pReserved  // CK_VOID_PTR
    );

    status = pack_C_WaitForSlotEvent_Return(
        CursorOut,
        &retval,  // CK_RV
        &pSlot,  // CK_SLOT_ID
        pReserved  // CK_VOID_PTR
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_C_WrapKey(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    
    CK_SESSION_HANDLE hSession = 0;
    CK_MECHANISM_PTR pMechanism = malloc(1024);
    CK_OBJECT_HANDLE hWrappingKey = 0;
    CK_OBJECT_HANDLE hKey = 0;
    CK_ULONG pulWrappedKeyLen = 0;
    



    CK_RV status = unpack_C_WrapKey_Call(
        cursorIn,
        &hSession,
        pMechanism,
        &hWrappingKey,
        &hKey,
        &pulWrappedKeyLen
    );

    if (status != CKR_OK)
        return status;

    
    CK_RV retval;
    CK_BYTE_ARRAY pWrappedKey = malloc(1024);
    
    

    retval = call_C_WrapKey(
        &function_list,
        hSession,  // CK_SESSION_HANDLE
        pMechanism,  // CK_MECHANISM_PTR
        hWrappingKey,  // CK_OBJECT_HANDLE
        hKey,  // CK_OBJECT_HANDLE
        pWrappedKey,  // CK_BYTE_ARRAY
        &pulWrappedKeyLen  // CK_ULONG_PTR
    );

    status = pack_C_WrapKey_Return(
        CursorOut,
        &retval,  // CK_RV
        pWrappedKey,  // CK_BYTE_ARRAY
        &pulWrappedKeyLen  // CK_ULONG
    );

    

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
