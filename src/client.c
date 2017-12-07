#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"

#define MAX_BUFFER 1000

CK_RV
Remote_C_GetInfo(
        CK_INFO_PTR pInfo
) {
    size_t len = 0;
    pack_C_GetInfo_Call(pInfo, NULL_PTR, &len);
    uint8_t *pPacked = malloc(len);
    pack_C_GetInfo_Call(pInfo, pPacked, &len);

    dercursor dercursorIn;
    dercursor dercursorOut;

    dercursorIn.derptr = pPacked;
    dercursorIn.derlen = len;

    server_C_GetInfo(&dercursorIn, &dercursorOut);
    unpack_C_GetInfo_Return(&dercursorOut, pInfo);

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

    size_t len = 0;
    pack_C_GetSlotList_Call(tokenPresent, pSlotList, pPulCount, NULL_PTR, &len);
    uint8_t *pPacked = malloc(len);
    pack_C_GetSlotList_Call(tokenPresent, pSlotList, pPulCount, pPacked, &len);

    dercursor dercursorIn;
    dercursor dercursorOut;

    dercursorIn.derptr = pPacked;
    dercursorIn.derlen = len;


    server_C_GetSlotList(&dercursorIn, &dercursorOut);

    unpack_C_GetSlotList_Return(&dercursorOut, pSlotList, pPulCount);

    free(pPacked);
    //free(dercursorOut.derptr);

    return CKR_OK;
};
