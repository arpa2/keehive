#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"

CK_RV
Remote_C_GetInfo(
        CK_INFO_PTR pInfo
) {
    CK_RV status;
    size_t len = 0;
    pack_C_GetInfo_Call(pInfo, NULL_PTR, &len);
    uint8_t *pPacked = malloc(len);
    pack_C_GetInfo_Call(pInfo, pPacked, &len);

    dercursor dercursorIn;
    dercursor dercursorOut;

    dercursorIn.derptr = pPacked;
    dercursorIn.derlen = len;

    status = server_C_GetInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK)
        return status;

    status = unpack_C_GetInfo_Return(&dercursorOut, pInfo);
    if (status != CKR_OK)
        return status;

    free(pPacked);
    free(dercursorOut.derptr);

    return CKR_OK;
}


CK_RV
Remote_C_GetSlotList(
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_PTR pSlotList,
    CK_ULONG_PTR pPulCount
) {

    CK_RV status;
    size_t len = 0;

    pack_C_GetSlotList_Call(tokenPresent, pSlotList, pPulCount, NULL_PTR, &len);
    uint8_t *pPacked = malloc(len);
    pack_C_GetSlotList_Call(tokenPresent, pSlotList, pPulCount, pPacked, &len);

    dercursor dercursorIn;
    dercursor dercursorOut;

    dercursorIn.derptr = pPacked;
    dercursorIn.derlen = len;


    status = server_C_GetSlotList(&dercursorIn, &dercursorOut);
    if (status != CKR_OK)
        return status;


    unpack_C_GetSlotList_Return(&dercursorOut, pSlotList, pPulCount);

    free(pPacked);
    //free(dercursorOut.derptr);

    return CKR_OK;
};
