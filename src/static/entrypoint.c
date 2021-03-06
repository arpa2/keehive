#include "cryptoki.h"
#include "stddef.h"

// PKCS #11 function list
static CK_FUNCTION_LIST functionList =
        {
                // Version information
                { CRYPTOKI_VERSION_MAJOR, CRYPTOKI_VERSION_MINOR },
                // Function pointers
                C_Initialize,
                C_Finalize,
                C_GetInfo,
                C_GetFunctionList,
                C_GetSlotList,
                C_GetSlotInfo,
                C_GetTokenInfo,
                C_GetMechanismList,
                C_GetMechanismInfo,
                C_InitToken,
                C_InitPIN,
                C_SetPIN,
                C_OpenSession,
                C_CloseSession,
                C_CloseAllSessions,
                C_GetSessionInfo,
                C_GetOperationState,
                C_SetOperationState,
                C_Login,
                C_Logout,
                C_CreateObject,
                C_CopyObject,
                C_DestroyObject,
                C_GetObjectSize,
                C_GetAttributeValue,
                C_SetAttributeValue,
                C_FindObjectsInit,
                C_FindObjects,
                C_FindObjectsFinal,
                C_EncryptInit,
                C_Encrypt,
                C_EncryptUpdate,
                C_EncryptFinal,
                C_DecryptInit,
                C_Decrypt,
                C_DecryptUpdate,
                C_DecryptFinal,
                C_DigestInit,
                C_Digest,
                C_DigestUpdate,
                C_DigestKey,
                C_DigestFinal,
                C_SignInit,
                C_Sign,
                C_SignUpdate,
                C_SignFinal,
                C_SignRecoverInit,
                C_SignRecover,
                C_VerifyInit,
                C_Verify,
                C_VerifyUpdate,
                C_VerifyFinal,
                C_VerifyRecoverInit,
                C_VerifyRecover,
                C_DigestEncryptUpdate,
                C_DecryptDigestUpdate,
                C_SignEncryptUpdate,
                C_DecryptVerifyUpdate,
                C_GenerateKey,
                C_GenerateKeyPair,
                C_WrapKey,
                C_UnwrapKey,
                C_DeriveKey,
                C_SeedRandom,
                C_GenerateRandom,
                C_GetFunctionStatus,
                C_CancelFunction,
                C_WaitForSlotEvent
        };


CK_RV
C_GetFunctionList(
    CK_FUNCTION_LIST_PTR_PTR ppFunctionList
) {
    if (ppFunctionList == NULL) return CKR_ARGUMENTS_BAD;

    *ppFunctionList = &functionList;

    return CKR_OK;

}
