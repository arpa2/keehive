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
        CK_ULONG_PTR pulcount_ptr,
        uint8_t * packed_ptr,
        size_t * len

) {
    getslotlist_call_t getslotlist_call;

    memset (&getslotlist_call, 0, sizeof (getslotlist_call));


    /* only slots with tokens */
    QDERBUF_BOOL_T der_tokenPresent;
    memset(&der_tokenPresent, 0, sizeof(der_tokenPresent));
    getslotlist_call.tokenPresent = ck2qder_bool(der_tokenPresent, tokenPresent);

    /* receives array of slot IDs */
    getslotlist_call.pSlotList.null.derptr = (uint8_t *) "";
    getslotlist_call.pSlotList.null.derlen = 0;

    if (pulcount_ptr == NULL_PTR)
        return KEEHIVE_E_MEMORY_ERROR;

    /* receives number of slots */
    QDERBUF_ULONG_T der_pulCount;
    memset(&der_pulCount, 0, sizeof(der_pulCount));
    getslotlist_call.pulCount = ck2qder_ulong(der_pulCount, *pulcount_ptr);

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
        uint8_t * packed_ptr,
        const size_t * len,
        getslotlist_call_t * getslotlist_call
) {

    dercursor packed;
    packed.derptr = packed_ptr;
    packed.derlen = *len;

    memset(&getslotlist_call, 0, sizeof(getslotlist_call));
    int repeats = 1;
    int status = der_unpack(&packed, get_slot_list_packer, (dercursor *) &getslotlist_call, repeats);

    if (getslotlist_call->pulCount.derptr == NULL)
        return KEEHIVE_E_DER_ERROR;

    if (status == -1) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }
    return KEEHIVE_E_SUCCESS;
}


