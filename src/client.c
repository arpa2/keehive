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
    uint8_t *packed_ptr = malloc(len);
    pack_C_GetInfo_Call(pInfo, packed_ptr, &len);

    uint8_t *response_data = malloc(MAX_BUFFER);
    size_t response_len;

    server_C_GetInfo(packed_ptr, len, response_data, &response_len);

    C_GetInfo_Return_t C_GetInfo_Return;

    dercursor cursor;
    cursor.derptr = response_data;
    cursor.derlen = response_len;

    unpack_C_GetInfo_Return(&cursor, pInfo);
    free(packed_ptr);

    // TODO: we shouldn't free this since we are still using it, but where do we free?
    //free(response_data);

    return CKR_OK;
}


CK_RV
Remote_C_GetSlotList(
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_PTR pSlotList,
    CK_ULONG_PTR pulCount
) {

    return CKR_OK;
};
