#include "cryptoki.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"




CK_RV
C_CancelFunction(
    CK_SESSION_HANDLE hSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_CancelFunction_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_CancelFunction(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_CancelFunction_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_CloseAllSessions(
    CK_SLOT_ID slotID
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_CloseAllSessions_Call(
        &dercursorIn,
        &slotID
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_CloseAllSessions(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_CloseAllSessions_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_CloseSession(
    CK_SESSION_HANDLE hSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_CloseSession_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_CloseSession(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_CloseSession_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_CopyObject(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_CopyObject_Call(
        &dercursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_CopyObject(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_CopyObject_Return(
        &dercursorOut,
        retval,
        phObject
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_CreateObject(
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phObject
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_CreateObject_Call(
        &dercursorIn,
        &hSession,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_CreateObject(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_CreateObject_Return(
        &dercursorOut,
        retval,
        phObject
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Decrypt(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG ulEncryptedDataLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Decrypt_Call(
        &dercursorIn,
        &hSession,
        pEncryptedData,
        &ulEncryptedDataLen,
        pulDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Decrypt(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Decrypt_Return(
        &dercursorOut,
        retval,
        pData,
        pulDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DecryptDigestUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DecryptDigestUpdate_Call(
        &dercursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DecryptDigestUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DecryptDigestUpdate_Return(
        &dercursorOut,
        retval,
        pPart,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DecryptFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pLastPart,
    CK_ULONG_PTR pulLastPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DecryptFinal_Call(
        &dercursorIn,
        &hSession,
        pulLastPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DecryptFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DecryptFinal_Return(
        &dercursorOut,
        retval,
        pLastPart,
        pulLastPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DecryptInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DecryptInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DecryptInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DecryptInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DecryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DecryptUpdate_Call(
        &dercursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DecryptUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DecryptUpdate_Return(
        &dercursorOut,
        retval,
        pPart,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DecryptVerifyUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG ulEncryptedPartLen,
    CK_BYTE_ARRAY pPart,
    CK_ULONG_PTR pulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DecryptVerifyUpdate_Call(
        &dercursorIn,
        &hSession,
        pEncryptedPart,
        &ulEncryptedPartLen,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DecryptVerifyUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DecryptVerifyUpdate_Return(
        &dercursorOut,
        retval,
        pPart,
        pulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DeriveKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hBaseKey,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DeriveKey_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hBaseKey,
        pTemplate,
        &ulAttributeCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DeriveKey(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DeriveKey_Return(
        &dercursorOut,
        retval,
        phKey
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DestroyObject(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DestroyObject_Call(
        &dercursorIn,
        &hSession,
        &hObject
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DestroyObject(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DestroyObject_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Digest(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Digest_Call(
        &dercursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pulDigestLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Digest(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Digest_Return(
        &dercursorOut,
        retval,
        pDigest,
        pulDigestLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DigestEncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DigestEncryptUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DigestEncryptUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DigestEncryptUpdate_Return(
        &dercursorOut,
        retval,
        pEncryptedPart,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DigestFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pDigest,
    CK_ULONG_PTR pulDigestLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DigestFinal_Call(
        &dercursorIn,
        &hSession,
        pulDigestLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DigestFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DigestFinal_Return(
        &dercursorOut,
        retval,
        pDigest,
        pulDigestLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DigestInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DigestInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DigestInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DigestInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DigestKey(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DigestKey_Call(
        &dercursorIn,
        &hSession,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DigestKey(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DigestKey_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_DigestUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_DigestUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_DigestUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_DigestUpdate_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Encrypt(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Encrypt_Call(
        &dercursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pulEncryptedDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Encrypt(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Encrypt_Return(
        &dercursorOut,
        retval,
        pEncryptedData,
        pulEncryptedDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_EncryptFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pEncryptedData,
    CK_ULONG_PTR pulEncryptedDataLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_EncryptFinal_Call(
        &dercursorIn,
        &hSession,
        pulEncryptedDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_EncryptFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_EncryptFinal_Return(
        &dercursorOut,
        retval,
        pEncryptedData,
        pulEncryptedDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_EncryptInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_EncryptInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_EncryptInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_EncryptInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_EncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_EncryptUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_EncryptUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_EncryptUpdate_Return(
        &dercursorOut,
        retval,
        pEncryptedPart,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Finalize(
    ANY pReserved
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Finalize_Call(
        &dercursorIn,
        pReserved
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Finalize(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Finalize_Return(
        &dercursorOut,
        retval,
        pReserved
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_FindObjects(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE_ARRAY phObject,
    CK_ULONG ulMaxObjectCount,
    CK_ULONG_PTR pulObjectCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_FindObjects_Call(
        &dercursorIn,
        &hSession,
        &ulMaxObjectCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_FindObjects(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_FindObjects_Return(
        &dercursorOut,
        retval,
        phObject,
        pulObjectCount
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_FindObjectsFinal(
    CK_SESSION_HANDLE hSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_FindObjectsFinal_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_FindObjectsFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_FindObjectsFinal_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_FindObjectsInit(
    CK_SESSION_HANDLE hSession,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_FindObjectsInit_Call(
        &dercursorIn,
        &hSession,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_FindObjectsInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_FindObjectsInit_Return(
        &dercursorOut,
        retval,
        pTemplate
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GenerateKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount,
    CK_OBJECT_HANDLE_PTR phKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GenerateKey_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GenerateKey(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GenerateKey_Return(
        &dercursorOut,
        retval,
        phKey
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GenerateKeyPair(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_ARRAY pPublicKeyTemplate,
    CK_ULONG ulPublicKeyAttributeCount,
    CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate,
    CK_ULONG ulPrivateKeyAttributeCount,
    CK_OBJECT_HANDLE_PTR phPublicKey,
    CK_OBJECT_HANDLE_PTR phPrivateKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GenerateKeyPair_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        pPublicKeyTemplate,
        &ulPublicKeyAttributeCount,
        pPrivateKeyTemplate,
        &ulPrivateKeyAttributeCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GenerateKeyPair(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GenerateKeyPair_Return(
        &dercursorOut,
        retval,
        phPublicKey,
        phPrivateKey
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GenerateRandom(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulRandomLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GenerateRandom_Call(
        &dercursorIn,
        &hSession,
        &ulRandomLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GenerateRandom(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GenerateRandom_Return(
        &dercursorOut,
        retval,
        pSeed
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetAttributeValue(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetAttributeValue_Call(
        &dercursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetAttributeValue(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetAttributeValue_Return(
        &dercursorOut,
        retval,
        pTemplate
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetFunctionStatus(
    CK_SESSION_HANDLE hSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetFunctionStatus_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetFunctionStatus(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetFunctionStatus_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetInfo(
    CK_INFO_PTR pInfo
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetInfo_Call(
        &dercursorIn
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetInfo_Return(
        &dercursorOut,
        retval,
        pInfo
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetMechanismInfo(
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE type,
    CK_MECHANISM_INFO_PTR pInfo
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetMechanismInfo_Call(
        &dercursorIn,
        &slotID,
        &type
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetMechanismInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetMechanismInfo_Return(
        &dercursorOut,
        retval,
        pInfo
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetMechanismList(
    CK_SLOT_ID slotID,
    CK_MECHANISM_TYPE_ARRAY pMechanismList,
    CK_ULONG_PTR pulCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetMechanismList_Call(
        &dercursorIn,
        &slotID,
        pulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetMechanismList(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetMechanismList_Return(
        &dercursorOut,
        retval,
        pMechanismList,
        pulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetObjectSize(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ULONG_PTR pulSize
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetObjectSize_Call(
        &dercursorIn,
        &hSession,
        &hObject
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetObjectSize(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetObjectSize_Return(
        &dercursorOut,
        retval,
        pulSize
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetOperationState(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG_PTR pulOperationStateLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetOperationState_Call(
        &dercursorIn,
        &hSession,
        pulOperationStateLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetOperationState(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetOperationState_Return(
        &dercursorOut,
        retval,
        pOperationState,
        pulOperationStateLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetSessionInfo(
    CK_SESSION_HANDLE hSession,
    CK_SESSION_INFO_PTR pInfo
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetSessionInfo_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetSessionInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetSessionInfo_Return(
        &dercursorOut,
        retval,
        pInfo
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetSlotInfo(
    CK_SLOT_ID slotID,
    CK_SLOT_INFO_PTR pInfo
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetSlotInfo_Call(
        &dercursorIn,
        &slotID
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetSlotInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetSlotInfo_Return(
        &dercursorOut,
        retval,
        pInfo
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetSlotList(
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_ARRAY pSlotList,
    CK_ULONG_PTR pulCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetSlotList_Call(
        &dercursorIn,
        &tokenPresent,
        pulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetSlotList(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetSlotList_Return(
        &dercursorOut,
        retval,
        pSlotList,
        pulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_GetTokenInfo(
    CK_SLOT_ID slotID,
    CK_TOKEN_INFO_PTR pInfo
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_GetTokenInfo_Call(
        &dercursorIn,
        &slotID
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_GetTokenInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_GetTokenInfo_Return(
        &dercursorOut,
        retval,
        pInfo
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_InitPIN(
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_InitPIN_Call(
        &dercursorIn,
        &hSession,
        pPin,
        &ulPinLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_InitPIN(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_InitPIN_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_InitToken(
    CK_SLOT_ID slotID,
    UTF8String pPin,
    CK_ULONG ulPinLen,
    UTF8String pLabel
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_InitToken_Call(
        &dercursorIn,
        &slotID,
        pPin,
        &ulPinLen,
        pLabel
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_InitToken(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_InitToken_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Initialize(
    CK_VOID_PTR pInitArgs
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Initialize_Call(
        &dercursorIn,
        pInitArgs
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Initialize(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Initialize_Return(
        &dercursorOut,
        retval,
        pInitArgs
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Login(
    CK_SESSION_HANDLE hSession,
    CK_USER_TYPE userType,
    CK_UTF8CHAR_ARRAY pPin,
    CK_ULONG ulPinLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Login_Call(
        &dercursorIn,
        &hSession,
        &userType,
        pPin,
        &ulPinLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Login(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Login_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Logout(
    CK_SESSION_HANDLE hSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Logout_Call(
        &dercursorIn,
        &hSession
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Logout(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Logout_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_OpenSession(
    CK_SLOT_ID slotID,
    CK_FLAGS flags,
    ANY pApplication,
    CK_NOTIFY notify,
    CK_SESSION_HANDLE_PTR phSession
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_OpenSession_Call(
        &dercursorIn,
        &slotID,
        &flags,
        &pApplication,
        notify
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_OpenSession(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_OpenSession_Return(
        &dercursorOut,
        retval,
        phSession
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SeedRandom(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSeed,
    CK_ULONG ulSeedLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SeedRandom_Call(
        &dercursorIn,
        &hSession,
        pSeed,
        &ulSeedLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SeedRandom(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SeedRandom_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SetAttributeValue(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulCount
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SetAttributeValue_Call(
        &dercursorIn,
        &hSession,
        &hObject,
        pTemplate,
        &ulCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SetAttributeValue(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SetAttributeValue_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SetOperationState(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pOperationState,
    CK_ULONG ulOperationStateLen,
    CK_OBJECT_HANDLE hEncryptionKey,
    CK_OBJECT_HANDLE hAuthenticationKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SetOperationState_Call(
        &dercursorIn,
        &hSession,
        pOperationState,
        &ulOperationStateLen,
        &hEncryptionKey,
        &hAuthenticationKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SetOperationState(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SetOperationState_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SetPIN(
    CK_SESSION_HANDLE hSession,
    CK_UTF8CHAR_ARRAY pOldPin,
    CK_ULONG ulOldLen,
    CK_UTF8CHAR_ARRAY pNewPin,
    CK_ULONG ulNewPin
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SetPIN_Call(
        &dercursorIn,
        &hSession,
        pOldPin,
        &ulOldLen,
        pNewPin,
        &ulNewPin
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SetPIN(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SetPIN_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Sign(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Sign_Call(
        &dercursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Sign(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Sign_Return(
        &dercursorOut,
        retval,
        pSignature,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignEncryptUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen,
    CK_BYTE_ARRAY pEncryptedPart,
    CK_ULONG_PTR pulEncryptedPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignEncryptUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignEncryptUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignEncryptUpdate_Return(
        &dercursorOut,
        retval,
        pEncryptedPart,
        pulEncryptedPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignFinal_Call(
        &dercursorIn,
        &hSession,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignFinal_Return(
        &dercursorOut,
        retval,
        pSignature,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignRecover(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG_PTR pulSignatureLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignRecover_Call(
        &dercursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignRecover(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignRecover_Return(
        &dercursorOut,
        retval,
        pSignature,
        pulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignRecoverInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignRecoverInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignRecoverInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignRecoverInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_SignUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_SignUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_SignUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_SignUpdate_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_UnwrapKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hUnwrappingKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG ulWrappedKeyLen,
    CK_ATTRIBUTE_ARRAY pTemplate,
    CK_ULONG ulAttributeCount,
    CK_OBJECT_HANDLE_PTR phKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_UnwrapKey_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hUnwrappingKey,
        pWrappedKey,
        &ulWrappedKeyLen,
        pTemplate,
        &ulAttributeCount
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_UnwrapKey(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_UnwrapKey_Return(
        &dercursorOut,
        retval,
        phKey
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_Verify(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pData,
    CK_ULONG ulDataLen,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_Verify_Call(
        &dercursorIn,
        &hSession,
        pData,
        &ulDataLen,
        pSignature,
        &ulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_Verify(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_Verify_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_VerifyFinal(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_VerifyFinal_Call(
        &dercursorIn,
        &hSession,
        pSignature,
        &ulSignatureLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_VerifyFinal(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_VerifyFinal_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_VerifyInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_VerifyInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_VerifyInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_VerifyInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_VerifyRecover(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pSignature,
    CK_ULONG ulSignatureLen,
    CK_BYTE_ARRAY pData,
    CK_ULONG_PTR pulDataLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_VerifyRecover_Call(
        &dercursorIn,
        &hSession,
        pSignature,
        &ulSignatureLen,
        pulDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_VerifyRecover(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_VerifyRecover_Return(
        &dercursorOut,
        retval,
        pData,
        pulDataLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_VerifyRecoverInit(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hKey
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_VerifyRecoverInit_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hKey
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_VerifyRecoverInit(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_VerifyRecoverInit_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_VerifyUpdate(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_ARRAY pPart,
    CK_ULONG ulPartLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_VerifyUpdate_Call(
        &dercursorIn,
        &hSession,
        pPart,
        &ulPartLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_VerifyUpdate(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_VerifyUpdate_Return(
        &dercursorOut,
        retval
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_WaitForSlotEvent(
    CK_FLAGS flags,
    CK_SLOT_ID_PTR pSlot,
    CK_VOID_PTR pReserved
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_WaitForSlotEvent_Call(
        &dercursorIn,
        &flags,
        pReserved
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_WaitForSlotEvent(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_WaitForSlotEvent_Return(
        &dercursorOut,
        retval,
        pSlot,
        pReserved
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}


CK_RV
C_WrapKey(
    CK_SESSION_HANDLE hSession,
    CK_MECHANISM_PTR pMechanism,
    CK_OBJECT_HANDLE hWrappingKey,
    CK_OBJECT_HANDLE hKey,
    CK_BYTE_ARRAY pWrappedKey,
    CK_ULONG_PTR pulWrappedKeyLen
) {
    CK_RV status;
    dercursor dercursorIn;
    dercursor dercursorOut;

    

    status = pack_C_WrapKey_Call(
        &dercursorIn,
        &hSession,
        pMechanism,
        &hWrappingKey,
        &hKey,
        pulWrappedKeyLen
    );

    if (status != CKR_OK) {
        return status;
    };

    status = server_C_WrapKey(&dercursorIn, &dercursorOut);
    if (status != CKR_OK) {
        return status;
    };

    free(dercursorIn.derptr);

    CK_RV retval_pointed;
    CK_RV_PTR retval = &retval_pointed;

    
    status = unpack_C_WrapKey_Return(
        &dercursorOut,
        retval,
        pWrappedKey,
        pulWrappedKeyLen
    );

    if (status != CKR_OK) {
        return status;
    };

    free(dercursorOut.derptr);

    if (retval_pointed != CKR_OK) {
        return retval_pointed;
    };

    return CKR_OK;
}
