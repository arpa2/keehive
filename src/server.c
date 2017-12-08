
#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "wrap.h"


const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


CK_RV
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    CK_INFO info;
    CK_RV status;

    /* this is a bit of a weird call, since it has no arguments to unpack */
    status = unpack_C_GetInfo_Call(cursorIn);
    if (status != CKR_OK)
        return status;

    CK_FUNCTION_LIST_PTR function_list;
    status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    call_C_Initialize(&function_list);
    status = call_C_GetInfo(&function_list, &info);

    if (status != CKR_OK)
        return status;

    status = call_C_Finalize(&function_list);

    if (status != CKR_OK)
        return status;

    status = pack_C_GetInfo_Return(&info, NULL_PTR, &(CursorOut->derlen));
    if (status != CKR_OK)
        return status;

    CursorOut->derptr = malloc(CursorOut->derlen);

    status = pack_C_GetInfo_Return(&info, CursorOut->derptr, &(CursorOut->derlen));
    if (status != CKR_OK)
        return status;
}

CK_RV
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
){
    CK_RV status;
    bool tokenPresent;

    status = unpack_C_GetSlotList_Call(cursorIn, &tokenPresent);
    if (status != CKR_OK)
        return status;

    CK_FUNCTION_LIST_PTR function_list;
    status = call_C_GetFunctionList(path, &function_list);

    if (status != CKR_OK)
        return status;

    call_C_Initialize(&function_list);

    CK_SLOT_ID slotList;

    status = call_C_GetSlotList(&function_list, &slotList);
    if (status != CKR_OK)
        return status;

    status = call_C_Finalize(&function_list);

    if (status != CKR_OK)
        return status;

    status = pack_C_GetSlotList_Return(&slotList, CursorOut);

    if (status != CKR_OK)
        return status;

}
