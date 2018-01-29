#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "static/returncodes.h"

const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


CK_FUNCTION_LIST_PTR function_list = NULL_PTR;


CK_RV
server_Begin(){
    CK_RV status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    status = call_C_Initialize(&function_list, NULL_PTR);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    CK_RV status = call_C_Finalize(&function_list, NULL_PTR);

    if (status != CKR_OK)
        return status;

    function_list = NULL_PTR;
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
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_CancelFunction(
        &function_list, hSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_CancelFunction_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
        &slotID // CK_SLOT_ID - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_CloseAllSessions(
        &function_list, slotID
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_CloseAllSessions_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_CloseSession(
        &function_list, hSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_CloseSession_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phObject = NULL_PTR;
    

    CK_RV status = unpack_C_CopyObject_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hObject, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_CopyObject(
        &function_list, hSession,
        hObject,
        pTemplate,
        ulCount,
        phObject
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_CopyObject_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phObject // CK_OBJECT_HANDLE_PTR True True
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
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phObject = NULL_PTR;
    

    CK_RV status = unpack_C_CreateObject_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_CreateObject(
        &function_list, hSession,
        pTemplate,
        ulCount,
        phObject
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_CreateObject_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phObject // CK_OBJECT_HANDLE_PTR True True
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
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG ulEncryptedDataLen = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG_PTR pulDataLen = NULL_PTR;
    

    CK_RV status = unpack_C_Decrypt_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pEncryptedData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulEncryptedDataLen, // CK_ULONG - other: False, pointerized: False
        pulDataLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Decrypt(
        &function_list, hSession,
        pEncryptedData,
        ulEncryptedDataLen,
        pData,
        pulDataLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Decrypt_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pData, // CK_BYTE_ARRAY False True
        pulDataLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_DecryptDigestUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pEncryptedPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulEncryptedPartLen, // CK_ULONG - other: False, pointerized: False
        pulPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DecryptDigestUpdate(
        &function_list, hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DecryptDigestUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pPart, // CK_BYTE_ARRAY False True
        pulPartLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pLastPart = NULL;
    CK_ULONG_PTR pulLastPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_DecryptFinal_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pulLastPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DecryptFinal(
        &function_list, hSession,
        pLastPart,
        pulLastPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DecryptFinal_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pLastPart, // CK_BYTE_ARRAY False True
        pulLastPartLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = unpack_C_DecryptInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DecryptInit(
        &function_list, hSession,
        pMechanism,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DecryptInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_DecryptUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pEncryptedPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulEncryptedPartLen, // CK_ULONG - other: False, pointerized: False
        pulPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DecryptUpdate(
        &function_list, hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DecryptUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pPart, // CK_BYTE_ARRAY False True
        pulPartLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG ulEncryptedPartLen = 0;
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG_PTR pulPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_DecryptVerifyUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pEncryptedPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulEncryptedPartLen, // CK_ULONG - other: False, pointerized: False
        pulPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DecryptVerifyUpdate(
        &function_list, hSession,
        pEncryptedPart,
        ulEncryptedPartLen,
        pPart,
        pulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DecryptVerifyUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pPart, // CK_BYTE_ARRAY False True
        pulPartLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hBaseKey = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    CK_RV status = unpack_C_DeriveKey_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hBaseKey, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulAttributeCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DeriveKey(
        &function_list, hSession,
        pMechanism,
        hBaseKey,
        pTemplate,
        ulAttributeCount,
        phKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DeriveKey_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phKey // CK_OBJECT_HANDLE_PTR True True
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
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hObject // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DestroyObject(
        &function_list, hSession,
        hObject
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DestroyObject_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG_PTR pulDigestLen = NULL_PTR;
    

    CK_RV status = unpack_C_Digest_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulDataLen, // CK_ULONG - other: False, pointerized: False
        pulDigestLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Digest(
        &function_list, hSession,
        pData,
        ulDataLen,
        pDigest,
        pulDigestLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Digest_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pDigest, // CK_BYTE_ARRAY False True
        pulDigestLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_DigestEncryptUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen, // CK_ULONG - other: False, pointerized: False
        pulEncryptedPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DigestEncryptUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DigestEncryptUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pEncryptedPart, // CK_BYTE_ARRAY False True
        pulEncryptedPartLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pDigest = NULL;
    CK_ULONG_PTR pulDigestLen = NULL_PTR;
    

    CK_RV status = unpack_C_DigestFinal_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pulDigestLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DigestFinal(
        &function_list, hSession,
        pDigest,
        pulDigestLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DigestFinal_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pDigest, // CK_BYTE_ARRAY False True
        pulDigestLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    

    CK_RV status = unpack_C_DigestInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism // CK_MECHANISM_PTR - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DigestInit(
        &function_list, hSession,
        pMechanism
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DigestInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DigestKey(
        &function_list, hSession,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DigestKey_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = unpack_C_DigestUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_DigestUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_DigestUpdate_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG_PTR pulEncryptedDataLen = NULL_PTR;
    

    CK_RV status = unpack_C_Encrypt_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulDataLen, // CK_ULONG - other: False, pointerized: False
        pulEncryptedDataLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Encrypt(
        &function_list, hSession,
        pData,
        ulDataLen,
        pEncryptedData,
        pulEncryptedDataLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Encrypt_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pEncryptedData, // CK_BYTE_ARRAY False True
        pulEncryptedDataLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pEncryptedData = NULL;
    CK_ULONG_PTR pulEncryptedDataLen = NULL_PTR;
    

    CK_RV status = unpack_C_EncryptFinal_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pulEncryptedDataLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_EncryptFinal(
        &function_list, hSession,
        pEncryptedData,
        pulEncryptedDataLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_EncryptFinal_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pEncryptedData, // CK_BYTE_ARRAY False True
        pulEncryptedDataLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = unpack_C_EncryptInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_EncryptInit(
        &function_list, hSession,
        pMechanism,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_EncryptInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_EncryptUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen, // CK_ULONG - other: False, pointerized: False
        pulEncryptedPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_EncryptUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_EncryptUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pEncryptedPart, // CK_BYTE_ARRAY False True
        pulEncryptedPartLen // CK_ULONG_PTR True True
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

    ANY pReserved = NULL;
    

    CK_RV status = unpack_C_Finalize_Call(
        cursorIn,
        pReserved // CK_VOID_PTR - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Finalize(
        &function_list, pReserved
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Finalize_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        &pReserved // ANY False False
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
    CK_OBJECT_HANDLE_ARRAY phObject = NULL;
    CK_ULONG ulMaxObjectCount = 0;
    CK_ULONG_PTR pulObjectCount = NULL_PTR;
    

    CK_RV status = unpack_C_FindObjects_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &ulMaxObjectCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_FindObjects(
        &function_list, hSession,
        phObject,
        ulMaxObjectCount,
        pulObjectCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_FindObjects_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phObject, // CK_OBJECT_HANDLE_ARRAY False True
        pulObjectCount // CK_ULONG_PTR True True
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
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_FindObjectsFinal(
        &function_list, hSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_FindObjectsFinal_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    CK_RV status = unpack_C_FindObjectsInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: True, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_FindObjectsInit(
        &function_list, hSession,
        pTemplate,
        ulCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_FindObjectsInit_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pTemplate // CK_ATTRIBUTE_ARRAY False True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    CK_RV status = unpack_C_GenerateKey_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GenerateKey(
        &function_list, hSession,
        pMechanism,
        pTemplate,
        ulCount,
        phKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GenerateKey_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phKey // CK_OBJECT_HANDLE_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate = NULL;
    CK_ULONG ulPublicKeyAttributeCount = 0;
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate = NULL;
    CK_ULONG ulPrivateKeyAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phPublicKey = NULL_PTR;
    CK_OBJECT_HANDLE_PTR phPrivateKey = NULL_PTR;
    

    CK_RV status = unpack_C_GenerateKeyPair_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        pPublicKeyTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulPublicKeyAttributeCount, // CK_ULONG - other: False, pointerized: False
        pPrivateKeyTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulPrivateKeyAttributeCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GenerateKeyPair(
        &function_list, hSession,
        pMechanism,
        pPublicKeyTemplate,
        ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        ulPrivateKeyAttributeCount,
        phPublicKey,
        phPrivateKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GenerateKeyPair_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phPublicKey, // CK_OBJECT_HANDLE_PTR True True
        phPrivateKey // CK_OBJECT_HANDLE_PTR True True
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
    CK_BYTE_ARRAY pSeed = NULL;
    CK_ULONG ulRandomLen = 0;
    

    CK_RV status = unpack_C_GenerateRandom_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &ulRandomLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GenerateRandom(
        &function_list, hSession,
        pSeed,
        ulRandomLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GenerateRandom_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSeed // CK_BYTE_ARRAY False True
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
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    CK_RV status = unpack_C_GetAttributeValue_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hObject, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: True, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetAttributeValue(
        &function_list, hSession,
        hObject,
        pTemplate,
        ulCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetAttributeValue_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pTemplate // CK_ATTRIBUTE_ARRAY False True
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
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetFunctionStatus(
        &function_list, hSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetFunctionStatus_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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

    CK_INFO_PTR pInfo = NULL_PTR;
    

    CK_RV status = unpack_C_GetInfo_Call(
        cursorIn
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetInfo(
        &function_list, pInfo
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetInfo_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pInfo // CK_INFO_PTR True True
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
    CK_MECHANISM_INFO_PTR pInfo = NULL_PTR;
    

    CK_RV status = unpack_C_GetMechanismInfo_Call(
        cursorIn,
        &slotID, // CK_SLOT_ID - other: False, pointerized: False
        &type // CK_MECHANISM_TYPE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetMechanismInfo(
        &function_list, slotID,
        type,
        pInfo
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetMechanismInfo_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pInfo // CK_MECHANISM_INFO_PTR True True
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
    CK_MECHANISM_TYPE_ARRAY pMechanismList = NULL;
    CK_ULONG_PTR pulCount = NULL_PTR;
    

    CK_RV status = unpack_C_GetMechanismList_Call(
        cursorIn,
        &slotID, // CK_SLOT_ID - other: False, pointerized: False
        pulCount // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetMechanismList(
        &function_list, slotID,
        pMechanismList,
        pulCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetMechanismList_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pMechanismList, // CK_MECHANISM_TYPE_ARRAY False True
        pulCount // CK_ULONG_PTR True True
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
    CK_ULONG_PTR pulSize = NULL_PTR;
    

    CK_RV status = unpack_C_GetObjectSize_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hObject // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetObjectSize(
        &function_list, hSession,
        hObject,
        pulSize
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetObjectSize_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pulSize // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG_PTR pulOperationStateLen = NULL_PTR;
    

    CK_RV status = unpack_C_GetOperationState_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pulOperationStateLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetOperationState(
        &function_list, hSession,
        pOperationState,
        pulOperationStateLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetOperationState_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pOperationState, // CK_BYTE_ARRAY False True
        pulOperationStateLen // CK_ULONG_PTR True True
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
    CK_SESSION_INFO_PTR pInfo = NULL_PTR;
    

    CK_RV status = unpack_C_GetSessionInfo_Call(
        cursorIn,
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetSessionInfo(
        &function_list, hSession,
        pInfo
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetSessionInfo_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pInfo // CK_SESSION_INFO_PTR True True
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
    CK_SLOT_INFO_PTR pInfo = NULL_PTR;
    

    CK_RV status = unpack_C_GetSlotInfo_Call(
        cursorIn,
        &slotID // CK_SLOT_ID - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetSlotInfo(
        &function_list, slotID,
        pInfo
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetSlotInfo_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pInfo // CK_SLOT_INFO_PTR True True
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
    CK_SLOT_ID_ARRAY pSlotList = NULL;
    CK_ULONG_PTR pulCount = NULL_PTR;
    

    CK_RV status = unpack_C_GetSlotList_Call(
        cursorIn,
        &tokenPresent, // CK_BBOOL - other: False, pointerized: False
        pulCount // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetSlotList(
        &function_list, tokenPresent,
        pSlotList,
        pulCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetSlotList_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSlotList, // CK_SLOT_ID_ARRAY False True
        pulCount // CK_ULONG_PTR True True
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
    CK_TOKEN_INFO_PTR pInfo = NULL_PTR;
    

    CK_RV status = unpack_C_GetTokenInfo_Call(
        cursorIn,
        &slotID // CK_SLOT_ID - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_GetTokenInfo(
        &function_list, slotID,
        pInfo
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_GetTokenInfo_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pInfo // CK_TOKEN_INFO_PTR True True
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
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    CK_RV status = unpack_C_InitPIN_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPin, // CK_UTF8CHAR_ARRAY - other: False, pointerized: False
        &ulPinLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_InitPIN(
        &function_list, hSession,
        pPin,
        ulPinLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_InitPIN_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    UTF8String pPin = NULL;
    CK_ULONG ulPinLen = 0;
    UTF8String pLabel = NULL;
    

    CK_RV status = unpack_C_InitToken_Call(
        cursorIn,
        &slotID, // CK_SLOT_ID - other: False, pointerized: False
        pPin, // UTF8String - other: False, pointerized: False
        &ulPinLen, // CK_ULONG - other: False, pointerized: False
        pLabel // UTF8String - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_InitToken(
        &function_list, slotID,
        pPin,
        ulPinLen,
        pLabel
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_InitToken_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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

    CK_C_INITIALIZE_ARGS_PTR pInitArgs = NULL_PTR;
    

    CK_RV status = unpack_C_Initialize_Call(
        cursorIn,
        pInitArgs // CK_C_INITIALIZE_ARGS_PTR - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Initialize(
        &function_list, pInitArgs
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Initialize_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        &pInitArgs // ANY False False
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
    CK_UTF8CHAR_ARRAY pPin = NULL;
    CK_ULONG ulPinLen = 0;
    

    CK_RV status = unpack_C_Login_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &userType, // CK_USER_TYPE - other: False, pointerized: False
        pPin, // CK_UTF8CHAR_ARRAY - other: False, pointerized: False
        &ulPinLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Login(
        &function_list, hSession,
        userType,
        pPin,
        ulPinLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Login_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
        &hSession // CK_SESSION_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Logout(
        &function_list, hSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Logout_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    ANY pApplication = NULL;
    CK_NOTIFY notify = NULL;
    CK_SESSION_HANDLE_PTR phSession = NULL_PTR;
    

    CK_RV status = unpack_C_OpenSession_Call(
        cursorIn,
        &slotID, // CK_SLOT_ID - other: False, pointerized: False
        &flags, // CK_FLAGS - other: False, pointerized: False
        &pApplication, // ANY - other: False, pointerized: False
        notify // CK_NOTIFY - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_OpenSession(
        &function_list, slotID,
        flags,
        pApplication,
        notify,
        phSession
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_OpenSession_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phSession // CK_SESSION_HANDLE_PTR True True
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
    CK_BYTE_ARRAY pSeed = NULL;
    CK_ULONG ulSeedLen = 0;
    

    CK_RV status = unpack_C_SeedRandom_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pSeed, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulSeedLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SeedRandom(
        &function_list, hSession,
        pSeed,
        ulSeedLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SeedRandom_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulCount = 0;
    

    CK_RV status = unpack_C_SetAttributeValue_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        &hObject, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SetAttributeValue(
        &function_list, hSession,
        hObject,
        pTemplate,
        ulCount
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SetAttributeValue_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pOperationState = NULL;
    CK_ULONG ulOperationStateLen = 0;
    CK_OBJECT_HANDLE hEncryptionKey = 0;
    CK_OBJECT_HANDLE hAuthenticationKey = 0;
    

    CK_RV status = unpack_C_SetOperationState_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pOperationState, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulOperationStateLen, // CK_ULONG - other: False, pointerized: False
        &hEncryptionKey, // CK_OBJECT_HANDLE - other: False, pointerized: False
        &hAuthenticationKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SetOperationState(
        &function_list, hSession,
        pOperationState,
        ulOperationStateLen,
        hEncryptionKey,
        hAuthenticationKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SetOperationState_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_UTF8CHAR_ARRAY pOldPin = NULL;
    CK_ULONG ulOldLen = 0;
    CK_UTF8CHAR_ARRAY pNewPin = NULL;
    CK_ULONG ulNewPin = 0;
    

    CK_RV status = unpack_C_SetPIN_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pOldPin, // CK_UTF8CHAR_ARRAY - other: False, pointerized: False
        &ulOldLen, // CK_ULONG - other: False, pointerized: False
        pNewPin, // CK_UTF8CHAR_ARRAY - other: False, pointerized: False
        &ulNewPin // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SetPIN(
        &function_list, hSession,
        pOldPin,
        ulOldLen,
        pNewPin,
        ulNewPin
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SetPIN_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    CK_RV status = unpack_C_Sign_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulDataLen, // CK_ULONG - other: False, pointerized: False
        pulSignatureLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Sign(
        &function_list, hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Sign_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSignature, // CK_BYTE_ARRAY False True
        pulSignatureLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    CK_BYTE_ARRAY pEncryptedPart = NULL;
    CK_ULONG_PTR pulEncryptedPartLen = NULL_PTR;
    

    CK_RV status = unpack_C_SignEncryptUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen, // CK_ULONG - other: False, pointerized: False
        pulEncryptedPartLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignEncryptUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen,
        pEncryptedPart,
        pulEncryptedPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignEncryptUpdate_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pEncryptedPart, // CK_BYTE_ARRAY False True
        pulEncryptedPartLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    CK_RV status = unpack_C_SignFinal_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pulSignatureLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignFinal(
        &function_list, hSession,
        pSignature,
        pulSignatureLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignFinal_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSignature, // CK_BYTE_ARRAY False True
        pulSignatureLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = unpack_C_SignInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignInit(
        &function_list, hSession,
        pMechanism,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG_PTR pulSignatureLen = NULL_PTR;
    

    CK_RV status = unpack_C_SignRecover_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulDataLen, // CK_ULONG - other: False, pointerized: False
        pulSignatureLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignRecover(
        &function_list, hSession,
        pData,
        ulDataLen,
        pSignature,
        pulSignatureLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignRecover_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSignature, // CK_BYTE_ARRAY False True
        pulSignatureLen // CK_ULONG_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = unpack_C_SignRecoverInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignRecoverInit(
        &function_list, hSession,
        pMechanism,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignRecoverInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = unpack_C_SignUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_SignUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_SignUpdate_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hUnwrappingKey = 0;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG ulWrappedKeyLen = 0;
    CK_ATTRIBUTE_ARRAY pTemplate = NULL;
    CK_ULONG ulAttributeCount = 0;
    CK_OBJECT_HANDLE_PTR phKey = NULL_PTR;
    

    CK_RV status = unpack_C_UnwrapKey_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hUnwrappingKey, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pWrappedKey, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulWrappedKeyLen, // CK_ULONG - other: False, pointerized: False
        pTemplate, // CK_ATTRIBUTE_ARRAY - other: False, pointerized: False
        &ulAttributeCount // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_UnwrapKey(
        &function_list, hSession,
        pMechanism,
        hUnwrappingKey,
        pWrappedKey,
        ulWrappedKeyLen,
        pTemplate,
        ulAttributeCount,
        phKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_UnwrapKey_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        phKey // CK_OBJECT_HANDLE_PTR True True
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
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG ulDataLen = 0;
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    CK_RV status = unpack_C_Verify_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pData, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulDataLen, // CK_ULONG - other: False, pointerized: False
        pSignature, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulSignatureLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_Verify(
        &function_list, hSession,
        pData,
        ulDataLen,
        pSignature,
        ulSignatureLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_Verify_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    

    CK_RV status = unpack_C_VerifyFinal_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pSignature, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulSignatureLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_VerifyFinal(
        &function_list, hSession,
        pSignature,
        ulSignatureLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_VerifyFinal_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hKey = 0;
    

    CK_RV status = unpack_C_VerifyInit_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hKey // CK_OBJECT_HANDLE - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_VerifyInit(
        &function_list, hSession,
        pMechanism,
        hKey
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_VerifyInit_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_BYTE_ARRAY pSignature = NULL;
    CK_ULONG ulSignatureLen = 0;
    CK_BYTE_ARRAY pData = NULL;
    CK_ULONG_PTR pulDataLen = NULL_PTR;
    

    CK_RV status = unpack_C_VerifyRecover_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pSignature, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulSignatureLen, // CK_ULONG - other: False, pointerized: False
        pulDataLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_VerifyRecover(
        &function_list, hSession,
        pSignature,
        ulSignatureLen,
        pData,
        pulDataLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_VerifyRecover_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pData, // CK_BYTE_ARRAY False True
        pulDataLen // CK_ULONG_PTR True True
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
    CK_BYTE_ARRAY pPart = NULL;
    CK_ULONG ulPartLen = 0;
    

    CK_RV status = unpack_C_VerifyUpdate_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pPart, // CK_BYTE_ARRAY - other: False, pointerized: False
        &ulPartLen // CK_ULONG - other: False, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_VerifyUpdate(
        &function_list, hSession,
        pPart,
        ulPartLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_VerifyUpdate_Return(
        CursorOut,
        retval // CK_RV_PTR True True
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
    CK_SLOT_ID_PTR pSlot = NULL_PTR;
    CK_VOID_PTR pReserved = NULL_PTR;
    

    CK_RV status = unpack_C_WaitForSlotEvent_Call(
        cursorIn,
        &flags, // CK_FLAGS - other: False, pointerized: False
        pReserved // CK_VOID_PTR - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_WaitForSlotEvent(
        &function_list, flags,
        pSlot,
        pReserved
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_WaitForSlotEvent_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pSlot, // CK_SLOT_ID_PTR True True
        pReserved // CK_VOID_PTR False True
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
    CK_MECHANISM_PTR pMechanism = NULL_PTR;
    CK_OBJECT_HANDLE hWrappingKey = 0;
    CK_OBJECT_HANDLE hKey = 0;
    CK_BYTE_ARRAY pWrappedKey = NULL;
    CK_ULONG_PTR pulWrappedKeyLen = NULL_PTR;
    

    CK_RV status = unpack_C_WrapKey_Call(
        cursorIn,
        &hSession, // CK_SESSION_HANDLE - other: False, pointerized: False
        pMechanism, // CK_MECHANISM_PTR - other: False, pointerized: False
        &hWrappingKey, // CK_OBJECT_HANDLE - other: False, pointerized: False
        &hKey, // CK_OBJECT_HANDLE - other: False, pointerized: False
        pulWrappedKeyLen // CK_ULONG - other: True, pointerized: False
    );

    if (status != CKR_OK)
        return status;

    CK_RV retval_pointed = call_C_WrapKey(
        &function_list, hSession,
        pMechanism,
        hWrappingKey,
        hKey,
        pWrappedKey,
        pulWrappedKeyLen
        
    );

    CK_RV_PTR retval = &retval_pointed;

    status = pack_C_WrapKey_Return(
        CursorOut,
        retval, // CK_RV_PTR True True
        pWrappedKey, // CK_BYTE_ARRAY False True
        pulWrappedKeyLen // CK_ULONG_PTR True True
    );


    


    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
