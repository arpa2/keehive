

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

CK_RV server_Begin();
CK_RV server_End();


CK_RV
server_C_GetInfo(
        dercursor *cursorIn,
        dercursor *CursorOut
);


CK_RV
server_C_GetSlotList(
        dercursor *cursorIn,
        dercursor *CursorOut
);


CK_RV
server_C_GetSlotInfo(
        dercursor *pCursorIn,
        dercursor *pCursorOut
);


#endif //KEEHIVE_SERVER_H
