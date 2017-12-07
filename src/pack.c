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


KeehiveError
pack_C_GetInfo_Call(
        CK_INFO_PTR pInfo,
        uint8_t * packed_ptr,
        size_t * len
){
    C_GetInfo_Call_t C_GetInfo_Call;

    memset (&C_GetInfo_Call, 0, sizeof (C_GetInfo_Call));

    *len = der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, NULL);

    if (packed_ptr == NULL_PTR)
        return KEEHIVE_E_SUCCESS;

    size_t status = der_pack(C_GetInfo_Call_packer, (const dercursor *) &C_GetInfo_Call, packed_ptr + *len);

    if (status == 0) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }

    return KEEHIVE_E_SUCCESS;

}

KeehiveError
pack_C_GetInfo_Return(
        CK_INFO_PTR pInfo,
        uint8_t * packed_ptr,
        size_t * len
) {
    C_GetInfo_Return_t C_GetInfo_Return;
    memset (&C_GetInfo_Return, 0, sizeof (C_GetInfo_Return));

    *len = der_pack(C_GetInfo_Return_packer, (const dercursor *) &C_GetInfo_Return, NULL);

    if (packed_ptr == NULL_PTR)
        return KEEHIVE_E_SUCCESS;

    size_t status = der_pack(C_GetInfo_Return_packer, (const dercursor *) &C_GetInfo_Return, packed_ptr + *len);

    if (status == 0) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }

    return KEEHIVE_E_SUCCESS;

}



KeehiveError
pack_C_GetSlotList_Call(
        CK_BBOOL tokenPresent,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pPulCount,
        uint8_t * pPacked,
        size_t * len

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
        return KEEHIVE_E_MEMORY_ERROR;

    /* receives number of slots */
    QDERBUF_ULONG_T der_pulCount;
    memset(&der_pulCount, 0, sizeof(der_pulCount));
    C_GetSlotList_Call.pulCount = ck2qder_ulong(der_pulCount, *pPulCount);

    *len = der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, NULL);

    if (pPacked == NULL_PTR)
        return KEEHIVE_E_SUCCESS;

    size_t status = der_pack(C_GetSlotList_Call_packer, (const dercursor *) &C_GetSlotList_Call, pPacked + *len);

    if (status == 0) {
        int x = errno;
        return KEEHIVE_E_DER_ERROR;
    }

    return KEEHIVE_E_SUCCESS;
}


