#include <stdlib.h>
#include <quick-der/api.h>
#include <errno.h>
#include <stdio.h>
#include "RemotePKCS11.h"
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "util.h"
#include "pack.h"


static const derwalk C_GetInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetInfo_Return,
        DER_PACK_END
};


static const derwalk C_GetSlotList_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Call,
        DER_PACK_END
};

static const derwalk C_GetSlotList_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotList_Return,
        DER_PACK_END
};


static const derwalk C_GetSlotList_Return_pSlotList_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

static const derwalk C_GetSlotInfo_Call_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotInfo_Call,
        DER_PACK_END
};

static const derwalk C_GetSlotInfo_Return_packer[] = {
        DER_PACK_RemotePKCS11_C_GetSlotInfo_Return,
        DER_PACK_END
};



CK_RV
pack_C_GetInfo_Call(
        CK_INFO_PTR pInfo,
        dercursor * cursor

){
    C_GetInfo_Call_t C_GetInfo_Call;

    memset (&C_GetInfo_Call, 0, sizeof (C_GetInfo_Call));

    //C_GetInfo_Call.empty = der_put_empty();
    C_GetInfo_Call.empty = der_put_null();
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

    der_buf_char_t libraryVersion_minor;
    der_buf_char_t libraryVersion_major;
    der_buf_char_t cryptokiVersion_minor;
    der_buf_char_t cryptokiVersion_major;
    der_buf_ulong_t flags;

    C_GetInfo_Return.pInfo.flags = der_put_ulong(&flags, pInfo->flags);
    C_GetInfo_Return.pInfo.libraryVersion.minor = der_put_char(&libraryVersion_minor, pInfo->libraryVersion.minor);
    C_GetInfo_Return.pInfo.libraryVersion.major = der_put_char(&libraryVersion_major, pInfo->libraryVersion.major);
    C_GetInfo_Return.pInfo.cryptokiVersion.minor = der_put_char(&cryptokiVersion_minor, pInfo->cryptokiVersion.minor);
    C_GetInfo_Return.pInfo.cryptokiVersion.major = der_put_char(&cryptokiVersion_major, pInfo->cryptokiVersion.major);

    der_buf_uint32_t retval;
    C_GetInfo_Return.retval = der_put_uint32(retval, CKR_OK);

    uint8_t manufacturerID_array[32];
    dercursor manufacturerID;
    manufacturerID.derptr = manufacturerID_array;
    memcpy(manufacturerID.derptr, pInfo->manufacturerID, 32);
    manufacturerID.derlen = 32;
    C_GetInfo_Return.pInfo.manufacturerID = manufacturerID;

    uint8_t libraryDescription_array[32];
    dercursor libraryDescription;
    libraryDescription.derptr = libraryDescription_array;
    memcpy(libraryDescription.derptr, pInfo->libraryDescription, 32);
    libraryDescription.derlen = 32;
    C_GetInfo_Return.pInfo.libraryDescription = libraryDescription;

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
        CK_ULONG_PTR pPulCount,
        dercursor * cursor

) {
    C_GetSlotList_Call_t C_GetSlotList_Call;

    memset (&C_GetSlotList_Call, 0, sizeof (C_GetSlotList_Call));

    der_buf_bool_t der_tokenPresent = {};
    C_GetSlotList_Call.tokenPresent = der_put_bool(der_tokenPresent, (tokenPresent==CK_TRUE));
    C_GetSlotList_Call.pSlotList.null = der_put_null();

    if (pPulCount == NULL_PTR)
        return CKR_KEEHIVE_MEMORY_ERROR;

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
        CK_ULONG *count,
        dercursor *cursor
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset (&C_GetSlotList_Return, 0, sizeof (C_GetSlotList_Return));

    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = pack_slotList(pSlotList, count, &innerlist, &length, C_GetSlotList_Return_pSlotList_packer);
    if (status != CKR_OK)
        return status;

    C_GetSlotList_Return.pSlotList.data.wire.derptr = innerlist;
    C_GetSlotList_Return.pSlotList.data.wire.derlen = length;

    // if there is no list, this should be set:
    //C_GetSlotList_Return.pSlotList.null =  der_put_null();

    der_buf_uint32_t pulCount;
    C_GetSlotList_Return.pulCount = der_put_uint32(pulCount, (uint32_t )*count);

    der_buf_uint32_t retval;
    C_GetSlotList_Return.retval = der_put_uint32(retval, CKR_OK);

    cursor->derlen = der_pack(C_GetSlotList_Return_packer, (const dercursor *) &C_GetSlotList_Return, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);

    der_pack(C_GetSlotList_Return_packer, (const dercursor *) &C_GetSlotList_Return, cursor->derptr + cursor->derlen);

    free(innerlist);

    return CKR_OK;

}


CK_RV
pack_C_GetSlotInfo_Call(
        CK_SLOT_ID slotID,
        dercursor *cursor
) {
    C_GetSlotInfo_Call_t C_GetSlotInfo_Call;
    memset (&C_GetSlotInfo_Call, 0, sizeof (C_GetSlotInfo_Call));
    der_buf_ulong_t slotID_store;
    C_GetSlotInfo_Call.slotID = der_put_ulong(&slotID_store, slotID);
    cursor->derlen =  der_pack(C_GetSlotInfo_Call_packer, (const dercursor *) &C_GetSlotInfo_Call, NULL);

    if (cursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    cursor->derptr = malloc(cursor->derlen);
    der_pack(C_GetSlotInfo_Call_packer, (const dercursor *) &C_GetSlotInfo_Call, cursor->derptr + cursor->derlen);
    return CKR_OK;
}

CK_RV
pack_C_GetSlotInfo_Return(
        CK_SLOT_INFO *pSlotInfo,
        dercursor *pCursor
) {
    C_GetSlotInfo_Return_t C_GetSlotInfo_Return;

    memset (&C_GetSlotInfo_Return, 0, sizeof (C_GetSlotInfo_Return));

    der_buf_ulong_t flags;
    C_GetSlotInfo_Return.pInfo.flags = der_put_ulong(&flags, pSlotInfo->flags);

    der_buf_uint32_t retval;
    C_GetSlotInfo_Return.retval = der_put_uint32(retval, CKR_OK);

    der_buf_char_t firmwareVersion_minor;
    der_buf_char_t firmwareVersion_major;
    C_GetSlotInfo_Return.pInfo.firmwareVersion.minor = der_put_char(&firmwareVersion_minor, pSlotInfo->firmwareVersion.minor);
    C_GetSlotInfo_Return.pInfo.firmwareVersion.major = der_put_char(&firmwareVersion_major, pSlotInfo->firmwareVersion.major);

    der_buf_char_t hardwareVersion_minor;
    der_buf_char_t hardwareVersion_major;
    C_GetSlotInfo_Return.pInfo.hardwareVersion.minor = der_put_char(&hardwareVersion_minor, pSlotInfo->hardwareVersion.minor);
    C_GetSlotInfo_Return.pInfo.hardwareVersion.major = der_put_char(&hardwareVersion_major, pSlotInfo->hardwareVersion.major);

    uint8_t manufacturerID_array[32];
    dercursor manufacturerID;
    manufacturerID.derptr = manufacturerID_array;
    memcpy(manufacturerID.derptr, pSlotInfo->manufacturerID, 32);
    manufacturerID.derlen = 32;
    C_GetSlotInfo_Return.pInfo.manufacturerID = manufacturerID;

    uint8_t slotDescription_array[64];
    dercursor slotDescription;
    slotDescription.derptr = slotDescription_array;
    memcpy(slotDescription.derptr, pSlotInfo->slotDescription, 64);
    slotDescription.derlen = 64;
    C_GetSlotInfo_Return.pInfo.slotDescription = slotDescription;

    pCursor->derlen = der_pack(C_GetSlotInfo_Return_packer, (const dercursor *) &C_GetSlotInfo_Return, NULL);

    if (pCursor->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pCursor->derptr = malloc(pCursor->derlen);

    der_pack(C_GetSlotInfo_Return_packer, (const dercursor *) &C_GetSlotInfo_Return, pCursor->derptr + pCursor->derlen);

    return CKR_OK;
}