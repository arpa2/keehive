
#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "wrap.h"

const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


void
server_C_GetInfo(
        uint8_t *input_packed,
        const size_t input_len,
        uint8_t *output_packed,
        size_t *output_len
){
    dercursor packed;
    packed.derptr = input_packed;
    packed.derlen = input_len;

    unpack_C_GetInfo_Call(&packed);

    CK_INFO pInfo;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    KeehiveError status = get_info(&function_list, &pInfo);
    finalize(&function_list);

    *output_len = 0;
    pack_C_GetInfo_Return(&pInfo, NULL_PTR, output_len);
    output_packed = malloc(*output_len);
    pack_C_GetInfo_Return(&pInfo, output_packed, output_len);


}

void
server_C_GetSlotList(
        uint8_t *pPacked,
        const size_t len,
        uint8_t *response_data,
        size_t *response_len
) {

}
