#include <stdlib.h>
#include "derput.h"
#include "returncodes.h"
#include "convert.h"
#include "packer.h"
#include "quick-der/api.h"


/* use this to reset a der. */
const dercursor der_empty = {.derptr = NULL, .derlen = 0 };

/* use this one to set null in case a choice is NULL */
const dercursor der_null = {.derptr = (uint8_t *)"", .derlen = 0 };


dercursor der_put_long(u_int8_t* der_buf_long, long int value)
{
    return der_put_int32(der_buf_long,(u_int32_t) value);
};


dercursor der_put_ulong(u_int8_t* der_buf_ulong, long int value)
{
    return der_put_uint32(der_buf_ulong, (u_int32_t)value);
};

dercursor der_put_uint8(u_int8_t* der_buf_uint8, uint8_t value)
{
    return der_put_uint32(der_buf_uint8, (u_int32_t)value);
};


dercursor der_put_char(u_int8_t* der_buf_char, char value)
{
    dercursor retval;
    retval.derptr = (uint8_t *)der_buf_char;
    retval.derlen = 1;
    *retval.derptr = (uint8_t)value;
    return retval;
}


dercursor der_put_uchar(u_int8_t* der_buf_char, unsigned char value)
{
    dercursor retval;
    retval.derptr = (uint8_t *)der_buf_char;
    retval.derlen = 1;
    *retval.derptr = (uint8_t)value;
    return retval;
}


dercursor
der_put_CK_FLAGS_PTR(
        u_int8_t* der_buf_bitstring,
        const CK_FLAGS flags
) {
    //return der_put_uint32(der_buf_ulong, (u_int32_t)flags);
    dercursor cursor;
    cursor.derptr = der_buf_bitstring;
    cursor.derlen = 8;
    size_t bytenr;
    int status;
    uint8_t tmp;
    for (bytenr=0; bytenr < 7; bytenr++) {
        tmp = (uint8_t)(flags >> (8 * bytenr));
        status = der_put_bitstring_by_eight(cursor, bytenr, tmp);
    }
    return cursor;
};


dercursor
der_put_CK_VOID_PTR(const CK_VOID_PTR* pReserved) {
    if (pReserved == NULL) {
        return der_null;
    } else {
        // TODO: implement
        return der_null;
    }
};

CK_RV
der_put_CK_BYTE_ARRAY(
        const CK_BYTE* byte_array,
        const CK_ULONG* count,
        uint8_t** pInnerlist,
        size_t* pLength,
        const derwalk* pack
) {
    int i;
    der_buf_uchar_t buf = { 0 };
    dercursor crs;
    CK_BYTE byte;
    size_t innerlen = 0;
    size_t tmp = 0;

    for (i = 0; i < *count; i++) {
        byte = byte_array[i];
        crs = der_put_uchar(buf, byte);
        tmp = der_pack(pack, &crs, NULL);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen += tmp;
    }
    *pLength = innerlen;
    *pInnerlist = (uint8_t *)malloc(innerlen);
    if (*pInnerlist == NULL) {
        return CKR_KEEHIVE_MEMORY_ERROR;
    }
    while (i-- > 0) {
        assert(innerlen >= 0);
        byte = byte_array[i];
        crs = der_put_uchar(buf, byte);
        tmp = der_pack(pack, &crs, *pInnerlist + innerlen);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen -= tmp;
    }
    assert(innerlen == 0);

    return CKR_OK;
};


/* dont forget to free(pInnerlist) */
CK_RV
der_put_CK_ATTRIBUTE_ARRAY(
        const CK_ATTRIBUTE* pTemplate,
        CK_ULONG count,
        uint8_t** pInnerlist,
        size_t* pLength
) {
    init_func_tree();

    int i;
    der_buf_uint32_t buf = { 0 };
    dercursor crs;
    CK_ATTRIBUTE attribute;
    size_t innerlen = 0;
    size_t tmp = 0;
    func_t* func;

    for (i = 0; i < count; i++) {
        attribute = pTemplate[i];
        func = find_func(attribute.type);
        if (func == NULL)
            return CKR_KEEHIVE_NOT_IMPLEMENTED_ERROR;
        crs = (*func->func)(&attribute);

        tmp = der_pack(AttributeArray_packer, &crs, NULL);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen += tmp;
    }
    *pLength = innerlen;
    *pInnerlist = (uint8_t *)malloc(innerlen);
    if (*pInnerlist == NULL) {
        return CKR_KEEHIVE_MEMORY_ERROR;
    }
    while (i-- > 0) {
        assert(innerlen >= 0);
        attribute = pTemplate[i];
        func = find_func(attribute.type);
        if (func == NULL)
            return CKR_KEEHIVE_NOT_IMPLEMENTED_ERROR;
        crs = (*func->func)(&attribute);
        tmp = der_pack(AttributeArray_packer, &crs, *pInnerlist + innerlen);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen -= tmp;
    }
    assert(innerlen == 0);

    return CKR_OK;
};


CK_RV
der_put_CK_ULONG_ARRAY(
        const CK_ULONG* array,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
) {
    int i;
    CK_ULONG item;
    size_t innerlen = 0;
    size_t tmp = 0;
    der_buf_uint32_t buf = { 0 };
    dercursor crs;

    for (i = 0; i < *count; i++) {
        item = (array)[i];
        if (item > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }

        crs = der_put_uint32(buf, (uint32_t) item);
        tmp = der_pack(pack, &crs, NULL);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen += tmp;
    }
    *pLength = innerlen;
    *pInnerlist = (uint8_t *)malloc(innerlen);
    if (*pInnerlist == NULL) {
        return CKR_KEEHIVE_MEMORY_ERROR;
    }
    while (i-- > 0) {
        assert(innerlen >= 0);
        item = (array)[i];
        if (item > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }
        crs = der_put_uint32(buf, (uint32_t) item);
        tmp = der_pack(pack, &crs, *pInnerlist + innerlen);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen -= tmp;
    }
    assert(innerlen == 0);

    return CKR_OK;
};


CK_RV
der_put_CK_SLOT_ID_ARRAY(
        const CK_SLOT_ID* pSlotList,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
) {
    return der_put_CK_ULONG_ARRAY(
        pSlotList,
        count,
        pInnerlist,
        pLength,
        pack
    );
};


CK_RV
der_put_CK_OBJECT_HANDLE_ARRAY(
        const CK_OBJECT_HANDLE* phObject,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
) {
    return der_put_CK_ULONG_ARRAY(
            phObject,
            count,
            pInnerlist,
            pLength,
            pack
    );
};


CK_RV
der_put_CK_C_INITIALIZE_ARGS_PTR(
        C_Initialize_Call_t* C_Initialize_Call,
        const CK_C_INITIALIZE_ARGS* pInitArgs,
        der_buf_ulong_t flags_buf,
        der_buf_bool_t createMutex_bool_buf,
        der_buf_bool_t destroyMutex_bool_buf,
        der_buf_bool_t lockMutex_bool_buf,
        der_buf_bool_t unlockMutex_bool_buf
) {

    if (pInitArgs == NULL) {
        C_Initialize_Call->pInitArgs.null = der_null;
    } else {

        C_Initialize_Call->pInitArgs.data.flags = der_put_ulong(flags_buf, pInitArgs->flags);
        if (pInitArgs->CreateMutex == NULL) {
            C_Initialize_Call->pInitArgs.data.createMutex.null = der_null;
        } else {
            C_Initialize_Call->pInitArgs.data.createMutex.present = der_put_bool(createMutex_bool_buf, TRUE);
        }

        if (pInitArgs->DestroyMutex == NULL) {
            C_Initialize_Call->pInitArgs.data.destroyMutex.null = der_null;
        } else {
            C_Initialize_Call->pInitArgs.data.destroyMutex.present = der_put_bool(destroyMutex_bool_buf, TRUE);
        }

        if (pInitArgs->LockMutex == NULL) {
            C_Initialize_Call->pInitArgs.data.lockMutex.null = der_null;
        } else {
            C_Initialize_Call->pInitArgs.data.lockMutex.present = der_put_bool(lockMutex_bool_buf, TRUE);
        }

        if (pInitArgs->UnlockMutex == NULL) {
            C_Initialize_Call->pInitArgs.data.unlockMutex.null = der_null;
        } else {
            C_Initialize_Call->pInitArgs.data.unlockMutex.present = der_put_bool(unlockMutex_bool_buf, TRUE);
        }
        C_Initialize_Call->pInitArgs.data.pReserved = der_null;
    }

    return CKR_OK;
};


CK_RV
der_put_CK_MECHANISM_PTR(
        ACK_MECHANISM_t* Ack_Mechanism,
        const CK_MECHANISM* pMechanism,
        der_buf_ulong_t mechanism_buf,
        der_buf_ulong_t ulParameterLen_buf
) {

    Ack_Mechanism->mechanism = der_put_ulong(mechanism_buf, pMechanism->mechanism);

    if (pMechanism->pParameter == NULL) {
        Ack_Mechanism->pParameter.null = der_null;
    } else {
        // TODO: implement
        return CKR_KEEHIVE_NOT_IMPLEMENTED_ERROR;
    }


    Ack_Mechanism->ulParameterLen = der_put_ulong(ulParameterLen_buf, pMechanism->ulParameterLen);

    return CKR_OK;
};


dercursor
der_put_CK_BBOOL_PTR(
        uint8_t *der_buf_bool,
        const CK_BBOOL* value
) {
    bool boolvalue = (*value == CK_TRUE);
    return der_put_bool (der_buf_bool, boolvalue);
};


CK_RV
der_put_CK_UTF8CHAR_ARRAY(
        dercursor* cursor,
        const CK_UTF8CHAR* pin,
        const CK_ULONG pinlen
) {
    if (pinlen == 0) {
        *cursor = der_null;
    } else {
        cursor->derptr = (uint8_t *)pin;
        cursor->derlen = pinlen;
    }
    return CKR_OK;
};


CK_RV
der_put_UTF8String(
        dercursor* cursor,
        const CK_UTF8CHAR* pin,
        const CK_ULONG pinlen
) {
    if (pinlen == 0) {
        *cursor = der_null;
    } else {
        cursor->derptr = (uint8_t *)pin;
        cursor->derlen = pinlen;
    }

    return CKR_OK;
};

CK_RV
der_put_CK_INFO_PTR(
        ACK_INFO_t* Ack_Info,
        const CK_INFO* pInfo,
        manufacturerID_t manufacturerID_buf,
        libraryDescription_t libraryDescription_buf,
        der_buf_ulong_t flags_buf,
        der_buf_char_t libraryVersion_minor_buf,
        der_buf_char_t libraryVersion_major_buf,
        der_buf_char_t cryptokiVersion_minor_buf,
        der_buf_char_t cryptokiVersion_major_buf

) {
    Ack_Info->flags = der_put_ulong(flags_buf, pInfo->flags);

    dercursor manufacturerID;
    manufacturerID.derptr = manufacturerID_buf;
    memcpy(manufacturerID.derptr, pInfo->manufacturerID, 32);
    manufacturerID.derlen = 32;
    Ack_Info->manufacturerID = manufacturerID;

    dercursor libraryDescription;
    libraryDescription.derptr = libraryDescription_buf;
    memcpy(libraryDescription.derptr, pInfo->libraryDescription, 32);
    libraryDescription.derlen = 32;
    Ack_Info->libraryDescription = libraryDescription;

    Ack_Info->libraryVersion.minor = der_put_char(libraryVersion_minor_buf, pInfo->libraryVersion.minor);
    Ack_Info->libraryVersion.major = der_put_char(libraryVersion_major_buf, pInfo->libraryVersion.major);

    Ack_Info->cryptokiVersion.minor = der_put_char(cryptokiVersion_minor_buf, pInfo->cryptokiVersion.minor);
    Ack_Info->cryptokiVersion.major = der_put_char(cryptokiVersion_major_buf, pInfo->cryptokiVersion.major);

    return CKR_OK;
};

CK_RV
der_put_CK_MECHANISM_TYPE_ARRAY(
        const CK_MECHANISM_TYPE* pMechanismList,
        const CK_ULONG* count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *pack
) {
    return der_put_CK_ULONG_ARRAY(
            pMechanismList,
            count,
            pInnerlist,
            pLength,
            pack
    );
};


CK_RV
der_put_CK_MECHANISM_INFO_PTR(
        ACK_MECHANISM_INFO_t* Ack_Mechanism_info,
        const CK_MECHANISM_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        der_buf_ulong_t ulMaxKeySize_buf,
        der_buf_ulong_t ulMinKeySize_buf
) {
    Ack_Mechanism_info->flags = der_put_ulong(flags_buf, pInfo->flags);
    Ack_Mechanism_info->ulMaxKeySize = der_put_ulong(ulMaxKeySize_buf, pInfo->ulMaxKeySize);
    Ack_Mechanism_info->ulMinKeySize = der_put_ulong(ulMinKeySize_buf, pInfo->ulMinKeySize);

    return CKR_OK;
};

CK_RV
der_put_CK_SESSION_INFO_PTR(
        ACK_SESSION_INFO_t* Ack_Session_Info,
        const CK_SESSION_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        der_buf_ulong_t slotID_buf,
        der_buf_ulong_t state_buf,
        der_buf_ulong_t ulDeviceError_buf
) {
    Ack_Session_Info->flags = der_put_ulong(flags_buf, pInfo->flags);
    Ack_Session_Info->slotID = der_put_ulong(slotID_buf, pInfo->slotID);
    Ack_Session_Info->state = der_put_ulong(state_buf, pInfo->state);
    Ack_Session_Info->ulDeviceError = der_put_ulong(ulDeviceError_buf, pInfo->ulDeviceError);

    return CKR_OK;
};


CK_RV
der_put_CK_SLOT_INFO_PTR(
        ACK_SLOT_INFO_t* Ack_Slot_Info,
        const CK_SLOT_INFO* pInfo,
        der_buf_ulong_t flags_buf,
        manufacturerID_t manufacturerID_buf,
        slotDescription_t slotDescription_buf,
        der_buf_ulong_t firmwareVersion_minor_buf,
        der_buf_ulong_t firmwareVersion_major_buf,
        der_buf_ulong_t hardwareVersion_minor_buf,
        der_buf_ulong_t hardwareVersion_major_buf
) {
    Ack_Slot_Info->flags = der_put_ulong(flags_buf, pInfo->flags);

    dercursor manufacturerID;
    manufacturerID.derptr = manufacturerID_buf;
    memcpy(manufacturerID.derptr, pInfo->manufacturerID, 32);
    manufacturerID.derlen = 32;
    Ack_Slot_Info->manufacturerID = manufacturerID;

    dercursor slotDescription;
    slotDescription.derptr = slotDescription_buf;
    memcpy(slotDescription.derptr, pInfo->slotDescription, 32);
    slotDescription.derlen = 32;
    Ack_Slot_Info->slotDescription = slotDescription;

    Ack_Slot_Info->firmwareVersion.minor = der_put_char(firmwareVersion_minor_buf, pInfo->firmwareVersion.minor);
    Ack_Slot_Info->firmwareVersion.major = der_put_char(firmwareVersion_major_buf, pInfo->firmwareVersion.major);

    Ack_Slot_Info->hardwareVersion.minor = der_put_char(hardwareVersion_minor_buf, pInfo->hardwareVersion.minor);
    Ack_Slot_Info->hardwareVersion.major = der_put_char(hardwareVersion_major_buf, pInfo->hardwareVersion.major);

    return CKR_OK;

};


CK_RV
der_put_CK_TOKEN_INFO_PTR(
        ACK_TOKEN_INFO_t* Ack_Token_Info,
        const CK_TOKEN_INFO* pInfo,
        der_buf_ulong_t firmwareVersion_minor_buf,
        der_buf_ulong_t firmwareVersion_major_buf,
        der_buf_ulong_t hardwareVersion_minor_buf,
        der_buf_ulong_t hardwareVersion_major_buf,
        der_buf_ulong_t flags_buf,
        manufacturerID_t manufacturerID_buf,
        label_t label_buf,
        model_t model_buf,
        serialNumber_t serialNumber_buf,
        der_buf_ulong_t ulMaxSessionCount_buf,
        der_buf_ulong_t ulSessionCount_buf,
        der_buf_ulong_t ulMaxRwSessionCount_buf,
        der_buf_ulong_t ulRwSessionCount_buf,
        der_buf_ulong_t ulMaxPinLen_buf,
        der_buf_ulong_t ulMinPinLen_buf,
        der_buf_ulong_t ulTotalPublicMemory_buf,
        der_buf_ulong_t ulFreePublicMemory_buf,
        der_buf_ulong_t ulTotalPrivateMemory_buf,
        der_buf_ulong_t ulFreePrivateMemory_buf,
        utcTime_t utcTime_buf

) {
    Ack_Token_Info->firmwareVersion.minor = der_put_char(firmwareVersion_minor_buf, pInfo->firmwareVersion.minor);
    Ack_Token_Info->firmwareVersion.major = der_put_char(firmwareVersion_major_buf, pInfo->firmwareVersion.major);

    Ack_Token_Info->hardwareVersion.minor = der_put_char(hardwareVersion_minor_buf, pInfo->hardwareVersion.minor);
    Ack_Token_Info->hardwareVersion.major = der_put_char(hardwareVersion_major_buf, pInfo->hardwareVersion.major);

    dercursor manufacturerID;
    manufacturerID.derptr = manufacturerID_buf;
    memcpy(manufacturerID.derptr, pInfo->manufacturerID, 32);
    manufacturerID.derlen = 32;
    Ack_Token_Info->manufacturerID = manufacturerID;

    Ack_Token_Info->flags = der_put_ulong(flags_buf, pInfo->flags);

    dercursor label;
    label.derptr = label_buf;
    memcpy(label.derptr, pInfo->label, 32);
    label.derlen = 32;
    Ack_Token_Info->label = label;

    dercursor model;
    model.derptr = model_buf;
    memcpy(model.derptr, pInfo->model, 16);
    model.derlen = 16;
    Ack_Token_Info->model = model;

    dercursor serialNumber;
    serialNumber.derptr = serialNumber_buf;
    memcpy(serialNumber.derptr, pInfo->serialNumber, 16);
    serialNumber.derlen = 16;
    Ack_Token_Info->serialNumber = serialNumber;

    dercursor utcTime;
    utcTime.derptr = utcTime_buf;
    memcpy(utcTime.derptr, pInfo->utcTime, 16);
    utcTime.derlen = 16;
    Ack_Token_Info->utcTime = utcTime;

    Ack_Token_Info->ulMaxSessionCount = der_put_ulong(ulMaxSessionCount_buf, pInfo->ulMaxSessionCount);;
    Ack_Token_Info->ulSessionCount = der_put_ulong(ulSessionCount_buf, pInfo->ulSessionCount);
    Ack_Token_Info->ulMaxRwSessionCount = der_put_ulong(ulMaxRwSessionCount_buf, pInfo->ulMaxRwSessionCount);
    Ack_Token_Info->ulRwSessionCount = der_put_ulong(ulRwSessionCount_buf, pInfo->ulRwSessionCount);
    Ack_Token_Info->ulMaxPinLen = der_put_ulong(ulMaxPinLen_buf, pInfo->ulMaxPinLen);
    Ack_Token_Info->ulMinPinLen = der_put_ulong(ulMinPinLen_buf, pInfo->ulMinPinLen);
    Ack_Token_Info->ulTotalPublicMemory = der_put_ulong(ulTotalPublicMemory_buf, pInfo->ulTotalPublicMemory);
    Ack_Token_Info->ulFreePublicMemory = der_put_ulong(ulFreePublicMemory_buf, pInfo->ulFreePublicMemory);
    Ack_Token_Info->ulTotalPrivateMemory = der_put_ulong(ulTotalPrivateMemory_buf, pInfo->ulTotalPrivateMemory);
    Ack_Token_Info->ulFreePrivateMemory = der_put_ulong(ulFreePrivateMemory_buf, pInfo->ulFreePrivateMemory);

    return CKR_OK;

};
