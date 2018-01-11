#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"

#include "quick-der/api.h"


CK_RV
unpack_C_GetSlotList_Call(
        const dercursor * packed,
        CK_BBOOL * pTokenPresent
);

CK_RV
unpack_C_GetInfo_Call(
        const dercursor * cursor
);

CK_RV
unpack_C_GetInfo_Return(
        const dercursor * packed,
        CK_INFO_PTR pInfo
);

CK_RV
unpack_C_GetSlotList_Return(
        const dercursor * packed,
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR pPulCount,
        CK_RV *pRetval
);

CK_RV
unpack_C_GetSlotInfo_Call(
        dercursor *packed,
        CK_SLOT_ID *pSlotId
);

CK_RV
unpack_C_GetSlotInfo_Return(
        dercursor *pPacked,
        CK_SLOT_INFO *pSlotInfo,
        CK_RV *pRetval
);


#endif //KEEHIVE_UNPACK_H
