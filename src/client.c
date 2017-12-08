#include "client.h"
#include "server.h"
#include "pack.h"
#include "unpack.h"

CK_RV
Remote_C_GetInfo(
        CK_INFO_PTR pInfo
) {
    CK_RV status;
    size_t len;

    dercursor dercursorIn;
    dercursor dercursorOut;

    status = server_Begin();
    if (status != CKR_OK)
        return status;


    status = pack_C_GetInfo_Call(pInfo, &dercursorIn);
    if (status != CKR_OK)
        return status;

    status = server_C_GetInfo(&dercursorIn, &dercursorOut);
    if (status != CKR_OK)
        return status;

    status = unpack_C_GetInfo_Return(&dercursorOut, pInfo);
    if (status != CKR_OK)
        return status;

    free(dercursorIn.derptr);
    free(dercursorOut.derptr);

    status = server_End();
    if (status != CKR_OK)
        return status;

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

    dercursor dercursorIn;
    dercursor dercursorOut;

    pack_C_GetSlotList_Call(tokenPresent, pSlotList, pPulCount, &dercursorIn);

    status = server_Begin();
    if (status != CKR_OK)
        return status;

    status = server_C_GetSlotList(&dercursorIn, &dercursorOut);
    if (status != CKR_OK)
        return status;

    status = unpack_C_GetSlotList_Return(&dercursorOut, pSlotList, pPulCount);
    if (status != CKR_OK)
        return status;

    free(dercursorIn.derptr);
    free(dercursorOut.derptr);

    status = server_End();
    if (status != CKR_OK)
        return status;

    return CKR_OK;
};
