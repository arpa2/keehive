#include "version.h"
#include <stdlib.h>
#include <quick-der/api.h>
#include "RemotePKCS11.h"
#include "constants.h"




typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call getslotlist_call_t;
typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Return getslotlist_return_t;


static const uint8_t get_slot_list_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};


KeehiveError get_slot_list_pack() {
    getslotlist_return_t getslotlist;
    memset (&getslotlist, 0, sizeof (getslotlist));

    size_t len = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, NULL);

    uint8_t *decptr = malloc (len);

    if (decptr == NULL) {
        return KEEHIVE_E_MEMORY_ERROR;
    }

    der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, decptr + len);

    free(decptr);

    return KEEHIVE_E_SUCCESS;
}

KeehiveError get_slot_list_unpack() {
    dercursor decsyntax;
    getslotlist_call_t outarray;
    int repeats = 1;

    memset(&outarray, 0, sizeof(outarray));
    memset(&decsyntax, 0, sizeof(decsyntax));

    int status = der_unpack(&decsyntax, get_slot_list_packer, (dercursor *) &outarray, repeats);

    if (status != 0) {
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;
}


