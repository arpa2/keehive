//
// Created by Gijs Molenaar on 19/02/2018.
//

#ifndef KEEHIVE_PACKER_H
#define KEEHIVE_PACKER_H

#include "pack.h"
#include "returncodes.h"
#include "util.h"
#include "derput.h"

// always use repeat = 1 for der_unpack, unless you need to iterate over a SEQUENCE OF. In this case set it to
// the length of the SEQUENCE
#define REPEAT 1



extern const derwalk C_CancelFunction_Call_packer[];


extern const derwalk C_CloseAllSessions_Call_packer[];


extern const derwalk C_CloseSession_Call_packer[];


extern const derwalk C_CopyObject_Call_packer[];


extern const derwalk C_CreateObject_Call_packer[];


extern const derwalk C_Decrypt_Call_packer[];


extern const derwalk C_DecryptDigestUpdate_Call_packer[];


extern const derwalk C_DecryptFinal_Call_packer[];


extern const derwalk C_DecryptInit_Call_packer[];


extern const derwalk C_DecryptUpdate_Call_packer[];


extern const derwalk C_DecryptVerifyUpdate_Call_packer[];


extern const derwalk C_DeriveKey_Call_packer[];


extern const derwalk C_DestroyObject_Call_packer[];


extern const derwalk C_Digest_Call_packer[];


extern const derwalk C_DigestEncryptUpdate_Call_packer[];


extern const derwalk C_DigestFinal_Call_packer[];


extern const derwalk C_DigestInit_Call_packer[];


extern const derwalk C_DigestKey_Call_packer[];


extern const derwalk C_DigestUpdate_Call_packer[];


extern const derwalk C_Encrypt_Call_packer[];


extern const derwalk C_EncryptFinal_Call_packer[];


extern const derwalk C_EncryptInit_Call_packer[];


extern const derwalk C_EncryptUpdate_Call_packer[];


extern const derwalk C_Finalize_Call_packer[];


extern const derwalk C_FindObjects_Call_packer[];


extern const derwalk C_FindObjectsFinal_Call_packer[];


extern const derwalk C_FindObjectsInit_Call_packer[];


extern const derwalk C_GenerateKey_Call_packer[];


extern const derwalk C_GenerateKeyPair_Call_packer[];


extern const derwalk C_GenerateRandom_Call_packer[];


extern const derwalk C_GetAttributeValue_Call_packer[];


extern const derwalk C_GetFunctionStatus_Call_packer[];


extern const derwalk C_GetInfo_Call_packer[];


extern const derwalk C_GetMechanismInfo_Call_packer[];


extern const derwalk C_GetMechanismList_Call_packer[];


extern const derwalk C_GetObjectSize_Call_packer[];


extern const derwalk C_GetOperationState_Call_packer[];


extern const derwalk C_GetSessionInfo_Call_packer[];


extern const derwalk C_GetSlotInfo_Call_packer[];


extern const derwalk C_GetSlotList_Call_packer[];


extern const derwalk C_GetTokenInfo_Call_packer[];


extern const derwalk C_InitPIN_Call_packer[];


extern const derwalk C_InitToken_Call_packer[];


extern const derwalk C_Initialize_Call_packer[];


extern const derwalk C_Login_Call_packer[];


extern const derwalk C_Logout_Call_packer[];


extern const derwalk C_OpenSession_Call_packer[];


extern const derwalk C_SeedRandom_Call_packer[];


extern const derwalk C_SetAttributeValue_Call_packer[];


extern const derwalk C_SetOperationState_Call_packer[];


extern const derwalk C_SetPIN_Call_packer[];


extern const derwalk C_Sign_Call_packer[];


extern const derwalk C_SignEncryptUpdate_Call_packer[];


extern const derwalk C_SignFinal_Call_packer[];


extern const derwalk C_SignInit_Call_packer[];


extern const derwalk C_SignRecover_Call_packer[];


extern const derwalk C_SignRecoverInit_Call_packer[];


extern const derwalk C_SignUpdate_Call_packer[];


extern const derwalk C_UnwrapKey_Call_packer[];


extern const derwalk C_Verify_Call_packer[];


extern const derwalk C_VerifyFinal_Call_packer[];


extern const derwalk C_VerifyInit_Call_packer[];


extern const derwalk C_VerifyRecover_Call_packer[];


extern const derwalk C_VerifyUpdate_Call_packer[];


extern const derwalk C_WaitForSlotEvent_Call_packer[];


extern const derwalk C_WrapKey_Call_packer[];


extern const derwalk C_CancelFunction_Return_packer[];


extern const derwalk C_CloseAllSessions_Return_packer[];


extern const derwalk C_CloseSession_Return_packer[];


extern const derwalk C_CopyObject_Return_packer[];


extern const derwalk C_CreateObject_Return_packer[];


extern const derwalk C_Decrypt_Return_packer[];


extern const derwalk C_DecryptDigestUpdate_Return_packer[];


extern const derwalk C_DecryptFinal_Return_packer[];


extern const derwalk C_DecryptInit_Return_packer[];


extern const derwalk C_DecryptUpdate_Return_packer[];


extern const derwalk C_DecryptVerifyUpdate_Return_packer[];


extern const derwalk C_DeriveKey_Return_packer[];


extern const derwalk C_DestroyObject_Return_packer[];


extern const derwalk C_Digest_Return_packer[];


extern const derwalk C_DigestEncryptUpdate_Return_packer[];


extern const derwalk C_DigestFinal_Return_packer[];


extern const derwalk C_DigestInit_Return_packer[];


extern const derwalk C_DigestKey_Return_packer[];


extern const derwalk C_DigestUpdate_Return_packer[];


extern const derwalk C_Encrypt_Return_packer[];


extern const derwalk C_EncryptFinal_Return_packer[];


extern const derwalk C_EncryptInit_Return_packer[];


extern const derwalk C_EncryptUpdate_Return_packer[];


extern const derwalk C_Finalize_Return_packer[];


extern const derwalk C_FindObjects_Return_packer[];


extern const derwalk C_FindObjectsFinal_Return_packer[];


extern const derwalk C_FindObjectsInit_Return_packer[];


extern const derwalk C_GenerateKey_Return_packer[];


extern const derwalk C_GenerateKeyPair_Return_packer[];


extern const derwalk C_GenerateRandom_Return_packer[];


extern const derwalk C_GetAttributeValue_Return_packer[];


extern const derwalk C_GetFunctionStatus_Return_packer[];


extern const derwalk C_GetInfo_Return_packer[];


extern const derwalk C_GetMechanismInfo_Return_packer[];


extern const derwalk C_GetMechanismList_Return_packer[];


extern const derwalk C_GetObjectSize_Return_packer[];


extern const derwalk C_GetOperationState_Return_packer[];


extern const derwalk C_GetSessionInfo_Return_packer[];


extern const derwalk C_GetSlotInfo_Return_packer[];


extern const derwalk C_GetSlotList_Return_packer[];


extern const derwalk C_GetTokenInfo_Return_packer[];


extern const derwalk C_InitPIN_Return_packer[];


extern const derwalk C_InitToken_Return_packer[];


extern const derwalk C_Initialize_Return_packer[];


extern const derwalk C_Login_Return_packer[];


extern const derwalk C_Logout_Return_packer[];


extern const derwalk C_OpenSession_Return_packer[];


extern const derwalk C_SeedRandom_Return_packer[];


extern const derwalk C_SetAttributeValue_Return_packer[];


extern const derwalk C_SetOperationState_Return_packer[];


extern const derwalk C_SetPIN_Return_packer[];


extern const derwalk C_Sign_Return_packer[];


extern const derwalk C_SignEncryptUpdate_Return_packer[];


extern const derwalk C_SignFinal_Return_packer[];


extern const derwalk C_SignInit_Return_packer[];


extern const derwalk C_SignRecover_Return_packer[];


extern const derwalk C_SignRecoverInit_Return_packer[];


extern const derwalk C_SignUpdate_Return_packer[];


extern const derwalk C_UnwrapKey_Return_packer[];


extern const derwalk C_Verify_Return_packer[];


extern const derwalk C_VerifyFinal_Return_packer[];


extern const derwalk C_VerifyInit_Return_packer[];


extern const derwalk C_VerifyRecover_Return_packer[];


extern const derwalk C_VerifyUpdate_Return_packer[];


extern const derwalk C_WaitForSlotEvent_Return_packer[];


extern const derwalk C_WrapKey_Return_packer[];



extern const derwalk pSlotList_packer[];

extern const derwalk mechanism_type_array_packer[];

extern const derwalk ObjectHandlerPacker_packer[];

extern const derwalk AttributeArray_packer[];

extern const derwalk ByteArray_packer[];

extern const derwalk attribute_array_packer[];

#endif //KEEHIVE_PACKER_H