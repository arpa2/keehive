#include "derget.h"
#include "unpack.h"
#include "returncodes.h"
#include "packer.h"
#include "convert.h"


int
der_get_uchar(
        dercursor cursor,
        unsigned char *val
)  {
    if (cursor.derlen == 0)
        return -1;
    *val = *(cursor.derptr);

    return 0;
}


int
der_get_ulong(
        dercursor cursor,
        long unsigned int* valp
) {
    *valp = 0; // make sure long part is reset
    return der_get_uint32 (cursor, (u_int32_t *)valp);
};



int
der_get_CK_ATTRIBUTE_ARRAY(
        ACK_ATTRIBUTE_ARRAY_t Ack_Attribute_Array, // a dercursor
        CK_ATTRIBUTE_ARRAY pTemplate) {

    dercursor iterator;
    int status;
    int i = 0;
    func_t* func;

    unsigned long type;
    unsigned long ulValueLen;


    ACK_ATTRIBUTE_t der_attribute;

    if (der_iterate_first(&Ack_Attribute_Array.wire, &iterator)) {
        do {
            dercursor iterator_copy = iterator;  // copy since der_unpack modifies cursor
            status = der_unpack(&iterator_copy, attribute_array_packer, (dercursor*)&der_attribute, REPEAT);
            if (status)
                return status;

            status = der_get_ulong(der_attribute.type, &type);
            if (status)
                return status;
            (pTemplate)[i].type = type;

            status = der_get_ulong(der_attribute.ulValueLen, &ulValueLen);
            if (status)
                return status;
            (pTemplate)[i].ulValueLen = ulValueLen;

            func = find_func(type);

            if (func->get == NULL)
                return -1;

            // todo: free this, also make sure ulValueLen is based on type size
            (pTemplate)[i].pValue = malloc(ulValueLen);

            status = (*func->get)((void *)&der_attribute.pValue.data, (CK_ATTRIBUTE_PTR)&(pTemplate)[i]);
            if (status)
                return status;

            i++;

        } while (der_iterate_next(&iterator));
    }
    return CKR_OK;
};

int
der_get_CK_BYTE_ARRAY(
        ACK_BYTE_ARRAY_t cursor,
        CK_BYTE_ARRAY byte_array
) {
    dercursor iterator;
    int status;
    int i = 0;

    unsigned char value;

    ACK_BYTE_t der_byte;
    if (byte_array == NULL) {
        return -1;
    }

    if (der_iterate_first(&cursor, &iterator)) {
        do {
            dercursor iterator_copy = iterator; // copy since der_unpack modifies dercursor
            status = der_unpack(&iterator_copy, ByteArray_packer, (dercursor*)&der_byte, REPEAT);
            if (status == -1)
                return -1;

            status = der_get_uchar(der_byte, &value);
            if (status == -1)
                return -1;
            (byte_array)[i] = value;

            i++;
        } while (der_iterate_next(&iterator));
    }
    return 0;
};

int
der_get_CK_MECHANISM_PTR(
        ACK_MECHANISM_t Ack_Mechanism,
        CK_MECHANISM_PTR pMechanism
) {
    int status;

    status = der_get_ulong(Ack_Mechanism.mechanism, &pMechanism->mechanism);
    if (status != 0)
        return -1;

    // todo: implement properly
    pMechanism->pParameter = NULL_PTR;

    status = der_get_ulong(Ack_Mechanism.ulParameterLen, &pMechanism->ulParameterLen);
    if (status != 0)
        return -1;

    return 0;
};

int
der_get_CK_MECHANISM_INFO_PTR(
        ACK_MECHANISM_INFO_t ack_mechanism_info,
        CK_MECHANISM_INFO_PTR ck_mechanism_info
) {
    int status = 0;

    status = status | der_get_CK_FLAGS_PTR(ack_mechanism_info.flags, &ck_mechanism_info->flags);
    status = status | der_get_ulong(ack_mechanism_info.ulMinKeySize, &ck_mechanism_info->ulMinKeySize);
    status = status | der_get_ulong(ack_mechanism_info.ulMaxKeySize, &ck_mechanism_info->ulMaxKeySize);

    return status;
};

int
der_get_CK_VOID_PTR(
        DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved Ack_Void,
        CK_VOID_PTR pReserved
) {
    return 0;
};

int
der_get_CK_UTF8CHAR_ARRAY(
        ACK_UTF8CHAR_ARRAY_t Ack_Utf8char_Array,
        CK_UTF8CHAR_PTR pPin
) {
    memcpy(pPin, Ack_Utf8char_Array.derptr, Ack_Utf8char_Array.derlen+1);
    return 0;
};

int
der_get_UTF8String(
        dercursor cursor,
        UTF8String pPin
) {
    memcpy(pPin, cursor.derptr, cursor.derlen+1);
    return 0;
};

int der_get_CK_BBOOL_PTR(
        ACK_BBOOL_t Ack_Bbool,
        CK_BBOOL_PTR tokenPresent
) {
    bool flag;
    der_get_bool(Ack_Bbool, &flag);
    if (flag) {
        *tokenPresent = CK_TRUE;
    } else {
        *tokenPresent = CK_FALSE;
    }
    return 0;
};

int
der_get_CK_FLAGS_PTR(
        ACK_FLAGS_t Ack_Flags,
        CK_FLAGS_PTR flags
) {
    uint8_t tmp;
    *flags = 0;
    size_t bytenr;
    int status;
    // skip the last byte, otherwise out of range.
    for (bytenr = 0; bytenr < 7; bytenr++) {
        status = der_get_bitstring_by_eight(Ack_Flags, bytenr, &tmp);
        int tmp2 = tmp << (8 * bytenr);
        *flags = *flags | tmp2;
        if (status)
            return status;
    }
    return 0;
};


int
der_get_CK_NOTIFY(
        DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify der_notify,
        CK_NOTIFY notify
) {
    // todo: don't know what to do here
    return 0;
};

int
der_get_CK_C_INITIALIZE_ARGS_PTR(
        DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs ack_initialize_args,
        CK_C_INITIALIZE_ARGS_PTR ck_initialize_args
) {
    int status = 0;

    if (ack_initialize_args.null.derptr != NULL && *ack_initialize_args.null.derptr == '\0')
        return status;

    if (ack_initialize_args.data.flags.derptr != NULL)
        status = status | der_get_CK_FLAGS_PTR(ack_initialize_args.data.flags, &ck_initialize_args->flags);
    // todo: set these to NULL for now
    ck_initialize_args->UnlockMutex = NULL;
    ck_initialize_args->pReserved = NULL;
    ck_initialize_args->LockMutex = NULL;
    ck_initialize_args->DestroyMutex = NULL;
    ck_initialize_args->CreateMutex = NULL;
    return status;
};


int
der_get_CK_INFO_PTR(
        ACK_INFO_t ack_info,
        CK_INFO_PTR ck_info
) {

    int status = 0;
    status = status | der_get_CK_FLAGS_PTR(ack_info.flags, &ck_info->flags);
    memcpy(ck_info->manufacturerID, ack_info.manufacturerID.derptr, 32);
    memcpy(ck_info->libraryDescription, ack_info.libraryDescription.derptr, 32);
    status = status | der_get_uchar(ack_info.cryptokiVersion.major, &ck_info->cryptokiVersion.major);
    status = status | der_get_uchar(ack_info.cryptokiVersion.minor, &ck_info->cryptokiVersion.minor);
    status = status | der_get_uchar(ack_info.libraryVersion.major, &ck_info->libraryVersion.major);
    status = status | der_get_uchar(ack_info.libraryVersion.minor, &ck_info->libraryVersion.minor);
    return status;
};

int
der_get_CK_SESSION_INFO_PTR(
        ACK_SESSION_INFO_t ack_sessions_info,
        CK_SESSION_INFO_PTR ck_sessions_info
) {
    int status = 0;
    status = status | der_get_CK_FLAGS_PTR(ack_sessions_info.flags, &ck_sessions_info->flags);
    status = status | der_get_ulong(ack_sessions_info.ulDeviceError, &ck_sessions_info->ulDeviceError);
    status = status | der_get_ulong(ack_sessions_info.state, &ck_sessions_info->state);
    status = status | der_get_ulong(ack_sessions_info.slotID, &ck_sessions_info->slotID);
    return status;
};

int
der_get_CK_SLOT_INFO_PTR(
        ACK_SLOT_INFO_t ack_slot_info,
        CK_SLOT_INFO_PTR ck_slot_info
) {
    int status = 0;

    status = status | der_get_CK_FLAGS_PTR(ack_slot_info.flags, &ck_slot_info->flags);
    status = status | der_get_CK_FLAGS_PTR(ack_slot_info.flags, &ck_slot_info->flags);
    memcpy(ck_slot_info->manufacturerID, ack_slot_info.manufacturerID.derptr, 32);
    memcpy(ck_slot_info->slotDescription, ack_slot_info.slotDescription.derptr, 64);

    status = status | der_get_uchar(ack_slot_info.hardwareVersion.major, &ck_slot_info->hardwareVersion.major);
    status = status | der_get_uchar(ack_slot_info.hardwareVersion.minor, &ck_slot_info->hardwareVersion.minor);
    status = status | der_get_uchar(ack_slot_info.firmwareVersion.major, &ck_slot_info->firmwareVersion.major);
    status = status | der_get_uchar(ack_slot_info.firmwareVersion.minor, &ck_slot_info->firmwareVersion.minor);

    return status;
}

int der_get_CK_TOKEN_INFO_PTR(
        ACK_TOKEN_INFO_t ack_token_info,
        CK_TOKEN_INFO_PTR ck_token_info
) {
    int status = 0;

    status = status | der_get_CK_FLAGS_PTR(ack_token_info.flags, &ck_token_info->flags);

    status = status | der_get_uchar(ack_token_info.hardwareVersion.major, &ck_token_info->hardwareVersion.major);
    status = status | der_get_uchar(ack_token_info.hardwareVersion.minor, &ck_token_info->hardwareVersion.minor);
    status = status | der_get_uchar(ack_token_info.firmwareVersion.major, &ck_token_info->firmwareVersion.major);
    status = status | der_get_uchar(ack_token_info.firmwareVersion.minor, &ck_token_info->firmwareVersion.minor);

    status = status | der_get_ulong(ack_token_info.ulMaxSessionCount, &ck_token_info->ulMaxSessionCount);
    status = status | der_get_ulong(ack_token_info.ulSessionCount, &ck_token_info->ulSessionCount);
    status = status | der_get_ulong(ack_token_info.ulMaxRwSessionCount, &ck_token_info->ulMaxRwSessionCount);
    status = status | der_get_ulong(ack_token_info.ulRwSessionCount, &ck_token_info->ulRwSessionCount);
    status = status | der_get_ulong(ack_token_info.ulMaxPinLen, &ck_token_info->ulMaxPinLen);
    status = status | der_get_ulong(ack_token_info.ulMinPinLen, &ck_token_info->ulMinPinLen);
    status = status | der_get_ulong(ack_token_info.ulTotalPublicMemory, &ck_token_info->ulTotalPublicMemory);
    status = status | der_get_ulong(ack_token_info.ulFreePublicMemory, &ck_token_info->ulFreePublicMemory);
    status = status | der_get_ulong(ack_token_info.ulTotalPrivateMemory, &ck_token_info->ulTotalPrivateMemory);
    status = status | der_get_ulong(ack_token_info.ulFreePrivateMemory, &ck_token_info->ulFreePrivateMemory);

    memcpy(ck_token_info->manufacturerID, ack_token_info.manufacturerID.derptr, 32);
    memcpy(ck_token_info->label, ack_token_info.label.derptr, 32);
    memcpy(ck_token_info->model, ack_token_info.model.derptr, 16);
    memcpy(ck_token_info->serialNumber, ack_token_info.serialNumber.derptr, 16);
    memcpy(ck_token_info->utcTime, ack_token_info.utcTime.derptr, 16);

    return status;
};

int der_get_CK_MECHANISM_TYPE_ARRAY(
        ACK_MECHANISM_TYPE_ARRAY_t ack_mechanism_type_array,
        CK_MECHANISM_TYPE_ARRAY ck_mechanism_type_array
) {

    dercursor iterator;
    int status;
    int i = 0;
    CK_ULONG value;
    ACK_MECHANISM_TYPE_t der_slot;

    if (der_iterate_first(&ack_mechanism_type_array.wire, &iterator)) {
        do {
            dercursor iterator_copy = iterator; // copy since der_unpack modifies cursor
            status = der_unpack(&iterator_copy, mechanism_type_array_packer, &der_slot, REPEAT);
            if (status == -1)
                return -1;

            status = der_get_ulong(der_slot, &value);
            if (status == -1)
                return -1;
            (ck_mechanism_type_array)[i] = value;

            i++;
        } while (der_iterate_next(&iterator));
    }
    return 0;

};


int
der_get_CK_SLOT_ID_ARRAY(
        DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList ack_slot_id_array,
        CK_SLOT_ID_ARRAY ck_slot_id_array
) {

    dercursor iterator;
    int status;
    int i = 0;

    unsigned char value;

    ACK_SLOT_ID_t der_slot;
    if (ck_slot_id_array == NULL) {
        // need to allocate some memory for this
        return -1;
    }

    /* todo: we need to check if NULL
    if (Ack_Slot_Id_Array->null.derlen == 0) {
        *pSlot = (CK_SLOT_ID) NULL;
        return -1;
    } */

    if (der_iterate_first(&ack_slot_id_array.data.wire, &iterator)) {
        do {
            dercursor iterator_copy = iterator;
            status = der_unpack(&iterator_copy, pSlotList_packer, &der_slot, REPEAT);
            if (status == -1)
                return -1;

            status = der_get_uchar(der_slot, &value);
            if (status == -1)
                return -1;
            (ck_slot_id_array)[i] = value;

            i++;
        } while (der_iterate_next(&iterator));
    }
    return 0;
};


int
der_get_CK_OBJECT_HANDLE_ARRAY(
        ACK_OBJECT_HANDLE_ARRAY_t Ack_Object_Handle_Array,
        CK_OBJECT_HANDLE_ARRAY phObject
) {
    // todo: implement
    return -1;
};