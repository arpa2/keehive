#include "version.h"
#include <stdlib.h>
#include <quick-der/api.h>
#include "RemotePKCS11.h"
#include "constants.h"

/* these defines are required by pkcs11.h */
#define CK_PTR *
#define CK_DECLARE_FUNCTION(returnType, name) returnType name
#define CK_DECLARE_FUNCTION_POINTER(returnType, name) returnType (* name)
#define CK_CALLBACK_FUNCTION(returnType, name) returnType (* name)
#ifndef NULL_PTR
#define NULL_PTR 0
#endif

#include "pkcs11/pkcs11.h"


typedef DER_OVLY_RemotePKCS11_C_GetSlotList_Call getslotlist_t;


KeehiveError get_slot_list_pack() {
    getslotlist_t getslotlist;

    static const uint8_t get_slot_list_packer[] = {
            DER_PACK_RemotePKCS11_C_GetSlotList_Call,
            DER_PACK_END
    };

    size_t len = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, NULL);

    uint8_t * decptr = malloc (len);

    if (decptr == NULL) {
        return KEEHIVE_E_MEMORY_ERROR;
    }

    der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, decptr + len);

    free(decptr);

    return KEEHIVE_E_SUCCESS;

}

/*
KeehiveError get_slot_list_unpack() {
    getslotlist_t getslotlist;

    static const uint8_t get_slot_list_unpacker[] = {
            DER_PACK_RemotePKCS11_C_GetSlotList_Call,
            DER_PACK_END
    };

    size_t declen = der_unpack(get_slot_list_unpacker, (const dercursor *) &getslotlist, NULL);

    uint8_t * decptr = malloc (declen);
    if (decptr == NULL) {
        return KEEHIVE_E_MEMORY_ERROR;
    }

    der_unpack(get_slot_list_unpacker, (const dercursor *) &getslotlist, decptr + declen);

}
 */