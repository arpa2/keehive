#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"




KeehiveError
unpack_C_GetSlotList_Call(
        dercursor * packed
);


KeehiveError
unpack_C_GetInfo_Call(
        dercursor * cursor
);

KeehiveError
unpack_C_GetInfo_Return(
        dercursor * packed,
        CK_INFO_PTR pInfo
);


#endif //KEEHIVE_UNPACK_H
