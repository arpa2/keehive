#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"
#include "derget.h"
#include "static/util.h"
#include "static/returncodes.h"





static const derwalk C_CancelFunction_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_CancelFunction_Call,
        DER_PACK_END
};

static const derwalk C_CloseAllSessions_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_CloseAllSessions_Call,
        DER_PACK_END
};

static const derwalk C_CloseSession_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_CloseSession_Call,
        DER_PACK_END
};

static const derwalk C_CopyObject_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_CopyObject_Call,
        DER_PACK_END
};

static const derwalk C_CreateObject_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_CreateObject_Call,
        DER_PACK_END
};

static const derwalk C_Decrypt_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Decrypt_Call,
        DER_PACK_END
};

static const derwalk C_DecryptDigestUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptDigestUpdate_Call,
        DER_PACK_END
};

static const derwalk C_DecryptFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptFinal_Call,
        DER_PACK_END
};

static const derwalk C_DecryptInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptInit_Call,
        DER_PACK_END
};

static const derwalk C_DecryptUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptUpdate_Call,
        DER_PACK_END
};

static const derwalk C_DecryptVerifyUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptVerifyUpdate_Call,
        DER_PACK_END
};

static const derwalk C_DeriveKey_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DeriveKey_Call,
        DER_PACK_END
};

static const derwalk C_DestroyObject_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DestroyObject_Call,
        DER_PACK_END
};

static const derwalk C_Digest_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Digest_Call,
        DER_PACK_END
};

static const derwalk C_DigestEncryptUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestEncryptUpdate_Call,
        DER_PACK_END
};

static const derwalk C_DigestFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestFinal_Call,
        DER_PACK_END
};

static const derwalk C_DigestInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestInit_Call,
        DER_PACK_END
};

static const derwalk C_DigestKey_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestKey_Call,
        DER_PACK_END
};

static const derwalk C_DigestUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestUpdate_Call,
        DER_PACK_END
};

static const derwalk C_Encrypt_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Encrypt_Call,
        DER_PACK_END
};

static const derwalk C_EncryptFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptFinal_Call,
        DER_PACK_END
};

static const derwalk C_EncryptInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptInit_Call,
        DER_PACK_END
};

static const derwalk C_EncryptUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptUpdate_Call,
        DER_PACK_END
};

static const derwalk C_Finalize_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Finalize_Call,
        DER_PACK_END
};

static const derwalk C_FindObjects_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjects_Call,
        DER_PACK_END
};

static const derwalk C_FindObjectsFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjectsFinal_Call,
        DER_PACK_END
};

static const derwalk C_FindObjectsInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjectsInit_Call,
        DER_PACK_END
};

static const derwalk C_GenerateKey_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateKey_Call,
        DER_PACK_END
};

static const derwalk C_GenerateKeyPair_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateKeyPair_Call,
        DER_PACK_END
};

static const derwalk C_GenerateRandom_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateRandom_Call,
        DER_PACK_END
};

static const derwalk C_GetAttributeValue_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetAttributeValue_Call,
        DER_PACK_END
};

static const derwalk C_GetFunctionStatus_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetFunctionStatus_Call,
        DER_PACK_END
};

static const derwalk C_GetInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetMechanismInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetMechanismInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetMechanismList_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetMechanismList_Call,
        DER_PACK_END
};

static const derwalk C_GetObjectSize_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetObjectSize_Call,
        DER_PACK_END
};

static const derwalk C_GetOperationState_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetOperationState_Call,
        DER_PACK_END
};

static const derwalk C_GetSessionInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSessionInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetSlotInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetSlotList_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};

static const derwalk C_GetTokenInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetTokenInfo_Call,
        DER_PACK_END
};

static const derwalk C_InitPIN_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_InitPIN_Call,
        DER_PACK_END
};

static const derwalk C_InitToken_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_InitToken_Call,
        DER_PACK_END
};

static const derwalk C_Initialize_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Initialize_Call,
        DER_PACK_END
};

static const derwalk C_Login_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Login_Call,
        DER_PACK_END
};

static const derwalk C_Logout_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Logout_Call,
        DER_PACK_END
};

static const derwalk C_OpenSession_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_OpenSession_Call,
        DER_PACK_END
};

static const derwalk C_SeedRandom_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SeedRandom_Call,
        DER_PACK_END
};

static const derwalk C_SetAttributeValue_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SetAttributeValue_Call,
        DER_PACK_END
};

static const derwalk C_SetOperationState_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SetOperationState_Call,
        DER_PACK_END
};

static const derwalk C_SetPIN_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SetPIN_Call,
        DER_PACK_END
};

static const derwalk C_Sign_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Sign_Call,
        DER_PACK_END
};

static const derwalk C_SignEncryptUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignEncryptUpdate_Call,
        DER_PACK_END
};

static const derwalk C_SignFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignFinal_Call,
        DER_PACK_END
};

static const derwalk C_SignInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignInit_Call,
        DER_PACK_END
};

static const derwalk C_SignRecover_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignRecover_Call,
        DER_PACK_END
};

static const derwalk C_SignRecoverInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignRecoverInit_Call,
        DER_PACK_END
};

static const derwalk C_SignUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_SignUpdate_Call,
        DER_PACK_END
};

static const derwalk C_UnwrapKey_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_UnwrapKey_Call,
        DER_PACK_END
};

static const derwalk C_Verify_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_Verify_Call,
        DER_PACK_END
};

static const derwalk C_VerifyFinal_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyFinal_Call,
        DER_PACK_END
};

static const derwalk C_VerifyInit_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyInit_Call,
        DER_PACK_END
};

static const derwalk C_VerifyRecover_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyRecover_Call,
        DER_PACK_END
};

static const derwalk C_VerifyUpdate_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyUpdate_Call,
        DER_PACK_END
};

static const derwalk C_WaitForSlotEvent_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_WaitForSlotEvent_Call,
        DER_PACK_END
};

static const derwalk C_WrapKey_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_WrapKey_Call,
        DER_PACK_END
};

static const derwalk C_CancelFunction_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_CancelFunction_Return,
        DER_PACK_END
};

static const derwalk C_CloseAllSessions_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_CloseAllSessions_Return,
        DER_PACK_END
};

static const derwalk C_CloseSession_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_CloseSession_Return,
        DER_PACK_END
};

static const derwalk C_CopyObject_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_CopyObject_Return,
        DER_PACK_END
};

static const derwalk C_CreateObject_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_CreateObject_Return,
        DER_PACK_END
};

static const derwalk C_Decrypt_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Decrypt_Return,
        DER_PACK_END
};

static const derwalk C_DecryptDigestUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptDigestUpdate_Return,
        DER_PACK_END
};

static const derwalk C_DecryptFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptFinal_Return,
        DER_PACK_END
};

static const derwalk C_DecryptInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptInit_Return,
        DER_PACK_END
};

static const derwalk C_DecryptUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptUpdate_Return,
        DER_PACK_END
};

static const derwalk C_DecryptVerifyUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DecryptVerifyUpdate_Return,
        DER_PACK_END
};

static const derwalk C_DeriveKey_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DeriveKey_Return,
        DER_PACK_END
};

static const derwalk C_DestroyObject_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DestroyObject_Return,
        DER_PACK_END
};

static const derwalk C_Digest_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Digest_Return,
        DER_PACK_END
};

static const derwalk C_DigestEncryptUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestEncryptUpdate_Return,
        DER_PACK_END
};

static const derwalk C_DigestFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestFinal_Return,
        DER_PACK_END
};

static const derwalk C_DigestInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestInit_Return,
        DER_PACK_END
};

static const derwalk C_DigestKey_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestKey_Return,
        DER_PACK_END
};

static const derwalk C_DigestUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_DigestUpdate_Return,
        DER_PACK_END
};

static const derwalk C_Encrypt_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Encrypt_Return,
        DER_PACK_END
};

static const derwalk C_EncryptFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptFinal_Return,
        DER_PACK_END
};

static const derwalk C_EncryptInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptInit_Return,
        DER_PACK_END
};

static const derwalk C_EncryptUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_EncryptUpdate_Return,
        DER_PACK_END
};

static const derwalk C_Finalize_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Finalize_Return,
        DER_PACK_END
};

static const derwalk C_FindObjects_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjects_Return,
        DER_PACK_END
};

static const derwalk C_FindObjectsFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjectsFinal_Return,
        DER_PACK_END
};

static const derwalk C_FindObjectsInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_FindObjectsInit_Return,
        DER_PACK_END
};

static const derwalk C_GenerateKey_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateKey_Return,
        DER_PACK_END
};

static const derwalk C_GenerateKeyPair_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateKeyPair_Return,
        DER_PACK_END
};

static const derwalk C_GenerateRandom_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GenerateRandom_Return,
        DER_PACK_END
};

static const derwalk C_GetAttributeValue_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetAttributeValue_Return,
        DER_PACK_END
};

static const derwalk C_GetFunctionStatus_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetFunctionStatus_Return,
        DER_PACK_END
};

static const derwalk C_GetInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Return,
        DER_PACK_END
};

static const derwalk C_GetMechanismInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetMechanismInfo_Return,
        DER_PACK_END
};

static const derwalk C_GetMechanismList_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetMechanismList_Return,
        DER_PACK_END
};

static const derwalk C_GetObjectSize_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetObjectSize_Return,
        DER_PACK_END
};

static const derwalk C_GetOperationState_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetOperationState_Return,
        DER_PACK_END
};

static const derwalk C_GetSessionInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSessionInfo_Return,
        DER_PACK_END
};

static const derwalk C_GetSlotInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotInfo_Return,
        DER_PACK_END
};

static const derwalk C_GetSlotList_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Return,
        DER_PACK_END
};

static const derwalk C_GetTokenInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetTokenInfo_Return,
        DER_PACK_END
};

static const derwalk C_InitPIN_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_InitPIN_Return,
        DER_PACK_END
};

static const derwalk C_InitToken_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_InitToken_Return,
        DER_PACK_END
};

static const derwalk C_Initialize_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Initialize_Return,
        DER_PACK_END
};

static const derwalk C_Login_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Login_Return,
        DER_PACK_END
};

static const derwalk C_Logout_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Logout_Return,
        DER_PACK_END
};

static const derwalk C_OpenSession_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_OpenSession_Return,
        DER_PACK_END
};

static const derwalk C_SeedRandom_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SeedRandom_Return,
        DER_PACK_END
};

static const derwalk C_SetAttributeValue_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SetAttributeValue_Return,
        DER_PACK_END
};

static const derwalk C_SetOperationState_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SetOperationState_Return,
        DER_PACK_END
};

static const derwalk C_SetPIN_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SetPIN_Return,
        DER_PACK_END
};

static const derwalk C_Sign_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Sign_Return,
        DER_PACK_END
};

static const derwalk C_SignEncryptUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignEncryptUpdate_Return,
        DER_PACK_END
};

static const derwalk C_SignFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignFinal_Return,
        DER_PACK_END
};

static const derwalk C_SignInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignInit_Return,
        DER_PACK_END
};

static const derwalk C_SignRecover_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignRecover_Return,
        DER_PACK_END
};

static const derwalk C_SignRecoverInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignRecoverInit_Return,
        DER_PACK_END
};

static const derwalk C_SignUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_SignUpdate_Return,
        DER_PACK_END
};

static const derwalk C_UnwrapKey_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_UnwrapKey_Return,
        DER_PACK_END
};

static const derwalk C_Verify_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_Verify_Return,
        DER_PACK_END
};

static const derwalk C_VerifyFinal_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyFinal_Return,
        DER_PACK_END
};

static const derwalk C_VerifyInit_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyInit_Return,
        DER_PACK_END
};

static const derwalk C_VerifyRecover_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyRecover_Return,
        DER_PACK_END
};

static const derwalk C_VerifyUpdate_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_VerifyUpdate_Return,
        DER_PACK_END
};

static const derwalk C_WaitForSlotEvent_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_WaitForSlotEvent_Return,
        DER_PACK_END
};

static const derwalk C_WrapKey_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_WrapKey_Return,
        DER_PACK_END
};





CK_RV
unpack_C_CancelFunction_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_CancelFunction_Call_t C_CancelFunction_Call;

    memset(&C_CancelFunction_Call, 0, sizeof(C_CancelFunction_Call));

    int status = der_unpack(packed,
                            C_CancelFunction_Call_packer,
                            (dercursor *) &C_CancelFunction_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CancelFunction_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_CancelFunction_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_CancelFunction_Return_t C_CancelFunction_Return;

    memset(&C_CancelFunction_Return, 0, sizeof(C_CancelFunction_Return));

    int status = der_unpack(packed,
                            C_CancelFunction_Return_packer,
                            (dercursor *) &C_CancelFunction_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CancelFunction_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_CloseAllSessions_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
) {

    C_CloseAllSessions_Call_t C_CloseAllSessions_Call;

    memset(&C_CloseAllSessions_Call, 0, sizeof(C_CloseAllSessions_Call));

    int status = der_unpack(packed,
                            C_CloseAllSessions_Call_packer,
                            (dercursor *) &C_CloseAllSessions_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CloseAllSessions_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_CloseAllSessions_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_CloseAllSessions_Return_t C_CloseAllSessions_Return;

    memset(&C_CloseAllSessions_Return, 0, sizeof(C_CloseAllSessions_Return));

    int status = der_unpack(packed,
                            C_CloseAllSessions_Return_packer,
                            (dercursor *) &C_CloseAllSessions_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CloseAllSessions_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_CloseSession_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_CloseSession_Call_t C_CloseSession_Call;

    memset(&C_CloseSession_Call, 0, sizeof(C_CloseSession_Call));

    int status = der_unpack(packed,
                            C_CloseSession_Call_packer,
                            (dercursor *) &C_CloseSession_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CloseSession_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_CloseSession_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_CloseSession_Return_t C_CloseSession_Return;

    memset(&C_CloseSession_Return, 0, sizeof(C_CloseSession_Return));

    int status = der_unpack(packed,
                            C_CloseSession_Return_packer,
                            (dercursor *) &C_CloseSession_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CloseSession_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_CopyObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_CopyObject_Call_t C_CopyObject_Call;

    memset(&C_CopyObject_Call, 0, sizeof(C_CopyObject_Call));

    int status = der_unpack(packed,
                            C_CopyObject_Call_packer,
                            (dercursor *) &C_CopyObject_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CopyObject_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_CopyObject_Call.hObject, hObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_CopyObject_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_CopyObject_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_CopyObject_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phObject
) {

    C_CopyObject_Return_t C_CopyObject_Return;

    memset(&C_CopyObject_Return, 0, sizeof(C_CopyObject_Return));

    int status = der_unpack(packed,
                            C_CopyObject_Return_packer,
                            (dercursor *) &C_CopyObject_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CopyObject_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_CopyObject_Return.phObject, phObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_CreateObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_CreateObject_Call_t C_CreateObject_Call;

    memset(&C_CreateObject_Call, 0, sizeof(C_CreateObject_Call));

    int status = der_unpack(packed,
                            C_CreateObject_Call_packer,
                            (dercursor *) &C_CreateObject_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CreateObject_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_CreateObject_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_CreateObject_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_CreateObject_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phObject
) {

    C_CreateObject_Return_t C_CreateObject_Return;

    memset(&C_CreateObject_Return, 0, sizeof(C_CreateObject_Return));

    int status = der_unpack(packed,
                            C_CreateObject_Return_packer,
                            (dercursor *) &C_CreateObject_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_CreateObject_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_CreateObject_Return.phObject, phObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Decrypt_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR ulEncryptedDataLen,
        CK_ULONG_PTR pulDataLen
) {

    C_Decrypt_Call_t C_Decrypt_Call;

    memset(&C_Decrypt_Call, 0, sizeof(C_Decrypt_Call));

    int status = der_unpack(packed,
                            C_Decrypt_Call_packer,
                            (dercursor *) &C_Decrypt_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Decrypt_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Decrypt_Call.pEncryptedData, pEncryptedData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Decrypt_Call.ulEncryptedDataLen, ulEncryptedDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Decrypt_Call.pulDataLen, pulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Decrypt_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR pulDataLen
) {

    C_Decrypt_Return_t C_Decrypt_Return;

    memset(&C_Decrypt_Return, 0, sizeof(C_Decrypt_Return));

    int status = der_unpack(packed,
                            C_Decrypt_Return_packer,
                            (dercursor *) &C_Decrypt_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Decrypt_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Decrypt_Return.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Decrypt_Return.pulDataLen, pulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DecryptDigestUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptDigestUpdate_Call_t C_DecryptDigestUpdate_Call;

    memset(&C_DecryptDigestUpdate_Call, 0, sizeof(C_DecryptDigestUpdate_Call));

    int status = der_unpack(packed,
                            C_DecryptDigestUpdate_Call_packer,
                            (dercursor *) &C_DecryptDigestUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptDigestUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptDigestUpdate_Call.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptDigestUpdate_Call.ulEncryptedPartLen, ulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptDigestUpdate_Call.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DecryptDigestUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptDigestUpdate_Return_t C_DecryptDigestUpdate_Return;

    memset(&C_DecryptDigestUpdate_Return, 0, sizeof(C_DecryptDigestUpdate_Return));

    int status = der_unpack(packed,
                            C_DecryptDigestUpdate_Return_packer,
                            (dercursor *) &C_DecryptDigestUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptDigestUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptDigestUpdate_Return.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptDigestUpdate_Return.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DecryptFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulLastPartLen
) {

    C_DecryptFinal_Call_t C_DecryptFinal_Call;

    memset(&C_DecryptFinal_Call, 0, sizeof(C_DecryptFinal_Call));

    int status = der_unpack(packed,
                            C_DecryptFinal_Call_packer,
                            (dercursor *) &C_DecryptFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptFinal_Call.pulLastPartLen, pulLastPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DecryptFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pLastPart,
        CK_ULONG_PTR pulLastPartLen
) {

    C_DecryptFinal_Return_t C_DecryptFinal_Return;

    memset(&C_DecryptFinal_Return, 0, sizeof(C_DecryptFinal_Return));

    int status = der_unpack(packed,
                            C_DecryptFinal_Return_packer,
                            (dercursor *) &C_DecryptFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptFinal_Return.pLastPart, pLastPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptFinal_Return.pulLastPartLen, pulLastPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DecryptInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_DecryptInit_Call_t C_DecryptInit_Call;

    memset(&C_DecryptInit_Call, 0, sizeof(C_DecryptInit_Call));

    int status = der_unpack(packed,
                            C_DecryptInit_Call_packer,
                            (dercursor *) &C_DecryptInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_DecryptInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptInit_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DecryptInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_DecryptInit_Return_t C_DecryptInit_Return;

    memset(&C_DecryptInit_Return, 0, sizeof(C_DecryptInit_Return));

    int status = der_unpack(packed,
                            C_DecryptInit_Return_packer,
                            (dercursor *) &C_DecryptInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DecryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptUpdate_Call_t C_DecryptUpdate_Call;

    memset(&C_DecryptUpdate_Call, 0, sizeof(C_DecryptUpdate_Call));

    int status = der_unpack(packed,
                            C_DecryptUpdate_Call_packer,
                            (dercursor *) &C_DecryptUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptUpdate_Call.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptUpdate_Call.ulEncryptedPartLen, ulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptUpdate_Call.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DecryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptUpdate_Return_t C_DecryptUpdate_Return;

    memset(&C_DecryptUpdate_Return, 0, sizeof(C_DecryptUpdate_Return));

    int status = der_unpack(packed,
                            C_DecryptUpdate_Return_packer,
                            (dercursor *) &C_DecryptUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptUpdate_Return.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptUpdate_Return.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DecryptVerifyUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR ulEncryptedPartLen,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptVerifyUpdate_Call_t C_DecryptVerifyUpdate_Call;

    memset(&C_DecryptVerifyUpdate_Call, 0, sizeof(C_DecryptVerifyUpdate_Call));

    int status = der_unpack(packed,
                            C_DecryptVerifyUpdate_Call_packer,
                            (dercursor *) &C_DecryptVerifyUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptVerifyUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptVerifyUpdate_Call.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptVerifyUpdate_Call.ulEncryptedPartLen, ulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptVerifyUpdate_Call.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DecryptVerifyUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR pulPartLen
) {

    C_DecryptVerifyUpdate_Return_t C_DecryptVerifyUpdate_Return;

    memset(&C_DecryptVerifyUpdate_Return, 0, sizeof(C_DecryptVerifyUpdate_Return));

    int status = der_unpack(packed,
                            C_DecryptVerifyUpdate_Return_packer,
                            (dercursor *) &C_DecryptVerifyUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DecryptVerifyUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DecryptVerifyUpdate_Return.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DecryptVerifyUpdate_Return.pulPartLen, pulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DeriveKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hBaseKey,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulAttributeCount
) {

    C_DeriveKey_Call_t C_DeriveKey_Call;

    memset(&C_DeriveKey_Call, 0, sizeof(C_DeriveKey_Call));

    int status = der_unpack(packed,
                            C_DeriveKey_Call_packer,
                            (dercursor *) &C_DeriveKey_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DeriveKey_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_DeriveKey_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DeriveKey_Call.hBaseKey, hBaseKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_DeriveKey_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DeriveKey_Call.ulAttributeCount, ulAttributeCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DeriveKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
) {

    C_DeriveKey_Return_t C_DeriveKey_Return;

    memset(&C_DeriveKey_Return, 0, sizeof(C_DeriveKey_Return));

    int status = der_unpack(packed,
                            C_DeriveKey_Return_packer,
                            (dercursor *) &C_DeriveKey_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DeriveKey_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DeriveKey_Return.phKey, phKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DestroyObject_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject
) {

    C_DestroyObject_Call_t C_DestroyObject_Call;

    memset(&C_DestroyObject_Call, 0, sizeof(C_DestroyObject_Call));

    int status = der_unpack(packed,
                            C_DestroyObject_Call_packer,
                            (dercursor *) &C_DestroyObject_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DestroyObject_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DestroyObject_Call.hObject, hObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DestroyObject_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_DestroyObject_Return_t C_DestroyObject_Return;

    memset(&C_DestroyObject_Return, 0, sizeof(C_DestroyObject_Return));

    int status = der_unpack(packed,
                            C_DestroyObject_Return_packer,
                            (dercursor *) &C_DestroyObject_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DestroyObject_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Digest_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulDigestLen
) {

    C_Digest_Call_t C_Digest_Call;

    memset(&C_Digest_Call, 0, sizeof(C_Digest_Call));

    int status = der_unpack(packed,
                            C_Digest_Call_packer,
                            (dercursor *) &C_Digest_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Digest_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Digest_Call.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Digest_Call.ulDataLen, ulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Digest_Call.pulDigestLen, pulDigestLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Digest_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pDigest,
        CK_ULONG_PTR pulDigestLen
) {

    C_Digest_Return_t C_Digest_Return;

    memset(&C_Digest_Return, 0, sizeof(C_Digest_Return));

    int status = der_unpack(packed,
                            C_Digest_Return_packer,
                            (dercursor *) &C_Digest_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Digest_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Digest_Return.pDigest, pDigest);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Digest_Return.pulDigestLen, pulDigestLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DigestEncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_DigestEncryptUpdate_Call_t C_DigestEncryptUpdate_Call;

    memset(&C_DigestEncryptUpdate_Call, 0, sizeof(C_DigestEncryptUpdate_Call));

    int status = der_unpack(packed,
                            C_DigestEncryptUpdate_Call_packer,
                            (dercursor *) &C_DigestEncryptUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestEncryptUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DigestEncryptUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestEncryptUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestEncryptUpdate_Call.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DigestEncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_DigestEncryptUpdate_Return_t C_DigestEncryptUpdate_Return;

    memset(&C_DigestEncryptUpdate_Return, 0, sizeof(C_DigestEncryptUpdate_Return));

    int status = der_unpack(packed,
                            C_DigestEncryptUpdate_Return_packer,
                            (dercursor *) &C_DigestEncryptUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestEncryptUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DigestEncryptUpdate_Return.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestEncryptUpdate_Return.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DigestFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulDigestLen
) {

    C_DigestFinal_Call_t C_DigestFinal_Call;

    memset(&C_DigestFinal_Call, 0, sizeof(C_DigestFinal_Call));

    int status = der_unpack(packed,
                            C_DigestFinal_Call_packer,
                            (dercursor *) &C_DigestFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestFinal_Call.pulDigestLen, pulDigestLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DigestFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pDigest,
        CK_ULONG_PTR pulDigestLen
) {

    C_DigestFinal_Return_t C_DigestFinal_Return;

    memset(&C_DigestFinal_Return, 0, sizeof(C_DigestFinal_Return));

    int status = der_unpack(packed,
                            C_DigestFinal_Return_packer,
                            (dercursor *) &C_DigestFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DigestFinal_Return.pDigest, pDigest);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestFinal_Return.pulDigestLen, pulDigestLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DigestInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism
) {

    C_DigestInit_Call_t C_DigestInit_Call;

    memset(&C_DigestInit_Call, 0, sizeof(C_DigestInit_Call));

    int status = der_unpack(packed,
                            C_DigestInit_Call_packer,
                            (dercursor *) &C_DigestInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_DigestInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DigestInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_DigestInit_Return_t C_DigestInit_Return;

    memset(&C_DigestInit_Return, 0, sizeof(C_DigestInit_Return));

    int status = der_unpack(packed,
                            C_DigestInit_Return_packer,
                            (dercursor *) &C_DigestInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DigestKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_DigestKey_Call_t C_DigestKey_Call;

    memset(&C_DigestKey_Call, 0, sizeof(C_DigestKey_Call));

    int status = der_unpack(packed,
                            C_DigestKey_Call_packer,
                            (dercursor *) &C_DigestKey_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestKey_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestKey_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DigestKey_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_DigestKey_Return_t C_DigestKey_Return;

    memset(&C_DigestKey_Return, 0, sizeof(C_DigestKey_Return));

    int status = der_unpack(packed,
                            C_DigestKey_Return_packer,
                            (dercursor *) &C_DigestKey_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestKey_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_DigestUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
) {

    C_DigestUpdate_Call_t C_DigestUpdate_Call;

    memset(&C_DigestUpdate_Call, 0, sizeof(C_DigestUpdate_Call));

    int status = der_unpack(packed,
                            C_DigestUpdate_Call_packer,
                            (dercursor *) &C_DigestUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_DigestUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_DigestUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_DigestUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_DigestUpdate_Return_t C_DigestUpdate_Return;

    memset(&C_DigestUpdate_Return, 0, sizeof(C_DigestUpdate_Return));

    int status = der_unpack(packed,
                            C_DigestUpdate_Return_packer,
                            (dercursor *) &C_DigestUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_DigestUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Encrypt_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulEncryptedDataLen
) {

    C_Encrypt_Call_t C_Encrypt_Call;

    memset(&C_Encrypt_Call, 0, sizeof(C_Encrypt_Call));

    int status = der_unpack(packed,
                            C_Encrypt_Call_packer,
                            (dercursor *) &C_Encrypt_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Encrypt_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Encrypt_Call.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Encrypt_Call.ulDataLen, ulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Encrypt_Call.pulEncryptedDataLen, pulEncryptedDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Encrypt_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR pulEncryptedDataLen
) {

    C_Encrypt_Return_t C_Encrypt_Return;

    memset(&C_Encrypt_Return, 0, sizeof(C_Encrypt_Return));

    int status = der_unpack(packed,
                            C_Encrypt_Return_packer,
                            (dercursor *) &C_Encrypt_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Encrypt_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Encrypt_Return.pEncryptedData, pEncryptedData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Encrypt_Return.pulEncryptedDataLen, pulEncryptedDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_EncryptFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulEncryptedDataLen
) {

    C_EncryptFinal_Call_t C_EncryptFinal_Call;

    memset(&C_EncryptFinal_Call, 0, sizeof(C_EncryptFinal_Call));

    int status = der_unpack(packed,
                            C_EncryptFinal_Call_packer,
                            (dercursor *) &C_EncryptFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptFinal_Call.pulEncryptedDataLen, pulEncryptedDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_EncryptFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedData,
        CK_ULONG_PTR pulEncryptedDataLen
) {

    C_EncryptFinal_Return_t C_EncryptFinal_Return;

    memset(&C_EncryptFinal_Return, 0, sizeof(C_EncryptFinal_Return));

    int status = der_unpack(packed,
                            C_EncryptFinal_Return_packer,
                            (dercursor *) &C_EncryptFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_EncryptFinal_Return.pEncryptedData, pEncryptedData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptFinal_Return.pulEncryptedDataLen, pulEncryptedDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_EncryptInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_EncryptInit_Call_t C_EncryptInit_Call;

    memset(&C_EncryptInit_Call, 0, sizeof(C_EncryptInit_Call));

    int status = der_unpack(packed,
                            C_EncryptInit_Call_packer,
                            (dercursor *) &C_EncryptInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_EncryptInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptInit_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_EncryptInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_EncryptInit_Return_t C_EncryptInit_Return;

    memset(&C_EncryptInit_Return, 0, sizeof(C_EncryptInit_Return));

    int status = der_unpack(packed,
                            C_EncryptInit_Return_packer,
                            (dercursor *) &C_EncryptInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_EncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_EncryptUpdate_Call_t C_EncryptUpdate_Call;

    memset(&C_EncryptUpdate_Call, 0, sizeof(C_EncryptUpdate_Call));

    int status = der_unpack(packed,
                            C_EncryptUpdate_Call_packer,
                            (dercursor *) &C_EncryptUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_EncryptUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptUpdate_Call.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_EncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_EncryptUpdate_Return_t C_EncryptUpdate_Return;

    memset(&C_EncryptUpdate_Return, 0, sizeof(C_EncryptUpdate_Return));

    int status = der_unpack(packed,
                            C_EncryptUpdate_Return_packer,
                            (dercursor *) &C_EncryptUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_EncryptUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_EncryptUpdate_Return.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_EncryptUpdate_Return.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Finalize_Call(
        dercursor* packed,
        CK_VOID_PTR pReserved
) {

    C_Finalize_Call_t C_Finalize_Call;

    memset(&C_Finalize_Call, 0, sizeof(C_Finalize_Call));

    int status = der_unpack(packed,
                            C_Finalize_Call_packer,
                            (dercursor *) &C_Finalize_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_CK_VOID_PTR(&C_Finalize_Call.pReserved, pReserved);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Finalize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        ANY pReserved
) {

    C_Finalize_Return_t C_Finalize_Return;

    memset(&C_Finalize_Return, 0, sizeof(C_Finalize_Return));

    int status = der_unpack(packed,
                            C_Finalize_Return_packer,
                            (dercursor *) &C_Finalize_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Finalize_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    // todo: do we need to convert ANY?




    return CKR_OK;
};



CK_RV
unpack_C_FindObjects_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR ulMaxObjectCount
) {

    C_FindObjects_Call_t C_FindObjects_Call;

    memset(&C_FindObjects_Call, 0, sizeof(C_FindObjects_Call));

    int status = der_unpack(packed,
                            C_FindObjects_Call_packer,
                            (dercursor *) &C_FindObjects_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjects_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_FindObjects_Call.ulMaxObjectCount, ulMaxObjectCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_FindObjects_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_ARRAY phObject,
        CK_ULONG_PTR pulObjectCount
) {

    C_FindObjects_Return_t C_FindObjects_Return;

    memset(&C_FindObjects_Return, 0, sizeof(C_FindObjects_Return));

    int status = der_unpack(packed,
                            C_FindObjects_Return_packer,
                            (dercursor *) &C_FindObjects_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjects_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_OBJECT_HANDLE_ARRAY(&C_FindObjects_Return.phObject, phObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_FindObjects_Return.pulObjectCount, pulObjectCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_FindObjectsFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_FindObjectsFinal_Call_t C_FindObjectsFinal_Call;

    memset(&C_FindObjectsFinal_Call, 0, sizeof(C_FindObjectsFinal_Call));

    int status = der_unpack(packed,
                            C_FindObjectsFinal_Call_packer,
                            (dercursor *) &C_FindObjectsFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjectsFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_FindObjectsFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_FindObjectsFinal_Return_t C_FindObjectsFinal_Return;

    memset(&C_FindObjectsFinal_Return, 0, sizeof(C_FindObjectsFinal_Return));

    int status = der_unpack(packed,
                            C_FindObjectsFinal_Return_packer,
                            (dercursor *) &C_FindObjectsFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjectsFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_FindObjectsInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_FindObjectsInit_Call_t C_FindObjectsInit_Call;

    memset(&C_FindObjectsInit_Call, 0, sizeof(C_FindObjectsInit_Call));

    int status = der_unpack(packed,
                            C_FindObjectsInit_Call_packer,
                            (dercursor *) &C_FindObjectsInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjectsInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_FindObjectsInit_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_FindObjectsInit_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_FindObjectsInit_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ATTRIBUTE_ARRAY pTemplate
) {

    C_FindObjectsInit_Return_t C_FindObjectsInit_Return;

    memset(&C_FindObjectsInit_Return, 0, sizeof(C_FindObjectsInit_Return));

    int status = der_unpack(packed,
                            C_FindObjectsInit_Return_packer,
                            (dercursor *) &C_FindObjectsInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_FindObjectsInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_FindObjectsInit_Return.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GenerateKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_GenerateKey_Call_t C_GenerateKey_Call;

    memset(&C_GenerateKey_Call, 0, sizeof(C_GenerateKey_Call));

    int status = der_unpack(packed,
                            C_GenerateKey_Call_packer,
                            (dercursor *) &C_GenerateKey_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateKey_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_GenerateKey_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_GenerateKey_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKey_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GenerateKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
) {

    C_GenerateKey_Return_t C_GenerateKey_Return;

    memset(&C_GenerateKey_Return, 0, sizeof(C_GenerateKey_Return));

    int status = der_unpack(packed,
                            C_GenerateKey_Return_packer,
                            (dercursor *) &C_GenerateKey_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateKey_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKey_Return.phKey, phKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GenerateKeyPair_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_ATTRIBUTE_ARRAY pPublicKeyTemplate,
        CK_ULONG_PTR ulPublicKeyAttributeCount,
        CK_ATTRIBUTE_ARRAY pPrivateKeyTemplate,
        CK_ULONG_PTR ulPrivateKeyAttributeCount
) {

    C_GenerateKeyPair_Call_t C_GenerateKeyPair_Call;

    memset(&C_GenerateKeyPair_Call, 0, sizeof(C_GenerateKeyPair_Call));

    int status = der_unpack(packed,
                            C_GenerateKeyPair_Call_packer,
                            (dercursor *) &C_GenerateKeyPair_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateKeyPair_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_GenerateKeyPair_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_GenerateKeyPair_Call.pPublicKeyTemplate, pPublicKeyTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKeyPair_Call.ulPublicKeyAttributeCount, ulPublicKeyAttributeCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_GenerateKeyPair_Call.pPrivateKeyTemplate, pPrivateKeyTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKeyPair_Call.ulPrivateKeyAttributeCount, ulPrivateKeyAttributeCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GenerateKeyPair_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phPublicKey,
        CK_OBJECT_HANDLE_PTR phPrivateKey
) {

    C_GenerateKeyPair_Return_t C_GenerateKeyPair_Return;

    memset(&C_GenerateKeyPair_Return, 0, sizeof(C_GenerateKeyPair_Return));

    int status = der_unpack(packed,
                            C_GenerateKeyPair_Return_packer,
                            (dercursor *) &C_GenerateKeyPair_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateKeyPair_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKeyPair_Return.phPublicKey, phPublicKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateKeyPair_Return.phPrivateKey, phPrivateKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GenerateRandom_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR ulRandomLen
) {

    C_GenerateRandom_Call_t C_GenerateRandom_Call;

    memset(&C_GenerateRandom_Call, 0, sizeof(C_GenerateRandom_Call));

    int status = der_unpack(packed,
                            C_GenerateRandom_Call_packer,
                            (dercursor *) &C_GenerateRandom_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateRandom_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GenerateRandom_Call.ulRandomLen, ulRandomLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GenerateRandom_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSeed
) {

    C_GenerateRandom_Return_t C_GenerateRandom_Return;

    memset(&C_GenerateRandom_Return, 0, sizeof(C_GenerateRandom_Return));

    int status = der_unpack(packed,
                            C_GenerateRandom_Return_packer,
                            (dercursor *) &C_GenerateRandom_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GenerateRandom_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_GenerateRandom_Return.pSeed, pSeed);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetAttributeValue_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_GetAttributeValue_Call_t C_GetAttributeValue_Call;

    memset(&C_GetAttributeValue_Call, 0, sizeof(C_GetAttributeValue_Call));

    int status = der_unpack(packed,
                            C_GetAttributeValue_Call_packer,
                            (dercursor *) &C_GetAttributeValue_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetAttributeValue_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetAttributeValue_Call.hObject, hObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_GetAttributeValue_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetAttributeValue_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetAttributeValue_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ATTRIBUTE_ARRAY pTemplate
) {

    C_GetAttributeValue_Return_t C_GetAttributeValue_Return;

    memset(&C_GetAttributeValue_Return, 0, sizeof(C_GetAttributeValue_Return));

    int status = der_unpack(packed,
                            C_GetAttributeValue_Return_packer,
                            (dercursor *) &C_GetAttributeValue_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetAttributeValue_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_GetAttributeValue_Return.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetFunctionStatus_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_GetFunctionStatus_Call_t C_GetFunctionStatus_Call;

    memset(&C_GetFunctionStatus_Call, 0, sizeof(C_GetFunctionStatus_Call));

    int status = der_unpack(packed,
                            C_GetFunctionStatus_Call_packer,
                            (dercursor *) &C_GetFunctionStatus_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetFunctionStatus_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetFunctionStatus_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_GetFunctionStatus_Return_t C_GetFunctionStatus_Return;

    memset(&C_GetFunctionStatus_Return, 0, sizeof(C_GetFunctionStatus_Return));

    int status = der_unpack(packed,
                            C_GetFunctionStatus_Return_packer,
                            (dercursor *) &C_GetFunctionStatus_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetFunctionStatus_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetInfo_Call(
        dercursor* packed
) {

    C_GetInfo_Call_t C_GetInfo_Call;

    memset(&C_GetInfo_Call, 0, sizeof(C_GetInfo_Call));

    int status = der_unpack(packed,
                            C_GetInfo_Call_packer,
                            (dercursor *) &C_GetInfo_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING



    return CKR_OK;
};

CK_RV
unpack_C_GetInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_INFO_PTR pInfo
) {

    C_GetInfo_Return_t C_GetInfo_Return;

    memset(&C_GetInfo_Return, 0, sizeof(C_GetInfo_Return));

    int status = der_unpack(packed,
                            C_GetInfo_Return_packer,
                            (dercursor *) &C_GetInfo_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetInfo_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_INFO_PTR(&C_GetInfo_Return.pInfo, pInfo);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetMechanismInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_MECHANISM_TYPE_PTR type
) {

    C_GetMechanismInfo_Call_t C_GetMechanismInfo_Call;

    memset(&C_GetMechanismInfo_Call, 0, sizeof(C_GetMechanismInfo_Call));

    int status = der_unpack(packed,
                            C_GetMechanismInfo_Call_packer,
                            (dercursor *) &C_GetMechanismInfo_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetMechanismInfo_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetMechanismInfo_Call.type, type);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetMechanismInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_MECHANISM_INFO_PTR pInfo
) {

    C_GetMechanismInfo_Return_t C_GetMechanismInfo_Return;

    memset(&C_GetMechanismInfo_Return, 0, sizeof(C_GetMechanismInfo_Return));

    int status = der_unpack(packed,
                            C_GetMechanismInfo_Return_packer,
                            (dercursor *) &C_GetMechanismInfo_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetMechanismInfo_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_INFO_PTR(&C_GetMechanismInfo_Return.pInfo, pInfo);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetMechanismList_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_ULONG_PTR pulCount
) {

    C_GetMechanismList_Call_t C_GetMechanismList_Call;

    memset(&C_GetMechanismList_Call, 0, sizeof(C_GetMechanismList_Call));

    int status = der_unpack(packed,
                            C_GetMechanismList_Call_packer,
                            (dercursor *) &C_GetMechanismList_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetMechanismList_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetMechanismList_Call.pulCount, pulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetMechanismList_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_MECHANISM_TYPE_ARRAY pMechanismList,
        CK_ULONG_PTR pulCount
) {

    C_GetMechanismList_Return_t C_GetMechanismList_Return;

    memset(&C_GetMechanismList_Return, 0, sizeof(C_GetMechanismList_Return));

    int status = der_unpack(packed,
                            C_GetMechanismList_Return_packer,
                            (dercursor *) &C_GetMechanismList_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetMechanismList_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_TYPE_ARRAY(&C_GetMechanismList_Return.pMechanismList, pMechanismList);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetMechanismList_Return.pulCount, pulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetObjectSize_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject
) {

    C_GetObjectSize_Call_t C_GetObjectSize_Call;

    memset(&C_GetObjectSize_Call, 0, sizeof(C_GetObjectSize_Call));

    int status = der_unpack(packed,
                            C_GetObjectSize_Call_packer,
                            (dercursor *) &C_GetObjectSize_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetObjectSize_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetObjectSize_Call.hObject, hObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetObjectSize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_ULONG_PTR pulSize
) {

    C_GetObjectSize_Return_t C_GetObjectSize_Return;

    memset(&C_GetObjectSize_Return, 0, sizeof(C_GetObjectSize_Return));

    int status = der_unpack(packed,
                            C_GetObjectSize_Return_packer,
                            (dercursor *) &C_GetObjectSize_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetObjectSize_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetObjectSize_Return.pulSize, pulSize);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetOperationState_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulOperationStateLen
) {

    C_GetOperationState_Call_t C_GetOperationState_Call;

    memset(&C_GetOperationState_Call, 0, sizeof(C_GetOperationState_Call));

    int status = der_unpack(packed,
                            C_GetOperationState_Call_packer,
                            (dercursor *) &C_GetOperationState_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetOperationState_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetOperationState_Call.pulOperationStateLen, pulOperationStateLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetOperationState_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pOperationState,
        CK_ULONG_PTR pulOperationStateLen
) {

    C_GetOperationState_Return_t C_GetOperationState_Return;

    memset(&C_GetOperationState_Return, 0, sizeof(C_GetOperationState_Return));

    int status = der_unpack(packed,
                            C_GetOperationState_Return_packer,
                            (dercursor *) &C_GetOperationState_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetOperationState_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_GetOperationState_Return.pOperationState, pOperationState);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetOperationState_Return.pulOperationStateLen, pulOperationStateLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetSessionInfo_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_GetSessionInfo_Call_t C_GetSessionInfo_Call;

    memset(&C_GetSessionInfo_Call, 0, sizeof(C_GetSessionInfo_Call));

    int status = der_unpack(packed,
                            C_GetSessionInfo_Call_packer,
                            (dercursor *) &C_GetSessionInfo_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetSessionInfo_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetSessionInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SESSION_INFO_PTR pInfo
) {

    C_GetSessionInfo_Return_t C_GetSessionInfo_Return;

    memset(&C_GetSessionInfo_Return, 0, sizeof(C_GetSessionInfo_Return));

    int status = der_unpack(packed,
                            C_GetSessionInfo_Return_packer,
                            (dercursor *) &C_GetSessionInfo_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetSessionInfo_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_SESSION_INFO_PTR(&C_GetSessionInfo_Return.pInfo, pInfo);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetSlotInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
) {

    C_GetSlotInfo_Call_t C_GetSlotInfo_Call;

    memset(&C_GetSlotInfo_Call, 0, sizeof(C_GetSlotInfo_Call));

    int status = der_unpack(packed,
                            C_GetSlotInfo_Call_packer,
                            (dercursor *) &C_GetSlotInfo_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetSlotInfo_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetSlotInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_INFO_PTR pInfo
) {

    C_GetSlotInfo_Return_t C_GetSlotInfo_Return;

    memset(&C_GetSlotInfo_Return, 0, sizeof(C_GetSlotInfo_Return));

    int status = der_unpack(packed,
                            C_GetSlotInfo_Return_packer,
                            (dercursor *) &C_GetSlotInfo_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetSlotInfo_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_SLOT_INFO_PTR(&C_GetSlotInfo_Return.pInfo, pInfo);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetSlotList_Call(
        dercursor* packed,
        CK_BBOOL_PTR tokenPresent,
        CK_ULONG_PTR pulCount
) {

    C_GetSlotList_Call_t C_GetSlotList_Call;

    memset(&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));

    int status = der_unpack(packed,
                            C_GetSlotList_Call_packer,
                            (dercursor *) &C_GetSlotList_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_CK_BBOOL_PTR(&C_GetSlotList_Call.tokenPresent, tokenPresent);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetSlotList_Call.pulCount, pulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetSlotList_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_ID_ARRAY pSlotList,
        CK_ULONG_PTR pulCount
) {

    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset(&C_GetSlotList_Return, 0, sizeof(C_GetSlotList_Return));

    int status = der_unpack(packed,
                            C_GetSlotList_Return_packer,
                            (dercursor *) &C_GetSlotList_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetSlotList_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_SLOT_ID_ARRAY(&C_GetSlotList_Return.pSlotList, pSlotList);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_GetSlotList_Return.pulCount, pulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_GetTokenInfo_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID
) {

    C_GetTokenInfo_Call_t C_GetTokenInfo_Call;

    memset(&C_GetTokenInfo_Call, 0, sizeof(C_GetTokenInfo_Call));

    int status = der_unpack(packed,
                            C_GetTokenInfo_Call_packer,
                            (dercursor *) &C_GetTokenInfo_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetTokenInfo_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_GetTokenInfo_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_TOKEN_INFO_PTR pInfo
) {

    C_GetTokenInfo_Return_t C_GetTokenInfo_Return;

    memset(&C_GetTokenInfo_Return, 0, sizeof(C_GetTokenInfo_Return));

    int status = der_unpack(packed,
                            C_GetTokenInfo_Return_packer,
                            (dercursor *) &C_GetTokenInfo_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_GetTokenInfo_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_TOKEN_INFO_PTR(&C_GetTokenInfo_Return.pInfo, pInfo);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_InitPIN_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_UTF8CHAR_ARRAY pPin,
        CK_ULONG_PTR ulPinLen
) {

    C_InitPIN_Call_t C_InitPIN_Call;

    memset(&C_InitPIN_Call, 0, sizeof(C_InitPIN_Call));

    int status = der_unpack(packed,
                            C_InitPIN_Call_packer,
                            (dercursor *) &C_InitPIN_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_InitPIN_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_UTF8CHAR_ARRAY(&C_InitPIN_Call.pPin, pPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_InitPIN_Call.ulPinLen, ulPinLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_InitPIN_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_InitPIN_Return_t C_InitPIN_Return;

    memset(&C_InitPIN_Return, 0, sizeof(C_InitPIN_Return));

    int status = der_unpack(packed,
                            C_InitPIN_Return_packer,
                            (dercursor *) &C_InitPIN_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_InitPIN_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_InitToken_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        UTF8String pPin,
        CK_ULONG_PTR ulPinLen,
        UTF8String pLabel
) {

    C_InitToken_Call_t C_InitToken_Call;

    memset(&C_InitToken_Call, 0, sizeof(C_InitToken_Call));

    int status = der_unpack(packed,
                            C_InitToken_Call_packer,
                            (dercursor *) &C_InitToken_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_InitToken_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_UTF8String(&C_InitToken_Call.pPin, pPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_InitToken_Call.ulPinLen, ulPinLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_UTF8String(&C_InitToken_Call.pLabel, pLabel);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_InitToken_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_InitToken_Return_t C_InitToken_Return;

    memset(&C_InitToken_Return, 0, sizeof(C_InitToken_Return));

    int status = der_unpack(packed,
                            C_InitToken_Return_packer,
                            (dercursor *) &C_InitToken_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_InitToken_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Initialize_Call(
        dercursor* packed,
        CK_C_INITIALIZE_ARGS_PTR pInitArgs
) {

    C_Initialize_Call_t C_Initialize_Call;

    memset(&C_Initialize_Call, 0, sizeof(C_Initialize_Call));

    int status = der_unpack(packed,
                            C_Initialize_Call_packer,
                            (dercursor *) &C_Initialize_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_CK_C_INITIALIZE_ARGS_PTR(&C_Initialize_Call.pInitArgs, pInitArgs);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Initialize_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        ANY pInitArgs
) {

    C_Initialize_Return_t C_Initialize_Return;

    memset(&C_Initialize_Return, 0, sizeof(C_Initialize_Return));

    int status = der_unpack(packed,
                            C_Initialize_Return_packer,
                            (dercursor *) &C_Initialize_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Initialize_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    // todo: do we need to convert ANY?




    return CKR_OK;
};



CK_RV
unpack_C_Login_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_USER_TYPE_PTR userType,
        CK_UTF8CHAR_ARRAY pPin,
        CK_ULONG_PTR ulPinLen
) {

    C_Login_Call_t C_Login_Call;

    memset(&C_Login_Call, 0, sizeof(C_Login_Call));

    int status = der_unpack(packed,
                            C_Login_Call_packer,
                            (dercursor *) &C_Login_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Login_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Login_Call.userType, userType);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_UTF8CHAR_ARRAY(&C_Login_Call.pPin, pPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Login_Call.ulPinLen, ulPinLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Login_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_Login_Return_t C_Login_Return;

    memset(&C_Login_Return, 0, sizeof(C_Login_Return));

    int status = der_unpack(packed,
                            C_Login_Return_packer,
                            (dercursor *) &C_Login_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Login_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Logout_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession
) {

    C_Logout_Call_t C_Logout_Call;

    memset(&C_Logout_Call, 0, sizeof(C_Logout_Call));

    int status = der_unpack(packed,
                            C_Logout_Call_packer,
                            (dercursor *) &C_Logout_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Logout_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Logout_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_Logout_Return_t C_Logout_Return;

    memset(&C_Logout_Return, 0, sizeof(C_Logout_Return));

    int status = der_unpack(packed,
                            C_Logout_Return_packer,
                            (dercursor *) &C_Logout_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Logout_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_OpenSession_Call(
        dercursor* packed,
        CK_SLOT_ID_PTR slotID,
        CK_FLAGS_PTR flags,
        ANY pApplication,
        CK_NOTIFY notify
) {

    C_OpenSession_Call_t C_OpenSession_Call;

    memset(&C_OpenSession_Call, 0, sizeof(C_OpenSession_Call));

    int status = der_unpack(packed,
                            C_OpenSession_Call_packer,
                            (dercursor *) &C_OpenSession_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_OpenSession_Call.slotID, slotID);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_FLAGS_PTR(&C_OpenSession_Call.flags, flags);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    // todo: do we need to convert ANY?



    status = der_get_CK_NOTIFY(&C_OpenSession_Call.notify, notify);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_OpenSession_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SESSION_HANDLE_PTR phSession
) {

    C_OpenSession_Return_t C_OpenSession_Return;

    memset(&C_OpenSession_Return, 0, sizeof(C_OpenSession_Return));

    int status = der_unpack(packed,
                            C_OpenSession_Return_packer,
                            (dercursor *) &C_OpenSession_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_OpenSession_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_OpenSession_Return.phSession, phSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SeedRandom_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSeed,
        CK_ULONG_PTR ulSeedLen
) {

    C_SeedRandom_Call_t C_SeedRandom_Call;

    memset(&C_SeedRandom_Call, 0, sizeof(C_SeedRandom_Call));

    int status = der_unpack(packed,
                            C_SeedRandom_Call_packer,
                            (dercursor *) &C_SeedRandom_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SeedRandom_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SeedRandom_Call.pSeed, pSeed);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SeedRandom_Call.ulSeedLen, ulSeedLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SeedRandom_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SeedRandom_Return_t C_SeedRandom_Return;

    memset(&C_SeedRandom_Return, 0, sizeof(C_SeedRandom_Return));

    int status = der_unpack(packed,
                            C_SeedRandom_Return_packer,
                            (dercursor *) &C_SeedRandom_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SeedRandom_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SetAttributeValue_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_OBJECT_HANDLE_PTR hObject,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulCount
) {

    C_SetAttributeValue_Call_t C_SetAttributeValue_Call;

    memset(&C_SetAttributeValue_Call, 0, sizeof(C_SetAttributeValue_Call));

    int status = der_unpack(packed,
                            C_SetAttributeValue_Call_packer,
                            (dercursor *) &C_SetAttributeValue_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetAttributeValue_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetAttributeValue_Call.hObject, hObject);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_SetAttributeValue_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetAttributeValue_Call.ulCount, ulCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SetAttributeValue_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SetAttributeValue_Return_t C_SetAttributeValue_Return;

    memset(&C_SetAttributeValue_Return, 0, sizeof(C_SetAttributeValue_Return));

    int status = der_unpack(packed,
                            C_SetAttributeValue_Return_packer,
                            (dercursor *) &C_SetAttributeValue_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetAttributeValue_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SetOperationState_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pOperationState,
        CK_ULONG_PTR ulOperationStateLen,
        CK_OBJECT_HANDLE_PTR hEncryptionKey,
        CK_OBJECT_HANDLE_PTR hAuthenticationKey
) {

    C_SetOperationState_Call_t C_SetOperationState_Call;

    memset(&C_SetOperationState_Call, 0, sizeof(C_SetOperationState_Call));

    int status = der_unpack(packed,
                            C_SetOperationState_Call_packer,
                            (dercursor *) &C_SetOperationState_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetOperationState_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SetOperationState_Call.pOperationState, pOperationState);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetOperationState_Call.ulOperationStateLen, ulOperationStateLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetOperationState_Call.hEncryptionKey, hEncryptionKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetOperationState_Call.hAuthenticationKey, hAuthenticationKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SetOperationState_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SetOperationState_Return_t C_SetOperationState_Return;

    memset(&C_SetOperationState_Return, 0, sizeof(C_SetOperationState_Return));

    int status = der_unpack(packed,
                            C_SetOperationState_Return_packer,
                            (dercursor *) &C_SetOperationState_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetOperationState_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SetPIN_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_UTF8CHAR_ARRAY pOldPin,
        CK_ULONG_PTR ulOldLen,
        CK_UTF8CHAR_ARRAY pNewPin,
        CK_ULONG_PTR ulNewPin
) {

    C_SetPIN_Call_t C_SetPIN_Call;

    memset(&C_SetPIN_Call, 0, sizeof(C_SetPIN_Call));

    int status = der_unpack(packed,
                            C_SetPIN_Call_packer,
                            (dercursor *) &C_SetPIN_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetPIN_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_UTF8CHAR_ARRAY(&C_SetPIN_Call.pOldPin, pOldPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetPIN_Call.ulOldLen, ulOldLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_UTF8CHAR_ARRAY(&C_SetPIN_Call.pNewPin, pNewPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SetPIN_Call.ulNewPin, ulNewPin);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SetPIN_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SetPIN_Return_t C_SetPIN_Return;

    memset(&C_SetPIN_Return, 0, sizeof(C_SetPIN_Return));

    int status = der_unpack(packed,
                            C_SetPIN_Return_packer,
                            (dercursor *) &C_SetPIN_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SetPIN_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Sign_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulSignatureLen
) {

    C_Sign_Call_t C_Sign_Call;

    memset(&C_Sign_Call, 0, sizeof(C_Sign_Call));

    int status = der_unpack(packed,
                            C_Sign_Call_packer,
                            (dercursor *) &C_Sign_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Sign_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Sign_Call.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Sign_Call.ulDataLen, ulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Sign_Call.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Sign_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
) {

    C_Sign_Return_t C_Sign_Return;

    memset(&C_Sign_Return, 0, sizeof(C_Sign_Return));

    int status = der_unpack(packed,
                            C_Sign_Return_packer,
                            (dercursor *) &C_Sign_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Sign_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Sign_Return.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Sign_Return.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignEncryptUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_SignEncryptUpdate_Call_t C_SignEncryptUpdate_Call;

    memset(&C_SignEncryptUpdate_Call, 0, sizeof(C_SignEncryptUpdate_Call));

    int status = der_unpack(packed,
                            C_SignEncryptUpdate_Call_packer,
                            (dercursor *) &C_SignEncryptUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignEncryptUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignEncryptUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignEncryptUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignEncryptUpdate_Call.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignEncryptUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pEncryptedPart,
        CK_ULONG_PTR pulEncryptedPartLen
) {

    C_SignEncryptUpdate_Return_t C_SignEncryptUpdate_Return;

    memset(&C_SignEncryptUpdate_Return, 0, sizeof(C_SignEncryptUpdate_Return));

    int status = der_unpack(packed,
                            C_SignEncryptUpdate_Return_packer,
                            (dercursor *) &C_SignEncryptUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignEncryptUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignEncryptUpdate_Return.pEncryptedPart, pEncryptedPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignEncryptUpdate_Return.pulEncryptedPartLen, pulEncryptedPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_ULONG_PTR pulSignatureLen
) {

    C_SignFinal_Call_t C_SignFinal_Call;

    memset(&C_SignFinal_Call, 0, sizeof(C_SignFinal_Call));

    int status = der_unpack(packed,
                            C_SignFinal_Call_packer,
                            (dercursor *) &C_SignFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignFinal_Call.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
) {

    C_SignFinal_Return_t C_SignFinal_Return;

    memset(&C_SignFinal_Return, 0, sizeof(C_SignFinal_Return));

    int status = der_unpack(packed,
                            C_SignFinal_Return_packer,
                            (dercursor *) &C_SignFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignFinal_Return.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignFinal_Return.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_SignInit_Call_t C_SignInit_Call;

    memset(&C_SignInit_Call, 0, sizeof(C_SignInit_Call));

    int status = der_unpack(packed,
                            C_SignInit_Call_packer,
                            (dercursor *) &C_SignInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_SignInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignInit_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SignInit_Return_t C_SignInit_Return;

    memset(&C_SignInit_Return, 0, sizeof(C_SignInit_Return));

    int status = der_unpack(packed,
                            C_SignInit_Return_packer,
                            (dercursor *) &C_SignInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignRecover_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_ULONG_PTR pulSignatureLen
) {

    C_SignRecover_Call_t C_SignRecover_Call;

    memset(&C_SignRecover_Call, 0, sizeof(C_SignRecover_Call));

    int status = der_unpack(packed,
                            C_SignRecover_Call_packer,
                            (dercursor *) &C_SignRecover_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignRecover_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignRecover_Call.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignRecover_Call.ulDataLen, ulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignRecover_Call.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignRecover_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR pulSignatureLen
) {

    C_SignRecover_Return_t C_SignRecover_Return;

    memset(&C_SignRecover_Return, 0, sizeof(C_SignRecover_Return));

    int status = der_unpack(packed,
                            C_SignRecover_Return_packer,
                            (dercursor *) &C_SignRecover_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignRecover_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignRecover_Return.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignRecover_Return.pulSignatureLen, pulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignRecoverInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_SignRecoverInit_Call_t C_SignRecoverInit_Call;

    memset(&C_SignRecoverInit_Call, 0, sizeof(C_SignRecoverInit_Call));

    int status = der_unpack(packed,
                            C_SignRecoverInit_Call_packer,
                            (dercursor *) &C_SignRecoverInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignRecoverInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_SignRecoverInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignRecoverInit_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignRecoverInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SignRecoverInit_Return_t C_SignRecoverInit_Return;

    memset(&C_SignRecoverInit_Return, 0, sizeof(C_SignRecoverInit_Return));

    int status = der_unpack(packed,
                            C_SignRecoverInit_Return_packer,
                            (dercursor *) &C_SignRecoverInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignRecoverInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_SignUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
) {

    C_SignUpdate_Call_t C_SignUpdate_Call;

    memset(&C_SignUpdate_Call, 0, sizeof(C_SignUpdate_Call));

    int status = der_unpack(packed,
                            C_SignUpdate_Call_packer,
                            (dercursor *) &C_SignUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_SignUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_SignUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_SignUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_SignUpdate_Return_t C_SignUpdate_Return;

    memset(&C_SignUpdate_Return, 0, sizeof(C_SignUpdate_Return));

    int status = der_unpack(packed,
                            C_SignUpdate_Return_packer,
                            (dercursor *) &C_SignUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_SignUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_UnwrapKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hUnwrappingKey,
        CK_BYTE_ARRAY pWrappedKey,
        CK_ULONG_PTR ulWrappedKeyLen,
        CK_ATTRIBUTE_ARRAY pTemplate,
        CK_ULONG_PTR ulAttributeCount
) {

    C_UnwrapKey_Call_t C_UnwrapKey_Call;

    memset(&C_UnwrapKey_Call, 0, sizeof(C_UnwrapKey_Call));

    int status = der_unpack(packed,
                            C_UnwrapKey_Call_packer,
                            (dercursor *) &C_UnwrapKey_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_UnwrapKey_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_UnwrapKey_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_UnwrapKey_Call.hUnwrappingKey, hUnwrappingKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_UnwrapKey_Call.pWrappedKey, pWrappedKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_UnwrapKey_Call.ulWrappedKeyLen, ulWrappedKeyLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_ATTRIBUTE_ARRAY(&C_UnwrapKey_Call.pTemplate, pTemplate);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_UnwrapKey_Call.ulAttributeCount, ulAttributeCount);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_UnwrapKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_OBJECT_HANDLE_PTR phKey
) {

    C_UnwrapKey_Return_t C_UnwrapKey_Return;

    memset(&C_UnwrapKey_Return, 0, sizeof(C_UnwrapKey_Return));

    int status = der_unpack(packed,
                            C_UnwrapKey_Return_packer,
                            (dercursor *) &C_UnwrapKey_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_UnwrapKey_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_UnwrapKey_Return.phKey, phKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_Verify_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR ulDataLen,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen
) {

    C_Verify_Call_t C_Verify_Call;

    memset(&C_Verify_Call, 0, sizeof(C_Verify_Call));

    int status = der_unpack(packed,
                            C_Verify_Call_packer,
                            (dercursor *) &C_Verify_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Verify_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Verify_Call.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Verify_Call.ulDataLen, ulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_Verify_Call.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_Verify_Call.ulSignatureLen, ulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_Verify_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_Verify_Return_t C_Verify_Return;

    memset(&C_Verify_Return, 0, sizeof(C_Verify_Return));

    int status = der_unpack(packed,
                            C_Verify_Return_packer,
                            (dercursor *) &C_Verify_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_Verify_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_VerifyFinal_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen
) {

    C_VerifyFinal_Call_t C_VerifyFinal_Call;

    memset(&C_VerifyFinal_Call, 0, sizeof(C_VerifyFinal_Call));

    int status = der_unpack(packed,
                            C_VerifyFinal_Call_packer,
                            (dercursor *) &C_VerifyFinal_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyFinal_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_VerifyFinal_Call.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyFinal_Call.ulSignatureLen, ulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_VerifyFinal_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_VerifyFinal_Return_t C_VerifyFinal_Return;

    memset(&C_VerifyFinal_Return, 0, sizeof(C_VerifyFinal_Return));

    int status = der_unpack(packed,
                            C_VerifyFinal_Return_packer,
                            (dercursor *) &C_VerifyFinal_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyFinal_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_VerifyInit_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hKey
) {

    C_VerifyInit_Call_t C_VerifyInit_Call;

    memset(&C_VerifyInit_Call, 0, sizeof(C_VerifyInit_Call));

    int status = der_unpack(packed,
                            C_VerifyInit_Call_packer,
                            (dercursor *) &C_VerifyInit_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyInit_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_VerifyInit_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyInit_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_VerifyInit_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_VerifyInit_Return_t C_VerifyInit_Return;

    memset(&C_VerifyInit_Return, 0, sizeof(C_VerifyInit_Return));

    int status = der_unpack(packed,
                            C_VerifyInit_Return_packer,
                            (dercursor *) &C_VerifyInit_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyInit_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_VerifyRecover_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pSignature,
        CK_ULONG_PTR ulSignatureLen,
        CK_ULONG_PTR pulDataLen
) {

    C_VerifyRecover_Call_t C_VerifyRecover_Call;

    memset(&C_VerifyRecover_Call, 0, sizeof(C_VerifyRecover_Call));

    int status = der_unpack(packed,
                            C_VerifyRecover_Call_packer,
                            (dercursor *) &C_VerifyRecover_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyRecover_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_VerifyRecover_Call.pSignature, pSignature);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyRecover_Call.ulSignatureLen, ulSignatureLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyRecover_Call.pulDataLen, pulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_VerifyRecover_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pData,
        CK_ULONG_PTR pulDataLen
) {

    C_VerifyRecover_Return_t C_VerifyRecover_Return;

    memset(&C_VerifyRecover_Return, 0, sizeof(C_VerifyRecover_Return));

    int status = der_unpack(packed,
                            C_VerifyRecover_Return_packer,
                            (dercursor *) &C_VerifyRecover_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyRecover_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_VerifyRecover_Return.pData, pData);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyRecover_Return.pulDataLen, pulDataLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_VerifyUpdate_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_BYTE_ARRAY pPart,
        CK_ULONG_PTR ulPartLen
) {

    C_VerifyUpdate_Call_t C_VerifyUpdate_Call;

    memset(&C_VerifyUpdate_Call, 0, sizeof(C_VerifyUpdate_Call));

    int status = der_unpack(packed,
                            C_VerifyUpdate_Call_packer,
                            (dercursor *) &C_VerifyUpdate_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyUpdate_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_VerifyUpdate_Call.pPart, pPart);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_VerifyUpdate_Call.ulPartLen, ulPartLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_VerifyUpdate_Return(
        dercursor* packed,
        CK_RV_PTR retval
) {

    C_VerifyUpdate_Return_t C_VerifyUpdate_Return;

    memset(&C_VerifyUpdate_Return, 0, sizeof(C_VerifyUpdate_Return));

    int status = der_unpack(packed,
                            C_VerifyUpdate_Return_packer,
                            (dercursor *) &C_VerifyUpdate_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_VerifyUpdate_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_WaitForSlotEvent_Call(
        dercursor* packed,
        CK_FLAGS_PTR flags,
        CK_VOID_PTR pReserved
) {

    C_WaitForSlotEvent_Call_t C_WaitForSlotEvent_Call;

    memset(&C_WaitForSlotEvent_Call, 0, sizeof(C_WaitForSlotEvent_Call));

    int status = der_unpack(packed,
                            C_WaitForSlotEvent_Call_packer,
                            (dercursor *) &C_WaitForSlotEvent_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_CK_FLAGS_PTR(&C_WaitForSlotEvent_Call.flags, flags);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_VOID_PTR(&C_WaitForSlotEvent_Call.pReserved, pReserved);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_WaitForSlotEvent_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_SLOT_ID_PTR pSlot,
        CK_VOID_PTR pReserved
) {

    C_WaitForSlotEvent_Return_t C_WaitForSlotEvent_Return;

    memset(&C_WaitForSlotEvent_Return, 0, sizeof(C_WaitForSlotEvent_Return));

    int status = der_unpack(packed,
                            C_WaitForSlotEvent_Return_packer,
                            (dercursor *) &C_WaitForSlotEvent_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_WaitForSlotEvent_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_WaitForSlotEvent_Return.pSlot, pSlot);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_VOID_PTR(&C_WaitForSlotEvent_Return.pReserved, pReserved);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};



CK_RV
unpack_C_WrapKey_Call(
        dercursor* packed,
        CK_SESSION_HANDLE_PTR hSession,
        CK_MECHANISM_PTR pMechanism,
        CK_OBJECT_HANDLE_PTR hWrappingKey,
        CK_OBJECT_HANDLE_PTR hKey,
        CK_ULONG_PTR pulWrappedKeyLen
) {

    C_WrapKey_Call_t C_WrapKey_Call;

    memset(&C_WrapKey_Call, 0, sizeof(C_WrapKey_Call));

    int status = der_unpack(packed,
                            C_WrapKey_Call_packer,
                            (dercursor *) &C_WrapKey_Call,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_WrapKey_Call.hSession, hSession);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_MECHANISM_PTR(&C_WrapKey_Call.pMechanism, pMechanism);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_WrapKey_Call.hWrappingKey, hWrappingKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_WrapKey_Call.hKey, hKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_WrapKey_Call.pulWrappedKeyLen, pulWrappedKeyLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

CK_RV
unpack_C_WrapKey_Return(
        dercursor* packed,
        CK_RV_PTR retval,
        CK_BYTE_ARRAY pWrappedKey,
        CK_ULONG_PTR pulWrappedKeyLen
) {

    C_WrapKey_Return_t C_WrapKey_Return;

    memset(&C_WrapKey_Return, 0, sizeof(C_WrapKey_Return));

    int status = der_unpack(packed,
                            C_WrapKey_Return_packer,
                            (dercursor *) &C_WrapKey_Return,
                            REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    // STARTING UNPACKING


    status = der_get_ulong(C_WrapKey_Return.retval, retval);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_CK_BYTE_ARRAY(&C_WrapKey_Return.pWrappedKey, pWrappedKey);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;



    status = der_get_ulong(C_WrapKey_Return.pulWrappedKeyLen, pulWrappedKeyLen);
    if (status == -1)
        return CKR_KEEHIVE_DER_RANGE_ERROR;




    return CKR_OK;
};

