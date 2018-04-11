#ifndef KEEHIVE_PACK_H
#define KEEHIVE_PACK_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "types.h"
#include "cryptoki.h"
#include "RemotePKCS11.h"




CK_RV
pack_C_CancelFunction_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_CancelFunction_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_CloseAllSessions_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID
);

CK_RV
pack_C_CloseAllSessions_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_CloseSession_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_CloseSession_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_CopyObject_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_CopyObject_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject
);



CK_RV
pack_C_CreateObject_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_CreateObject_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject
);



CK_RV
pack_C_Decrypt_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* ulEncryptedDataLen,
        const CK_ULONG* pulDataLen
);

CK_RV
pack_C_Decrypt_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pData,
        const CK_ULONG* pulDataLen
);



CK_RV
pack_C_DecryptDigestUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
);

CK_RV
pack_C_DecryptDigestUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
);



CK_RV
pack_C_DecryptFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulLastPartLen
);

CK_RV
pack_C_DecryptFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pLastPart,
        const CK_ULONG* pulLastPartLen
);



CK_RV
pack_C_DecryptInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_DecryptInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_DecryptUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
);

CK_RV
pack_C_DecryptUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
);



CK_RV
pack_C_DecryptVerifyUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
);

CK_RV
pack_C_DecryptVerifyUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
);



CK_RV
pack_C_DeriveKey_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hBaseKey,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulAttributeCount
);

CK_RV
pack_C_DeriveKey_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
);



CK_RV
pack_C_DestroyObject_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject
);

CK_RV
pack_C_DestroyObject_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_Digest_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulDigestLen
);

CK_RV
pack_C_Digest_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pDigest,
        const CK_ULONG* pulDigestLen
);



CK_RV
pack_C_DigestEncryptUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
);

CK_RV
pack_C_DigestEncryptUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
);



CK_RV
pack_C_DigestFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulDigestLen
);

CK_RV
pack_C_DigestFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pDigest,
        const CK_ULONG* pulDigestLen
);



CK_RV
pack_C_DigestInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism
);

CK_RV
pack_C_DigestInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_DigestKey_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_DigestKey_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_DigestUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
);

CK_RV
pack_C_DigestUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_Encrypt_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulEncryptedDataLen
);

CK_RV
pack_C_Encrypt_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* pulEncryptedDataLen
);



CK_RV
pack_C_EncryptFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulEncryptedDataLen
);

CK_RV
pack_C_EncryptFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* pulEncryptedDataLen
);



CK_RV
pack_C_EncryptInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_EncryptInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_EncryptUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
);

CK_RV
pack_C_EncryptUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
);



CK_RV
pack_C_Finalize_Call(
        dercursor * packtarget,
        const CK_VOID* pReserved
);

CK_RV
pack_C_Finalize_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        ANY pReserved
);



CK_RV
pack_C_FindObjects_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* ulMaxObjectCount
);

CK_RV
pack_C_FindObjects_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject,
        const CK_ULONG* pulObjectCount
);



CK_RV
pack_C_FindObjectsFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_FindObjectsFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_FindObjectsInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_FindObjectsInit_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_ATTRIBUTE* pTemplate
);



CK_RV
pack_C_GenerateKey_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_GenerateKey_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
);



CK_RV
pack_C_GenerateKeyPair_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_ATTRIBUTE* pPublicKeyTemplate,
        const CK_ULONG* ulPublicKeyAttributeCount,
        const CK_ATTRIBUTE* pPrivateKeyTemplate,
        const CK_ULONG* ulPrivateKeyAttributeCount
);

CK_RV
pack_C_GenerateKeyPair_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phPublicKey,
        const CK_OBJECT_HANDLE* phPrivateKey
);



CK_RV
pack_C_GenerateRandom_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* ulRandomLen
);

CK_RV
pack_C_GenerateRandom_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pSeed
);



CK_RV
pack_C_GetAttributeValue_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_GetAttributeValue_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_ATTRIBUTE* pTemplate
);



CK_RV
pack_C_GetFunctionStatus_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_GetFunctionStatus_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_GetInfo_Call(
        dercursor * packtarget
);

CK_RV
pack_C_GetInfo_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_INFO* pInfo
);



CK_RV
pack_C_GetMechanismInfo_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID,
        const CK_MECHANISM_TYPE* type
);

CK_RV
pack_C_GetMechanismInfo_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_MECHANISM_INFO* pInfo
);



CK_RV
pack_C_GetMechanismList_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID,
        const CK_ULONG* pulCount
);

CK_RV
pack_C_GetMechanismList_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_MECHANISM_TYPE* pMechanismList,
        const CK_ULONG* pulCount
);



CK_RV
pack_C_GetObjectSize_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject
);

CK_RV
pack_C_GetObjectSize_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_ULONG* pulSize
);



CK_RV
pack_C_GetOperationState_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulOperationStateLen
);

CK_RV
pack_C_GetOperationState_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pOperationState,
        const CK_ULONG* pulOperationStateLen
);



CK_RV
pack_C_GetSessionInfo_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_GetSessionInfo_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_SESSION_INFO* pInfo
);



CK_RV
pack_C_GetSlotInfo_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID
);

CK_RV
pack_C_GetSlotInfo_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_SLOT_INFO* pInfo
);



CK_RV
pack_C_GetSlotList_Call(
        dercursor * packtarget,
        const CK_BBOOL* tokenPresent,
        const CK_ULONG* pulCount
);

CK_RV
pack_C_GetSlotList_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_SLOT_ID* pSlotList,
        const CK_ULONG* pulCount
);



CK_RV
pack_C_GetTokenInfo_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID
);

CK_RV
pack_C_GetTokenInfo_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_TOKEN_INFO* pInfo
);



CK_RV
pack_C_InitPIN_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_UTF8CHAR* pPin,
        const CK_ULONG* ulPinLen
);

CK_RV
pack_C_InitPIN_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_InitToken_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID,
        const unsigned char* pPin,
        const CK_ULONG* ulPinLen,
        const unsigned char* pLabel
);

CK_RV
pack_C_InitToken_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_Initialize_Call(
        dercursor * packtarget,
        const CK_C_INITIALIZE_ARGS* pInitArgs
);

CK_RV
pack_C_Initialize_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        ANY pInitArgs
);



CK_RV
pack_C_Login_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_USER_TYPE* userType,
        const CK_UTF8CHAR* pPin,
        const CK_ULONG* ulPinLen
);

CK_RV
pack_C_Login_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_Logout_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession
);

CK_RV
pack_C_Logout_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_OpenSession_Call(
        dercursor * packtarget,
        const CK_SLOT_ID* slotID,
        const CK_FLAGS* flags,
        ANY pApplication,
        CK_NOTIFY notify
);

CK_RV
pack_C_OpenSession_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_SESSION_HANDLE* phSession
);



CK_RV
pack_C_SeedRandom_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSeed,
        const CK_ULONG* ulSeedLen
);

CK_RV
pack_C_SeedRandom_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_SetAttributeValue_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
);

CK_RV
pack_C_SetAttributeValue_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_SetOperationState_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pOperationState,
        const CK_ULONG* ulOperationStateLen,
        const CK_OBJECT_HANDLE* hEncryptionKey,
        const CK_OBJECT_HANDLE* hAuthenticationKey
);

CK_RV
pack_C_SetOperationState_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_SetPIN_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_UTF8CHAR* pOldPin,
        const CK_ULONG* ulOldLen,
        const CK_UTF8CHAR* pNewPin,
        const CK_ULONG* ulNewPin
);

CK_RV
pack_C_SetPIN_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_Sign_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulSignatureLen
);

CK_RV
pack_C_Sign_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
);



CK_RV
pack_C_SignEncryptUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
);

CK_RV
pack_C_SignEncryptUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
);



CK_RV
pack_C_SignFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulSignatureLen
);

CK_RV
pack_C_SignFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
);



CK_RV
pack_C_SignInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_SignInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_SignRecover_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulSignatureLen
);

CK_RV
pack_C_SignRecover_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
);



CK_RV
pack_C_SignRecoverInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_SignRecoverInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_SignUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
);

CK_RV
pack_C_SignUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_UnwrapKey_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hUnwrappingKey,
        const CK_BYTE* pWrappedKey,
        const CK_ULONG* ulWrappedKeyLen,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulAttributeCount
);

CK_RV
pack_C_UnwrapKey_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
);



CK_RV
pack_C_Verify_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen
);

CK_RV
pack_C_Verify_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_VerifyFinal_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen
);

CK_RV
pack_C_VerifyFinal_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_VerifyInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_VerifyInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_VerifyRecover_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen,
        const CK_ULONG* pulDataLen
);

CK_RV
pack_C_VerifyRecover_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pData,
        const CK_ULONG* pulDataLen
);



CK_RV
pack_C_VerifyRecoverInit_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
);

CK_RV
pack_C_VerifyRecoverInit_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_VerifyUpdate_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
);

CK_RV
pack_C_VerifyUpdate_Return(
        dercursor * packtarget,
        const CK_RV* retval
);



CK_RV
pack_C_WaitForSlotEvent_Call(
        dercursor * packtarget,
        const CK_FLAGS* flags,
        const CK_VOID* pReserved
);

CK_RV
pack_C_WaitForSlotEvent_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_SLOT_ID* pSlot,
        const CK_VOID* pReserved
);



CK_RV
pack_C_WrapKey_Call(
        dercursor * packtarget,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hWrappingKey,
        const CK_OBJECT_HANDLE* hKey,
        const CK_ULONG* pulWrappedKeyLen
);

CK_RV
pack_C_WrapKey_Return(
        dercursor * packtarget,
        const CK_RV* retval,
        const CK_BYTE* pWrappedKey,
        const CK_ULONG* pulWrappedKeyLen
);




#endif //KEEHIVE_PACK_H