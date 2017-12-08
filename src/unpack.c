
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "unpack.h"


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
unpack_C_GetInfo_Call(
        const dercursor * packed
){
    C_GetInfo_Call_t C_GetInfo_Call;

    memset(&C_GetInfo_Call, 0, sizeof(C_GetInfo_Call));
    int repeats = 1;
    int status = der_unpack(packed, C_GetInfo_Return_packer, (dercursor *) &C_GetInfo_Call, repeats);

    if (status != 0) {
        switch (errno) {
            case ERANGE:
                return CKR_KEEHIVE_DER_RANGE_ERROR;
            case EBADMSG:
                return CKR_KEEHIVE_DER_SYNTAX_ERROR;
            default:
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        }
    }

    return CKR_OK;

};

CK_RV
unpack_C_GetInfo_Return(
        const dercursor * packed,
        CK_INFO_PTR pInfo
) {
    C_GetInfo_Return_t C_GetInfo_Return;

    memset(&C_GetInfo_Return, 0, sizeof(C_GetInfo_Return));

    //C_GetInfo_Return.pInfo = pInfo;


    int repeats = 1;
    int status = der_unpack(packed, C_GetInfo_Return_packer, (dercursor *) &C_GetInfo_Return, repeats);

    if (status != 0) {
        switch (errno) {
            case ERANGE:
                return CKR_KEEHIVE_DER_RANGE_ERROR;
            case EBADMSG:
                return CKR_KEEHIVE_DER_SYNTAX_ERROR;
            default:
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        }
    }

    return CKR_OK;

};

CK_RV
unpack_C_GetSlotList_Call(
        const dercursor * packed,
        bool * pTokenPresent
) {

    C_GetSlotList_Call_t C_GetSlotList_Call;

    memset(&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));
    int repeats = 1;
    int status = der_unpack(packed, C_GetSlotList_Call_packer, (dercursor *) &C_GetSlotList_Call, repeats);

    der_get_bool(C_GetSlotList_Call.tokenPresent, pTokenPresent);

    if (status != 0) {
        switch (errno) {
            case ERANGE:
                return CKR_KEEHIVE_DER_RANGE_ERROR;
            case EBADMSG:
                return CKR_KEEHIVE_DER_SYNTAX_ERROR;
            default:
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        }
    }

    return CKR_OK;
}


CK_RV
unpack_C_GetSlotList_Return(
        const dercursor * packed,
        CK_SLOT_ID_PTR pSlotList,
        CK_ULONG_PTR pPulCount
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset(&C_GetSlotList_Return, 0, sizeof(C_GetSlotList_Return));
    int status;
    int repeats = 1;
    status = der_unpack(packed, C_GetSlotList_Return_packer, (dercursor *) &C_GetSlotList_Return, repeats);

    if (status != 0) {
        switch (errno) {
            case ERANGE:
                return CKR_KEEHIVE_DER_RANGE_ERROR;
            case EBADMSG:
                return CKR_KEEHIVE_DER_SYNTAX_ERROR;
            default:
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        }
    }

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
    if (status != 0) {
        switch (errno) {
            case ERANGE:
                return CKR_KEEHIVE_DER_RANGE_ERROR;
            case EBADMSG:
                return CKR_KEEHIVE_DER_SYNTAX_ERROR;
            default:
                return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        }
    }

    return CKR_OK;

}