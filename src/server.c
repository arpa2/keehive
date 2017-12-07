
#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "wrap.h"

const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


void
server_C_GetInfo(
        const dercursor *cursorIn,
        dercursor *CursorOut
){

    /* this is a bit of a weird call, since it has no arguments to unpack */
    unpack_C_GetInfo_Call(cursorIn);

    CK_INFO pInfo;

    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);

    call_C_Initialize(&function_list);
    KeehiveError status = call_C_GetInfo(&function_list, &pInfo);
    call_C_Finalize(&function_list);

    pack_C_GetInfo_Return(&pInfo, NULL_PTR, &(CursorOut->derlen));
    CursorOut->derptr = malloc(CursorOut->derlen);
    pack_C_GetInfo_Return(&pInfo, CursorOut->derptr, &(CursorOut->derlen));
}

void
server_C_GetSlotList(
        uint8_t *pPacked,
        const size_t len,
        uint8_t *response_data,
        size_t *response_len
) {

    dercursor packed;
    packed.derptr = pPacked;
    packed.derlen = len;
    unpack_C_GetSlotList_Call(&packed);

    //call_C_GetSlotList()

}
