

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"

void
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);


void
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
);

#endif //KEEHIVE_SERVER_H
