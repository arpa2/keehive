#include <stdlib.h>
#include <quick-der/api.h>
#include <errno.h>
#include <stdio.h>
#include "RemotePKCS11.h"
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "util.h"
#include "pack.h"



static const uint8_t C_GetInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Call,
        DER_PACK_END
};

static const uint8_t C_GetInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Return,
        DER_PACK_END
};


static const uint8_t C_GetSlotList_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};

static const uint8_t C_GetSlotList_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Return,
        DER_PACK_END
};


CK_RV
pack_C_GetInfo_Call(
        CK_INFO_PTR pInfo,
        dercursor * cursor

){
    C_GetInfo_Call_t C_GetInfo_Call;

    memset (&C_GetInfo_Call, 0, sizeof (C_GetInfo_Call));

    C_GetInfo_Call.empty = der_put_empty();
    cursor->derlen = der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, cursor->derptr + cursor->derlen);

    return CKR_OK;

}

CK_RV
pack_C_GetInfo_Return(
        CK_INFO_PTR pInfo,
        dercursor * cursor
) {
    C_GetInfo_Return_t C_GetInfo_Return;
    memset (&C_GetInfo_Return, 0, sizeof (C_GetInfo_Return));

    cursor->derlen = der_pack(C_GetInfo_Return_packer, (const dercursor *) &C_GetInfo_Return, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    der_pack(C_GetInfo_Return_packer, (const dercursor *) &C_GetInfo_Return, cursor->derptr + cursor->derlen);

    return CKR_OK;
}


CK_RV
pack_C_GetSlotList_Call(
        CK_BBOOL tokenPresent,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pPulCount,
        dercursor * cursor

) {
    C_GetSlotList_Call_t C_GetSlotList_Call;

    memset (&C_GetSlotList_Call, 0, sizeof (C_GetSlotList_Call));

    der_buf_bool_t der_tokenPresent = {};
    C_GetSlotList_Call.tokenPresent = der_put_bool(der_tokenPresent, (tokenPresent==CK_TRUE));
    C_GetSlotList_Call.pSlotList.null = der_put_empty();

    if (pPulCount == NULL_PTR)
        return CKR_KEEHIVE_MEMORY_ERROR;

    /* receives number of slots */
    der_buf_uint32_t der_pulCount;
    memset(&der_pulCount, 0, sizeof(der_pulCount));
    C_GetSlotList_Call.pulCount = der_put_uint32(der_pulCount, (uint32_t)*pPulCount);

    cursor->derlen =  der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, cursor->derptr + cursor->derlen);

    return CKR_OK;
}


CK_RV
pack_C_GetSlotList_Return(
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR count,
        dercursor *cursor
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset (&C_GetSlotList_Return, 0, sizeof (C_GetSlotList_Return));

    der_buf_uint32_t der_slotlist[*count];
    int i;
    CK_SLOT_ID slot;
    dercursor derray [*count];
    for (i = 0; i < (*count); i++) {
        slot = (*pSlotList)[i];
        derray[i] = der_put_uint32(der_slotlist[i], (u_int32_t)slot);
    }

    derarray prepacked_array;
    der_prepack (derray, *count, &prepacked_array);
    C_GetSlotList_Return.pSlotList.data.prep = prepacked_array;

    der_buf_uint32_t pulCount;
    C_GetSlotList_Return.pulCount = der_put_uint32(pulCount, (uint32_t )*count);

    der_buf_uint32_t retval;
    C_GetSlotList_Return.retval = der_put_uint32(retval, CKR_OK);

    cursor->derlen = der_pack(C_GetSlotList_Return_packer, (const dercursor *) &C_GetSlotList_Return, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Return, cursor->derptr + cursor->derlen);

    return CKR_OK;

}
