#ifndef KEEHIVE_KEEHIVE_H
#define KEEHIVE_KEEHIVE_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "constants.h"
#include "pkcs11/pkcs11unix.h"
#include "RemotePKCS11.h"


typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call getslotlist_call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call_pSlotList pslotlist_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return getslotlist_return_t;


static const uint8_t get_slot_list_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};


KeehiveError
get_slot_list_pack(
        CK_BBOOL tokenPresent,
        /* CK_SLOT_ID_PTR pSlotList, */
        CK_ULONG_PTR pulCount,
        uint8_t * decptr,
        size_t * len

);


KeehiveError
get_slot_list_unpack(
        uint8_t * packed_ptr,
        const size_t * len,
        getslotlist_call_t * getslotlist_call
);

#endif //KEEHIVE_KEEHIVE_H
