
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"
#include "util.h"


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



// always use repeat = 1 for der_unpack, unless you need to iterate over a SEQUENCE OF. In this case set it to
// the length of the SEQUENCE
#define REPEAT 1


CK_RV
unpack_C_GetInfo_Call(
        const dercursor * packed
){
    C_GetInfo_Call_t C_GetInfo_Call;

    memset(&C_GetInfo_Call, 0, sizeof(C_GetInfo_Call));
    int repeats = 1;
    int status = der_unpack(packed, C_GetInfo_Call_packer, (dercursor *) &C_GetInfo_Call, repeats);

    if (status != 0)
        return der_error_helper(errno);

    return CKR_OK;

};

CK_RV
unpack_C_GetInfo_Return(
        const dercursor * packed,
        CK_INFO_PTR pInfo
) {
    C_GetInfo_Return_t C_GetInfo_Return;

    memset(&C_GetInfo_Return, 0, sizeof(C_GetInfo_Return));

    int status = der_unpack(packed, C_GetInfo_Return_packer, (dercursor *) &C_GetInfo_Return, REPEAT);
    if (status != 0)
        return der_error_helper(errno);


    status = der_get_uchar(&C_GetInfo_Return.pInfo.cryptokiVersion.major, &pInfo->cryptokiVersion.major);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetInfo_Return.pInfo.cryptokiVersion.minor, &pInfo->cryptokiVersion.minor);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetInfo_Return.pInfo.libraryVersion.major, &pInfo->libraryVersion.major);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetInfo_Return.pInfo.libraryVersion.minor, &pInfo->libraryVersion.minor);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_ulong(C_GetInfo_Return.pInfo.flags, &pInfo->flags);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    memcpy(pInfo->libraryDescription, C_GetInfo_Return.pInfo.libraryDescription.derptr, 32);
    memcpy(pInfo->manufacturerID, C_GetInfo_Return.pInfo.manufacturerID.derptr, 32);
    return CKR_OK;

};


CK_RV
unpack_C_GetSlotList_Call(
        const dercursor * packed,
        CK_BBOOL * pTokenPresent
) {

    C_GetSlotList_Call_t C_GetSlotList_Call;
    int status = 0;

    memset(&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));
    status = der_unpack(packed, C_GetSlotList_Call_packer, (dercursor *) &C_GetSlotList_Call, REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    status = der_get_bool(C_GetSlotList_Call.tokenPresent, (bool *) pTokenPresent);
    if (status != 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    return CKR_OK;
}


CK_RV
unpack_C_GetSlotList_Return(
        const dercursor * packed,
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG_PTR pPulCount,
        CK_RV *pRetval
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;


    memset(&C_GetSlotList_Return, 0, sizeof(C_GetSlotList_Return));
    int status;
    status = der_unpack(packed, C_GetSlotList_Return_packer, (dercursor *) &C_GetSlotList_Return, REPEAT);

    if (status != 0)
        return der_error_helper(errno);

    if (C_GetSlotList_Return.pSlotList.null.derptr != NULL) {
        // There is no list
        *pSlotList = NULL_PTR;
    }

    *pSlotList = (CK_SLOT_ID_PTR) malloc(C_GetSlotList_Return.pSlotList.data.wire.derlen*sizeof(CK_SLOT_ID));

    status = der_get_ulong(C_GetSlotList_Return.retval, pRetval);
    if (status == -1)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    int i = 0;
    dercursor iterator;
    dercursor slotcrs;
    CK_SLOT_ID slot;

    if (der_iterate_first(&C_GetSlotList_Return.pSlotList.data.wire, &iterator)) {
        do {
            status = der_unpack(&iterator, C_GetSlotList_Return_pSlotList_packer, &slotcrs, REPEAT);
            if (status == -1)
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
            status = der_get_ulong(slotcrs, &slot);
            if (status == -1)
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
            (*pSlotList)[i] = slot;
            i++;
        } while (der_iterate_next(&iterator));
    }

    status = der_get_int32(C_GetSlotList_Return.pulCount, (int32_t *)pPulCount);
    if (status != 0)
            return der_error_helper(errno);

    return CKR_OK;

}

CK_RV
unpack_C_GetSlotInfo_Call(
        dercursor *packed,
        CK_SLOT_ID *pSlotId
) {
    C_GetSlotInfo_Call_t C_GetSlotInfo_Call;

    memset(&C_GetSlotInfo_Call, 0, sizeof(C_GetSlotInfo_Call));

    int status = der_unpack(packed, C_GetSlotInfo_Call_packer, (dercursor *) &C_GetSlotInfo_Call, REPEAT);
    if (status != 0)
        return der_error_helper(errno);

    status = der_get_ulong(C_GetSlotInfo_Call.slotID, pSlotId);
    if (status != 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;


    return CKR_OK;
}

CK_RV
unpack_C_GetSlotInfo_Return(
        dercursor *pPacked,
        CK_SLOT_INFO *pSlotInfo,
        CK_RV *pRetval
) {
    C_GetSlotInfo_Return_t C_GetSlotInfo_Return;

    memset(&C_GetSlotInfo_Return, 0, sizeof(C_GetSlotInfo_Return));

    int status = der_unpack(pPacked, C_GetSlotInfo_Return_packer, (dercursor *) &C_GetSlotInfo_Return, REPEAT);
    if (status != 0)
        return der_error_helper(errno);


    status = der_get_uchar(&C_GetSlotInfo_Return.pInfo.hardwareVersion.major, &pSlotInfo->hardwareVersion.major);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetSlotInfo_Return.pInfo.hardwareVersion.minor, &pSlotInfo->hardwareVersion.minor);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetSlotInfo_Return.pInfo.firmwareVersion.major, &pSlotInfo->firmwareVersion.major);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_uchar(&C_GetSlotInfo_Return.pInfo.firmwareVersion.minor, &pSlotInfo->firmwareVersion.minor);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    status = der_get_ulong(C_GetSlotInfo_Return.pInfo.flags, &pSlotInfo->flags);
    if (status != 0)
        return CKR_KEEHIVE_DER_SYNTAX_ERROR;

    memcpy(pSlotInfo->slotDescription, C_GetSlotInfo_Return.pInfo.slotDescription.derptr, 64);
    memcpy(pSlotInfo->manufacturerID, C_GetSlotInfo_Return.pInfo.manufacturerID.derptr, 32);
    return CKR_OK;
};