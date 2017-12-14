
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"
#include "util.h"


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

    memset(&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));
    int status = der_unpack(packed, C_GetSlotList_Call_packer, (dercursor *) &C_GetSlotList_Call, REPEAT);

    der_get_bool(C_GetSlotList_Call.tokenPresent, (bool *) pTokenPresent);

    if (status != 0)
        return der_error_helper(errno);

    return CKR_OK;
}

#include "stdio.h"

CK_RV
unpack_C_GetSlotList_Return(
        const dercursor * packed,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pPulCount
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset(&C_GetSlotList_Return, 0, sizeof(C_GetSlotList_Return));
    int status;
    status = der_unpack(packed, C_GetSlotList_Return_packer, (dercursor *) &C_GetSlotList_Return, REPEAT);

    FILE *filea = fopen("/tmp/dump", "w+b");
    fwrite(packed->derptr,1,packed->derlen,filea);
    fclose (filea);

    if (status != 0)
        return der_error_helper(errno);

    if (C_GetSlotList_Return.pSlotList.null.derptr != NULL) {
        // There is no list
    }

    int gijs = 0;

    dercursor iterator;
    if (der_iterate_first(&C_GetSlotList_Return.pSlotList.data.wire, &iterator)) {
        do {
            gijs++;
            // do something with iterator.derptr
        } while (der_iterate_next(&iterator));
    }

    status = der_get_int32(C_GetSlotList_Return.pulCount, (int32_t *)pPulCount);
    if (status != 0)
            return der_error_helper(errno);

    return CKR_OK;

}