

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

CK_RV server_Begin();
CK_RV server_End();



CK_RV
server_C_CancelFunction(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_CloseAllSessions(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_CloseSession(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_CopyObject(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_CreateObject(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Decrypt(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DecryptDigestUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DecryptFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DecryptInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DecryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DecryptVerifyUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DeriveKey(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DestroyObject(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Digest(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DigestEncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DigestFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DigestInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DigestKey(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_DigestUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Encrypt(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_EncryptFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_EncryptInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_EncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Finalize(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_FindObjects(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_FindObjectsFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_FindObjectsInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GenerateKey(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GenerateKeyPair(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GenerateRandom(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetAttributeValue(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetFunctionStatus(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetMechanismInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetMechanismList(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetObjectSize(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetOperationState(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetSessionInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetSlotInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_GetTokenInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_InitPIN(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_InitToken(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Initialize(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Login(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Logout(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_OpenSession(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SeedRandom(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SetAttributeValue(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SetOperationState(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SetPIN(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Sign(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignEncryptUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignRecover(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignRecoverInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_SignUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_UnwrapKey(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_Verify(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_VerifyFinal(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_VerifyInit(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_VerifyRecover(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_VerifyUpdate(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_WaitForSlotEvent(
        dercursor *cursorIn,
        dercursor *CursorOut
);

CK_RV
server_C_WrapKey(
        dercursor *cursorIn,
        dercursor *CursorOut
);




#endif //KEEHIVE_SERVER_H