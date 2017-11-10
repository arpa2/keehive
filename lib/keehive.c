#include <stdlib.h>
#include <quick-der/api.h>
#include <errno.h>
#include <stdio.h>
#include "RemotePKCS11.h"
#include "constants.h"
#include "pkcs11/pkcs11unix.h"
#include "keehive.h"


KeehiveError
get_slot_list_pack(
        CK_BBOOL * tokenPresent,
        /* CK_SLOT_ID_PTR pSlotList, */
        CK_ULONG_PTR pulCount,
        uint8_t const * decptr,
        size_t * len

) {
    getslotlist_call_t getslotlist;
    memset (&getslotlist, 0, sizeof (getslotlist));


    /* only slots with tokens */
    getslotlist.tokenPresent.derptr = tokenPresent;
    getslotlist.tokenPresent.derlen = sizeof(*tokenPresent);

    /* receives array of slot IDs */
    getslotlist.pSlotList.null.derptr = (uint8_t *) "";
    getslotlist.pSlotList.null.derlen = 0;

    /* receives number of slots */
    getslotlist.pulCount.derptr = (uint8_t *) pulCount;
    getslotlist.pulCount.derlen = sizeof(*pulCount);

    *len = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, NULL);

    if (decptr == NULL_PTR)
        return KEEHIVE_E_SUCCESS;

    size_t status = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist, *decptr + (uint8_t *) &len);

    if (status == 0) {
        errno_t x = errno;
        return KEEHIVE_E_DER_ERROR;
    }

    return KEEHIVE_E_SUCCESS;
}

KeehiveError
get_slot_list_unpack(
        dercursor * decsyntax,
        getslotlist_call_t * getslotlist
) {
    int repeats = 1;
    int status = der_unpack(decsyntax, get_slot_list_packer, (dercursor *) getslotlist, repeats);

    if (status == -1) {
        errno_t x = errno;
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;
}


