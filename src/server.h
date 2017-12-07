

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"

void server_C_GetInfo(
        uint8_t *input_packed,
        size_t input_len,
        uint8_t *output_packed,
        size_t *output_len
);

void
server_C_GetSlotList(
        uint8_t *pPacked,
        size_t len,
        uint8_t *response_data,
size_t *response_len
);

#endif //KEEHIVE_SERVER_H
