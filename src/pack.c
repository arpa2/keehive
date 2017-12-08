#include <stdlib.h>
#include <quick-der/api.h>
#include <errno.h>
#include <stdio.h>
#include "RemotePKCS11.h"
#include "types.h"
#include "pkcs11/pkcs11unix.h"

#include "pack.h"
#include "convert.h"



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

    cursor->derlen = der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    cursor->derlen = der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, cursor->derptr + cursor->derlen);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
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

    cursor->derlen = der_pack(C_GetInfo_Return_packer, (const dercursor *) &C_GetInfo_Return, cursor->derptr + cursor->derlen);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;


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


    /* only slots with tokens */
    QDERBUF_BOOL_T der_tokenPresent;
    memset(&der_tokenPresent, 0, sizeof(der_tokenPresent));
    C_GetSlotList_Call.tokenPresent = ck2qder_bool(der_tokenPresent, tokenPresent);

    /* receives array of slot IDs */
    C_GetSlotList_Call.pSlotList.null.derptr = (uint8_t *) "";
    C_GetSlotList_Call.pSlotList.null.derlen = 0;

    if (pPulCount == NULL_PTR)
        return CKR_KEEHIVE_MEMORY_ERROR;

    /* receives number of slots */
    QDERBUF_ULONG_T der_pulCount;
    memset(&der_pulCount, 0, sizeof(der_pulCount));
    C_GetSlotList_Call.pulCount = ck2qder_ulong(der_pulCount, *pPulCount);

    cursor->derlen =  der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    cursor->derlen = der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, cursor->derptr + cursor->derlen);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

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
    dercursor tmp_dercursor;
    for (i = 0; i < (*count); i++) {
        slot = (*pSlotList)[i];
        tmp_dercursor = der_put_uint32(der_slotlist[i], (u_int32_t)slot);
        derray[i].derlen = tmp_dercursor.derlen;
        derray[i].derptr = der_slotlist[i];
    }

    derarray prepacked_array;
    der_prepack (derray, *count, &prepacked_array);
    C_GetSlotList_Return.pSlotList.data.prep = prepacked_array;
    cursor->derlen = der_pack(C_GetSlotList_Return_packer, (const dercursor *) &C_GetSlotList_Return, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    cursor->derlen = der_pack(C_GetSlotList_Call_packer,
                             (const dercursor *) &C_GetSlotList_Return,
                             cursor->derptr + cursor->derlen);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    FILE *filea = fopen("/tmp/dump", "w+b");
    fwrite(cursor->derptr,1,cursor->derlen,filea);
    fclose (filea);

    return CKR_OK;

}
