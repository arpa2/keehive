#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"




KeehiveError
unpack_C_GetSlotList_Call(
        uint8_t * packed_ptr,
        const size_t * len,
        DER_OVLY_RemotePKCS11_C_GetSlotList_Call * getslotlist_call
);

unpack_C_GetInfo_Return(packed_response, pInfo);


#endif //KEEHIVE_UNPACK_H
