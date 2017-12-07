#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"

#include "quick-der/api.h"


KeehiveError
unpack_C_GetSlotList_Call(
        const dercursor * packed,
        bool * pTokenPresent
);


        KeehiveError
unpack_C_GetInfo_Call(
        const dercursor * cursor
);

KeehiveError
unpack_C_GetInfo_Return(
        const dercursor * packed,
        CK_INFO_PTR pInfo
);

KeehiveError
unpack_C_GetSlotList_Return(
        const dercursor * packed,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pPulCount
);


#endif //KEEHIVE_UNPACK_H
