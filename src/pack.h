#ifndef KEEHIVE_KEEHIVE_H
#define KEEHIVE_KEEHIVE_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "RemotePKCS11.h"


CK_RV
pack_C_GetInfo_Call(
        CK_INFO_PTR pInfo,
        dercursor * cursor
);

CK_RV
pack_C_GetInfo_Return(
        CK_INFO_PTR pInfo,
        dercursor * cursor
);

CK_RV
pack_C_GetSlotList_Call(
        CK_BBOOL tokenPresent,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pulCount,
        dercursor * cursor
);

CK_RV
pack_C_GetSlotList_Return(
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR count,
        dercursor *cursor
);

#endif //KEEHIVE_KEEHIVE_H
