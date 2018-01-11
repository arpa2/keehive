
#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "wrap.h"
#include "util.h"


const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


CK_FUNCTION_LIST_PTR function_list = NULL_PTR;


CK_RV
server_Begin(){
    CK_RV status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    status = call_C_Initialize(&function_list);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}


CK_RV
server_End(){
    CK_RV status = call_C_Finalize(&function_list);

    if (status != CKR_OK)
        return status;

    function_list = NULL_PTR;
    return CKR_OK;
}


CK_RV
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    CK_INFO info;
    CK_RV status;

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    /* this is a bit of a weird call, since it has no arguments to unpack */
    status = unpack_C_GetInfo_Call(cursorIn);
    if (status != CKR_OK)
        return status;

    status = call_C_GetInfo(&function_list, &info);
    if (status != CKR_OK)
        return status;

    status = pack_C_GetInfo_Return(&info, CursorOut);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}

CK_RV
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
){
    CK_RV status;
    CK_BBOOL tokenPresent = FALSE;

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    status = unpack_C_GetSlotList_Call(cursorIn, &tokenPresent);
    if (status != CKR_OK)
        return status;

    CK_SLOT_ID_PTR pSlotList;
    CK_ULONG count;
    status = call_C_GetSlotList(tokenPresent, &function_list, &pSlotList, &count);
    if (status != CKR_OK)
        return status;

    status = pack_C_GetSlotList_Return(&pSlotList, &count, CursorOut);
    if (status != CKR_OK)
        return status;

    free(pSlotList);

    return CKR_OK;
}



CK_RV
server_C_GetSlotInfo(
        dercursor *pCursorIn,
        dercursor *pCursorOut
){
    CK_RV status;
    CK_SLOT_ID slotId;

    if (function_list == NULL_PTR)
        return CKR_KEEHIVE_SO_INIT_ERROR;

    status = unpack_C_GetSlotInfo_Call(pCursorIn, &slotId);
    if (status != CKR_OK)
        return status;

    CK_SLOT_INFO slotInfo;

    status = call_C_GetSlotInfo(&function_list, slotId, &slotInfo);
    if (status != CKR_OK)
        return status;

    status = pack_C_GetSlotInfo_Return(&slotInfo, pCursorOut);
    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
