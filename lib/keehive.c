#include <stdlib.h>
#include <quick-der/api.h>
#include <errno.h>
#include <stdio.h>
#include "RemotePKCS11.h"
#include "constants.h"
#include "pkcs11/pkcs11unix.h"

#include "keehive.h"
#include "convert.h"


KeehiveError
get_slot_list_pack(
        CK_BBOOL tokenPresent,
        /* CK_SLOT_ID_PTR pSlotList, */
        CK_ULONG_PTR pulCount,
        uint8_t * packed_ptr,
        size_t * len

) {
    getslotlist_call_t getslotlist_call;

    memset (&getslotlist_call, 0, sizeof (getslotlist_call));


    /* only slots with tokens */
    QDERBUF_BOOL_T der_tokenPresent;
    getslotlist_call.tokenPresent = ck2qder_bool(der_tokenPresent, tokenPresent);

    /* receives array of slot IDs */
    getslotlist_call.pSlotList.null.derptr = (uint8_t *) "";
    getslotlist_call.pSlotList.null.derlen = 0;

    /* receives number of slots */
    QDERBUF_ULONG_T der_pulCount;
    getslotlist_call.pulCount = ck2qder_ulong(der_pulCount, *pulCount);

    *len = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist_call, NULL);

    if (packed_ptr == NULL_PTR)
        return KEEHIVE_E_SUCCESS;

    size_t status = der_pack(get_slot_list_packer, (const dercursor *) &getslotlist_call, packed_ptr + *len);

    if (status == 0) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }

    return KEEHIVE_E_SUCCESS;
}

KeehiveError
get_slot_list_unpack(
        dercursor * packed_ptr,
        getslotlist_call_t * getslotlist_call
) {
    memset(&getslotlist_call, 0, sizeof(getslotlist_call));
    int repeats = 1;
    int status = der_unpack(packed_ptr, get_slot_list_packer, (dercursor *) &getslotlist_call, repeats);

    if (getslotlist_call->pulCount.derptr == NULL)
        return KEEHIVE_E_DER_ERROR;

    if (status == -1) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;
}


