

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"

void
server_C_GetInfo(
        const dercursor *cursorIn,
        dercursor *CursorOut
);


void
server_C_GetSlotList(
        uint8_t *pPacked,
        size_t len,
        uint8_t *response_data,
size_t *response_len
);

#endif //KEEHIVE_SERVER_H
