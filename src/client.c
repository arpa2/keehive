#include "client.h"
#include "server.h"
#include "pack.h"

CK_RV
C_GetInfo(
        CK_INFO_PTR pInfo
) {
    size_t len = 0;
    pack_C_GetInfo_Call(pInfo, NULL_PTR, &len);
    uint8_t *packed_ptr = malloc(len);
    pack_C_GetInfo_Call(pInfo, packed_ptr, &len);

    dercursor packed;
    packed.derptr = packed_ptr;
    packed.derlen = len;

    uint8_t *packed_response = server_C_GetInfo(packed);
    unpack_C_GetInfo_Return(packed_response, pInfo);
    free(packed_ptr);
    return CKR_OK;
}


CK_RV
C_GetSlotList(
    CK_BBOOL tokenPresent,
    CK_SLOT_ID_PTR pSlotList,
    CK_ULONG_PTR pulCount
) {

};
