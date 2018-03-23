#include "pack.h"
#include "returncodes.h"
#include "util.h"
#include "derput.h"
#include "packer.h"

CK_ULONG ulSeedLen = 0;
CK_ULONG_PTR pulSeedLen = &ulSeedLen;



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CancelFunction_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_CancelFunction_Call_t C_CancelFunction_Call;

    memset (&C_CancelFunction_Call, 0, sizeof(C_CancelFunction_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_CancelFunction_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CancelFunction_Call_packer,
                                  (const dercursor *) &C_CancelFunction_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CancelFunction_Call_packer,
             (const dercursor *) &C_CancelFunction_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CancelFunction_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_CancelFunction_Return_t C_CancelFunction_Return;

    memset (&C_CancelFunction_Return, 0, sizeof(C_CancelFunction_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_CancelFunction_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CancelFunction_Return_packer,
                                  (const dercursor *) &C_CancelFunction_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CancelFunction_Return_packer,
             (const dercursor *) &C_CancelFunction_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CloseAllSessions_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID
) {
    C_CloseAllSessions_Call_t C_CloseAllSessions_Call;

    memset (&C_CloseAllSessions_Call, 0, sizeof(C_CloseAllSessions_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_CloseAllSessions_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CloseAllSessions_Call_packer,
                                  (const dercursor *) &C_CloseAllSessions_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CloseAllSessions_Call_packer,
             (const dercursor *) &C_CloseAllSessions_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CloseAllSessions_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_CloseAllSessions_Return_t C_CloseAllSessions_Return;

    memset (&C_CloseAllSessions_Return, 0, sizeof(C_CloseAllSessions_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_CloseAllSessions_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CloseAllSessions_Return_packer,
                                  (const dercursor *) &C_CloseAllSessions_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CloseAllSessions_Return_packer,
             (const dercursor *) &C_CloseAllSessions_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CloseSession_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_CloseSession_Call_t C_CloseSession_Call;

    memset (&C_CloseSession_Call, 0, sizeof(C_CloseSession_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_CloseSession_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CloseSession_Call_packer,
                                  (const dercursor *) &C_CloseSession_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CloseSession_Call_packer,
             (const dercursor *) &C_CloseSession_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CloseSession_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_CloseSession_Return_t C_CloseSession_Return;

    memset (&C_CloseSession_Return, 0, sizeof(C_CloseSession_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_CloseSession_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CloseSession_Return_packer,
                                  (const dercursor *) &C_CloseSession_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CloseSession_Return_packer,
             (const dercursor *) &C_CloseSession_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CopyObject_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_CopyObject_Call_t C_CopyObject_Call;

    memset (&C_CopyObject_Call, 0, sizeof(C_CopyObject_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_CopyObject_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hObject_storage = { 0 };
    C_CopyObject_Call.hObject = der_put_ulong(hObject_storage, *hObject);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_CopyObject_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_CopyObject_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_CopyObject_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CopyObject_Call_packer,
                                  (const dercursor *) &C_CopyObject_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CopyObject_Call_packer,
             (const dercursor *) &C_CopyObject_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CopyObject_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject
) {
    C_CopyObject_Return_t C_CopyObject_Return;

    memset (&C_CopyObject_Return, 0, sizeof(C_CopyObject_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_CopyObject_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phObject_storage = { 0 };
    C_CopyObject_Return.phObject = der_put_ulong(phObject_storage, *phObject);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CopyObject_Return_packer,
                                  (const dercursor *) &C_CopyObject_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CopyObject_Return_packer,
             (const dercursor *) &C_CopyObject_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CreateObject_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_CreateObject_Call_t C_CreateObject_Call;

    memset (&C_CreateObject_Call, 0, sizeof(C_CreateObject_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_CreateObject_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_CreateObject_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_CreateObject_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_CreateObject_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CreateObject_Call_packer,
                                  (const dercursor *) &C_CreateObject_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CreateObject_Call_packer,
             (const dercursor *) &C_CreateObject_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_CreateObject_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject
) {
    C_CreateObject_Return_t C_CreateObject_Return;

    memset (&C_CreateObject_Return, 0, sizeof(C_CreateObject_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_CreateObject_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phObject_storage = { 0 };
    C_CreateObject_Return.phObject = der_put_ulong(phObject_storage, *phObject);


    // END OF PACKING

    pack_target->derlen = der_pack(C_CreateObject_Return_packer,
                                  (const dercursor *) &C_CreateObject_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_CreateObject_Return_packer,
             (const dercursor *) &C_CreateObject_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Decrypt_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* ulEncryptedDataLen,
        const CK_ULONG* pulDataLen
) {
    C_Decrypt_Call_t C_Decrypt_Call;

    memset (&C_Decrypt_Call, 0, sizeof(C_Decrypt_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Decrypt_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pEncryptedData (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedData_innerlist = NULL;
    size_t pEncryptedData_length = 0;
    CK_RV pEncryptedData_status = der_put_CK_BYTE_ARRAY(
            pEncryptedData,
            ulEncryptedDataLen,
            &pEncryptedData_innerlist,
            &pEncryptedData_length,
            ByteArray_packer);

    if (pEncryptedData_status != CKR_OK)
        return pEncryptedData_status;

    C_Decrypt_Call.pEncryptedData.derptr = pEncryptedData_innerlist;
    C_Decrypt_Call.pEncryptedData.derlen = pEncryptedData_length;


    // PACKING ulEncryptedDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulEncryptedDataLen_storage = { 0 };
    C_Decrypt_Call.ulEncryptedDataLen = der_put_ulong(ulEncryptedDataLen_storage, *ulEncryptedDataLen);


    // PACKING pulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDataLen_storage = { 0 };
    C_Decrypt_Call.pulDataLen = der_put_ulong(pulDataLen_storage, *pulDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Decrypt_Call_packer,
                                  (const dercursor *) &C_Decrypt_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Decrypt_Call_packer,
             (const dercursor *) &C_Decrypt_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Decrypt_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pData,
        const CK_ULONG* pulDataLen
) {
    C_Decrypt_Return_t C_Decrypt_Return;

    memset (&C_Decrypt_Return, 0, sizeof(C_Decrypt_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Decrypt_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            pulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_Decrypt_Return.pData.derptr = pData_innerlist;
    C_Decrypt_Return.pData.derlen = pData_length;


    // PACKING pulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDataLen_storage = { 0 };
    C_Decrypt_Return.pulDataLen = der_put_ulong(pulDataLen_storage, *pulDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Decrypt_Return_packer,
                                  (const dercursor *) &C_Decrypt_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Decrypt_Return_packer,
             (const dercursor *) &C_Decrypt_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptDigestUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
) {
    C_DecryptDigestUpdate_Call_t C_DecryptDigestUpdate_Call;

    memset (&C_DecryptDigestUpdate_Call, 0, sizeof(C_DecryptDigestUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DecryptDigestUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            ulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_DecryptDigestUpdate_Call.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_DecryptDigestUpdate_Call.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING ulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulEncryptedPartLen_storage = { 0 };
    C_DecryptDigestUpdate_Call.ulEncryptedPartLen = der_put_ulong(ulEncryptedPartLen_storage, *ulEncryptedPartLen);


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptDigestUpdate_Call.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptDigestUpdate_Call_packer,
                                  (const dercursor *) &C_DecryptDigestUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptDigestUpdate_Call_packer,
             (const dercursor *) &C_DecryptDigestUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptDigestUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
) {
    C_DecryptDigestUpdate_Return_t C_DecryptDigestUpdate_Return;

    memset (&C_DecryptDigestUpdate_Return, 0, sizeof(C_DecryptDigestUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DecryptDigestUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            pulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_DecryptDigestUpdate_Return.pPart.derptr = pPart_innerlist;
    C_DecryptDigestUpdate_Return.pPart.derlen = pPart_length;


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptDigestUpdate_Return.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptDigestUpdate_Return_packer,
                                  (const dercursor *) &C_DecryptDigestUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptDigestUpdate_Return_packer,
             (const dercursor *) &C_DecryptDigestUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulLastPartLen
) {
    C_DecryptFinal_Call_t C_DecryptFinal_Call;

    memset (&C_DecryptFinal_Call, 0, sizeof(C_DecryptFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DecryptFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pulLastPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulLastPartLen_storage = { 0 };
    C_DecryptFinal_Call.pulLastPartLen = der_put_ulong(pulLastPartLen_storage, *pulLastPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptFinal_Call_packer,
                                  (const dercursor *) &C_DecryptFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptFinal_Call_packer,
             (const dercursor *) &C_DecryptFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pLastPart,
        const CK_ULONG* pulLastPartLen
) {
    C_DecryptFinal_Return_t C_DecryptFinal_Return;

    memset (&C_DecryptFinal_Return, 0, sizeof(C_DecryptFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DecryptFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pLastPart (type CK_BYTE_ARRAY)



    uint8_t *pLastPart_innerlist = NULL;
    size_t pLastPart_length = 0;
    CK_RV pLastPart_status = der_put_CK_BYTE_ARRAY(
            pLastPart,
            pulLastPartLen,
            &pLastPart_innerlist,
            &pLastPart_length,
            ByteArray_packer);

    if (pLastPart_status != CKR_OK)
        return pLastPart_status;

    C_DecryptFinal_Return.pLastPart.derptr = pLastPart_innerlist;
    C_DecryptFinal_Return.pLastPart.derlen = pLastPart_length;


    // PACKING pulLastPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulLastPartLen_storage = { 0 };
    C_DecryptFinal_Return.pulLastPartLen = der_put_ulong(pulLastPartLen_storage, *pulLastPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptFinal_Return_packer,
                                  (const dercursor *) &C_DecryptFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptFinal_Return_packer,
             (const dercursor *) &C_DecryptFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
) {
    C_DecryptInit_Call_t C_DecryptInit_Call;

    memset (&C_DecryptInit_Call, 0, sizeof(C_DecryptInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DecryptInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_DecryptInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_DecryptInit_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptInit_Call_packer,
                                  (const dercursor *) &C_DecryptInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptInit_Call_packer,
             (const dercursor *) &C_DecryptInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_DecryptInit_Return_t C_DecryptInit_Return;

    memset (&C_DecryptInit_Return, 0, sizeof(C_DecryptInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DecryptInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptInit_Return_packer,
                                  (const dercursor *) &C_DecryptInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptInit_Return_packer,
             (const dercursor *) &C_DecryptInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
) {
    C_DecryptUpdate_Call_t C_DecryptUpdate_Call;

    memset (&C_DecryptUpdate_Call, 0, sizeof(C_DecryptUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DecryptUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            ulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_DecryptUpdate_Call.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_DecryptUpdate_Call.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING ulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulEncryptedPartLen_storage = { 0 };
    C_DecryptUpdate_Call.ulEncryptedPartLen = der_put_ulong(ulEncryptedPartLen_storage, *ulEncryptedPartLen);


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptUpdate_Call.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptUpdate_Call_packer,
                                  (const dercursor *) &C_DecryptUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptUpdate_Call_packer,
             (const dercursor *) &C_DecryptUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
) {
    C_DecryptUpdate_Return_t C_DecryptUpdate_Return;

    memset (&C_DecryptUpdate_Return, 0, sizeof(C_DecryptUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DecryptUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            pulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_DecryptUpdate_Return.pPart.derptr = pPart_innerlist;
    C_DecryptUpdate_Return.pPart.derlen = pPart_length;


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptUpdate_Return.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptUpdate_Return_packer,
                                  (const dercursor *) &C_DecryptUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptUpdate_Return_packer,
             (const dercursor *) &C_DecryptUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptVerifyUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* ulEncryptedPartLen,
        const CK_ULONG* pulPartLen
) {
    C_DecryptVerifyUpdate_Call_t C_DecryptVerifyUpdate_Call;

    memset (&C_DecryptVerifyUpdate_Call, 0, sizeof(C_DecryptVerifyUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DecryptVerifyUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            ulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_DecryptVerifyUpdate_Call.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_DecryptVerifyUpdate_Call.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING ulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulEncryptedPartLen_storage = { 0 };
    C_DecryptVerifyUpdate_Call.ulEncryptedPartLen = der_put_ulong(ulEncryptedPartLen_storage, *ulEncryptedPartLen);


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptVerifyUpdate_Call.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptVerifyUpdate_Call_packer,
                                  (const dercursor *) &C_DecryptVerifyUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptVerifyUpdate_Call_packer,
             (const dercursor *) &C_DecryptVerifyUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DecryptVerifyUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pPart,
        const CK_ULONG* pulPartLen
) {
    C_DecryptVerifyUpdate_Return_t C_DecryptVerifyUpdate_Return;

    memset (&C_DecryptVerifyUpdate_Return, 0, sizeof(C_DecryptVerifyUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DecryptVerifyUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            pulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_DecryptVerifyUpdate_Return.pPart.derptr = pPart_innerlist;
    C_DecryptVerifyUpdate_Return.pPart.derlen = pPart_length;


    // PACKING pulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulPartLen_storage = { 0 };
    C_DecryptVerifyUpdate_Return.pulPartLen = der_put_ulong(pulPartLen_storage, *pulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DecryptVerifyUpdate_Return_packer,
                                  (const dercursor *) &C_DecryptVerifyUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DecryptVerifyUpdate_Return_packer,
             (const dercursor *) &C_DecryptVerifyUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DeriveKey_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hBaseKey,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulAttributeCount
) {
    C_DeriveKey_Call_t C_DeriveKey_Call;

    memset (&C_DeriveKey_Call, 0, sizeof(C_DeriveKey_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DeriveKey_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_DeriveKey_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hBaseKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hBaseKey_storage = { 0 };
    C_DeriveKey_Call.hBaseKey = der_put_ulong(hBaseKey_storage, *hBaseKey);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulAttributeCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_DeriveKey_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_DeriveKey_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulAttributeCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulAttributeCount_storage = { 0 };
    C_DeriveKey_Call.ulAttributeCount = der_put_ulong(ulAttributeCount_storage, *ulAttributeCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DeriveKey_Call_packer,
                                  (const dercursor *) &C_DeriveKey_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DeriveKey_Call_packer,
             (const dercursor *) &C_DeriveKey_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DeriveKey_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
) {
    C_DeriveKey_Return_t C_DeriveKey_Return;

    memset (&C_DeriveKey_Return, 0, sizeof(C_DeriveKey_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DeriveKey_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phKey_storage = { 0 };
    C_DeriveKey_Return.phKey = der_put_ulong(phKey_storage, *phKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DeriveKey_Return_packer,
                                  (const dercursor *) &C_DeriveKey_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DeriveKey_Return_packer,
             (const dercursor *) &C_DeriveKey_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DestroyObject_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject
) {
    C_DestroyObject_Call_t C_DestroyObject_Call;

    memset (&C_DestroyObject_Call, 0, sizeof(C_DestroyObject_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DestroyObject_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hObject_storage = { 0 };
    C_DestroyObject_Call.hObject = der_put_ulong(hObject_storage, *hObject);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DestroyObject_Call_packer,
                                  (const dercursor *) &C_DestroyObject_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DestroyObject_Call_packer,
             (const dercursor *) &C_DestroyObject_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DestroyObject_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_DestroyObject_Return_t C_DestroyObject_Return;

    memset (&C_DestroyObject_Return, 0, sizeof(C_DestroyObject_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DestroyObject_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DestroyObject_Return_packer,
                                  (const dercursor *) &C_DestroyObject_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DestroyObject_Return_packer,
             (const dercursor *) &C_DestroyObject_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Digest_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulDigestLen
) {
    C_Digest_Call_t C_Digest_Call;

    memset (&C_Digest_Call, 0, sizeof(C_Digest_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Digest_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            ulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_Digest_Call.pData.derptr = pData_innerlist;
    C_Digest_Call.pData.derlen = pData_length;


    // PACKING ulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulDataLen_storage = { 0 };
    C_Digest_Call.ulDataLen = der_put_ulong(ulDataLen_storage, *ulDataLen);


    // PACKING pulDigestLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDigestLen_storage = { 0 };
    C_Digest_Call.pulDigestLen = der_put_ulong(pulDigestLen_storage, *pulDigestLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Digest_Call_packer,
                                  (const dercursor *) &C_Digest_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Digest_Call_packer,
             (const dercursor *) &C_Digest_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Digest_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pDigest,
        const CK_ULONG* pulDigestLen
) {
    C_Digest_Return_t C_Digest_Return;

    memset (&C_Digest_Return, 0, sizeof(C_Digest_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Digest_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pDigest (type CK_BYTE_ARRAY)



    uint8_t *pDigest_innerlist = NULL;
    size_t pDigest_length = 0;
    CK_RV pDigest_status = der_put_CK_BYTE_ARRAY(
            pDigest,
            pulDigestLen,
            &pDigest_innerlist,
            &pDigest_length,
            ByteArray_packer);

    if (pDigest_status != CKR_OK)
        return pDigest_status;

    C_Digest_Return.pDigest.derptr = pDigest_innerlist;
    C_Digest_Return.pDigest.derlen = pDigest_length;


    // PACKING pulDigestLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDigestLen_storage = { 0 };
    C_Digest_Return.pulDigestLen = der_put_ulong(pulDigestLen_storage, *pulDigestLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Digest_Return_packer,
                                  (const dercursor *) &C_Digest_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Digest_Return_packer,
             (const dercursor *) &C_Digest_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestEncryptUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_DigestEncryptUpdate_Call_t C_DigestEncryptUpdate_Call;

    memset (&C_DigestEncryptUpdate_Call, 0, sizeof(C_DigestEncryptUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DigestEncryptUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_DigestEncryptUpdate_Call.pPart.derptr = pPart_innerlist;
    C_DigestEncryptUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_DigestEncryptUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_DigestEncryptUpdate_Call.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestEncryptUpdate_Call_packer,
                                  (const dercursor *) &C_DigestEncryptUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestEncryptUpdate_Call_packer,
             (const dercursor *) &C_DigestEncryptUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestEncryptUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_DigestEncryptUpdate_Return_t C_DigestEncryptUpdate_Return;

    memset (&C_DigestEncryptUpdate_Return, 0, sizeof(C_DigestEncryptUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DigestEncryptUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            pulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_DigestEncryptUpdate_Return.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_DigestEncryptUpdate_Return.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_DigestEncryptUpdate_Return.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestEncryptUpdate_Return_packer,
                                  (const dercursor *) &C_DigestEncryptUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestEncryptUpdate_Return_packer,
             (const dercursor *) &C_DigestEncryptUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulDigestLen
) {
    C_DigestFinal_Call_t C_DigestFinal_Call;

    memset (&C_DigestFinal_Call, 0, sizeof(C_DigestFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DigestFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pulDigestLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDigestLen_storage = { 0 };
    C_DigestFinal_Call.pulDigestLen = der_put_ulong(pulDigestLen_storage, *pulDigestLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestFinal_Call_packer,
                                  (const dercursor *) &C_DigestFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestFinal_Call_packer,
             (const dercursor *) &C_DigestFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pDigest,
        const CK_ULONG* pulDigestLen
) {
    C_DigestFinal_Return_t C_DigestFinal_Return;

    memset (&C_DigestFinal_Return, 0, sizeof(C_DigestFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DigestFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pDigest (type CK_BYTE_ARRAY)



    uint8_t *pDigest_innerlist = NULL;
    size_t pDigest_length = 0;
    CK_RV pDigest_status = der_put_CK_BYTE_ARRAY(
            pDigest,
            pulDigestLen,
            &pDigest_innerlist,
            &pDigest_length,
            ByteArray_packer);

    if (pDigest_status != CKR_OK)
        return pDigest_status;

    C_DigestFinal_Return.pDigest.derptr = pDigest_innerlist;
    C_DigestFinal_Return.pDigest.derlen = pDigest_length;


    // PACKING pulDigestLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDigestLen_storage = { 0 };
    C_DigestFinal_Return.pulDigestLen = der_put_ulong(pulDigestLen_storage, *pulDigestLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestFinal_Return_packer,
                                  (const dercursor *) &C_DigestFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestFinal_Return_packer,
             (const dercursor *) &C_DigestFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism
) {
    C_DigestInit_Call_t C_DigestInit_Call;

    memset (&C_DigestInit_Call, 0, sizeof(C_DigestInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DigestInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_DigestInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestInit_Call_packer,
                                  (const dercursor *) &C_DigestInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestInit_Call_packer,
             (const dercursor *) &C_DigestInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_DigestInit_Return_t C_DigestInit_Return;

    memset (&C_DigestInit_Return, 0, sizeof(C_DigestInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DigestInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestInit_Return_packer,
                                  (const dercursor *) &C_DigestInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestInit_Return_packer,
             (const dercursor *) &C_DigestInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestKey_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hKey
) {
    C_DigestKey_Call_t C_DigestKey_Call;

    memset (&C_DigestKey_Call, 0, sizeof(C_DigestKey_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DigestKey_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_DigestKey_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestKey_Call_packer,
                                  (const dercursor *) &C_DigestKey_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestKey_Call_packer,
             (const dercursor *) &C_DigestKey_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestKey_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_DigestKey_Return_t C_DigestKey_Return;

    memset (&C_DigestKey_Return, 0, sizeof(C_DigestKey_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DigestKey_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestKey_Return_packer,
                                  (const dercursor *) &C_DigestKey_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestKey_Return_packer,
             (const dercursor *) &C_DigestKey_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
) {
    C_DigestUpdate_Call_t C_DigestUpdate_Call;

    memset (&C_DigestUpdate_Call, 0, sizeof(C_DigestUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_DigestUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_DigestUpdate_Call.pPart.derptr = pPart_innerlist;
    C_DigestUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_DigestUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestUpdate_Call_packer,
                                  (const dercursor *) &C_DigestUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestUpdate_Call_packer,
             (const dercursor *) &C_DigestUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_DigestUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_DigestUpdate_Return_t C_DigestUpdate_Return;

    memset (&C_DigestUpdate_Return, 0, sizeof(C_DigestUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_DigestUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_DigestUpdate_Return_packer,
                                  (const dercursor *) &C_DigestUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_DigestUpdate_Return_packer,
             (const dercursor *) &C_DigestUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Encrypt_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulEncryptedDataLen
) {
    C_Encrypt_Call_t C_Encrypt_Call;

    memset (&C_Encrypt_Call, 0, sizeof(C_Encrypt_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Encrypt_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            ulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_Encrypt_Call.pData.derptr = pData_innerlist;
    C_Encrypt_Call.pData.derlen = pData_length;


    // PACKING ulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulDataLen_storage = { 0 };
    C_Encrypt_Call.ulDataLen = der_put_ulong(ulDataLen_storage, *ulDataLen);


    // PACKING pulEncryptedDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedDataLen_storage = { 0 };
    C_Encrypt_Call.pulEncryptedDataLen = der_put_ulong(pulEncryptedDataLen_storage, *pulEncryptedDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Encrypt_Call_packer,
                                  (const dercursor *) &C_Encrypt_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Encrypt_Call_packer,
             (const dercursor *) &C_Encrypt_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Encrypt_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* pulEncryptedDataLen
) {
    C_Encrypt_Return_t C_Encrypt_Return;

    memset (&C_Encrypt_Return, 0, sizeof(C_Encrypt_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Encrypt_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pEncryptedData (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedData_innerlist = NULL;
    size_t pEncryptedData_length = 0;
    CK_RV pEncryptedData_status = der_put_CK_BYTE_ARRAY(
            pEncryptedData,
            pulEncryptedDataLen,
            &pEncryptedData_innerlist,
            &pEncryptedData_length,
            ByteArray_packer);

    if (pEncryptedData_status != CKR_OK)
        return pEncryptedData_status;

    C_Encrypt_Return.pEncryptedData.derptr = pEncryptedData_innerlist;
    C_Encrypt_Return.pEncryptedData.derlen = pEncryptedData_length;


    // PACKING pulEncryptedDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedDataLen_storage = { 0 };
    C_Encrypt_Return.pulEncryptedDataLen = der_put_ulong(pulEncryptedDataLen_storage, *pulEncryptedDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Encrypt_Return_packer,
                                  (const dercursor *) &C_Encrypt_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Encrypt_Return_packer,
             (const dercursor *) &C_Encrypt_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulEncryptedDataLen
) {
    C_EncryptFinal_Call_t C_EncryptFinal_Call;

    memset (&C_EncryptFinal_Call, 0, sizeof(C_EncryptFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_EncryptFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pulEncryptedDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedDataLen_storage = { 0 };
    C_EncryptFinal_Call.pulEncryptedDataLen = der_put_ulong(pulEncryptedDataLen_storage, *pulEncryptedDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptFinal_Call_packer,
                                  (const dercursor *) &C_EncryptFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptFinal_Call_packer,
             (const dercursor *) &C_EncryptFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedData,
        const CK_ULONG* pulEncryptedDataLen
) {
    C_EncryptFinal_Return_t C_EncryptFinal_Return;

    memset (&C_EncryptFinal_Return, 0, sizeof(C_EncryptFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_EncryptFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pEncryptedData (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedData_innerlist = NULL;
    size_t pEncryptedData_length = 0;
    CK_RV pEncryptedData_status = der_put_CK_BYTE_ARRAY(
            pEncryptedData,
            pulEncryptedDataLen,
            &pEncryptedData_innerlist,
            &pEncryptedData_length,
            ByteArray_packer);

    if (pEncryptedData_status != CKR_OK)
        return pEncryptedData_status;

    C_EncryptFinal_Return.pEncryptedData.derptr = pEncryptedData_innerlist;
    C_EncryptFinal_Return.pEncryptedData.derlen = pEncryptedData_length;


    // PACKING pulEncryptedDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedDataLen_storage = { 0 };
    C_EncryptFinal_Return.pulEncryptedDataLen = der_put_ulong(pulEncryptedDataLen_storage, *pulEncryptedDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptFinal_Return_packer,
                                  (const dercursor *) &C_EncryptFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptFinal_Return_packer,
             (const dercursor *) &C_EncryptFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
) {
    C_EncryptInit_Call_t C_EncryptInit_Call;

    memset (&C_EncryptInit_Call, 0, sizeof(C_EncryptInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_EncryptInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_EncryptInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_EncryptInit_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptInit_Call_packer,
                                  (const dercursor *) &C_EncryptInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptInit_Call_packer,
             (const dercursor *) &C_EncryptInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_EncryptInit_Return_t C_EncryptInit_Return;

    memset (&C_EncryptInit_Return, 0, sizeof(C_EncryptInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_EncryptInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptInit_Return_packer,
                                  (const dercursor *) &C_EncryptInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptInit_Return_packer,
             (const dercursor *) &C_EncryptInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_EncryptUpdate_Call_t C_EncryptUpdate_Call;

    memset (&C_EncryptUpdate_Call, 0, sizeof(C_EncryptUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_EncryptUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_EncryptUpdate_Call.pPart.derptr = pPart_innerlist;
    C_EncryptUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_EncryptUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_EncryptUpdate_Call.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptUpdate_Call_packer,
                                  (const dercursor *) &C_EncryptUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptUpdate_Call_packer,
             (const dercursor *) &C_EncryptUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_EncryptUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_EncryptUpdate_Return_t C_EncryptUpdate_Return;

    memset (&C_EncryptUpdate_Return, 0, sizeof(C_EncryptUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_EncryptUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            pulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_EncryptUpdate_Return.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_EncryptUpdate_Return.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_EncryptUpdate_Return.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_EncryptUpdate_Return_packer,
                                  (const dercursor *) &C_EncryptUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_EncryptUpdate_Return_packer,
             (const dercursor *) &C_EncryptUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Finalize_Call(
        dercursor* pack_target,
        const CK_VOID* pReserved
) {
    C_Finalize_Call_t C_Finalize_Call;

    memset (&C_Finalize_Call, 0, sizeof(C_Finalize_Call));

    // BEGIN OF PACKING


    // PACKING pReserved (type CK_VOID_PTR)


    C_Finalize_Call.pReserved.null = der_put_CK_VOID_PTR(pReserved);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Finalize_Call_packer,
                                  (const dercursor *) &C_Finalize_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Finalize_Call_packer,
             (const dercursor *) &C_Finalize_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Finalize_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        ANY pReserved
) {
    C_Finalize_Return_t C_Finalize_Return;

    memset (&C_Finalize_Return, 0, sizeof(C_Finalize_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Finalize_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pReserved (type ANY)


    // TODO: finish this in case not null (ANY pReserved)

    C_Finalize_Return.pReserved = der_null;



    // END OF PACKING

    pack_target->derlen = der_pack(C_Finalize_Return_packer,
                                  (const dercursor *) &C_Finalize_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Finalize_Return_packer,
             (const dercursor *) &C_Finalize_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjects_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* ulMaxObjectCount
) {
    C_FindObjects_Call_t C_FindObjects_Call;

    memset (&C_FindObjects_Call, 0, sizeof(C_FindObjects_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_FindObjects_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING ulMaxObjectCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulMaxObjectCount_storage = { 0 };
    C_FindObjects_Call.ulMaxObjectCount = der_put_ulong(ulMaxObjectCount_storage, *ulMaxObjectCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjects_Call_packer,
                                  (const dercursor *) &C_FindObjects_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjects_Call_packer,
             (const dercursor *) &C_FindObjects_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjects_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phObject,
        const CK_ULONG* pulObjectCount
) {
    C_FindObjects_Return_t C_FindObjects_Return;

    memset (&C_FindObjects_Return, 0, sizeof(C_FindObjects_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_FindObjects_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phObject_storage = { 0 };
    C_FindObjects_Return.phObject = der_put_ulong(phObject_storage, *phObject);


    // PACKING pulObjectCount (type CK_ULONG_PTR)


    der_buf_ulong_t pulObjectCount_storage = { 0 };
    C_FindObjects_Return.pulObjectCount = der_put_ulong(pulObjectCount_storage, *pulObjectCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjects_Return_packer,
                                  (const dercursor *) &C_FindObjects_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjects_Return_packer,
             (const dercursor *) &C_FindObjects_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjectsFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_FindObjectsFinal_Call_t C_FindObjectsFinal_Call;

    memset (&C_FindObjectsFinal_Call, 0, sizeof(C_FindObjectsFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_FindObjectsFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjectsFinal_Call_packer,
                                  (const dercursor *) &C_FindObjectsFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjectsFinal_Call_packer,
             (const dercursor *) &C_FindObjectsFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjectsFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_FindObjectsFinal_Return_t C_FindObjectsFinal_Return;

    memset (&C_FindObjectsFinal_Return, 0, sizeof(C_FindObjectsFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_FindObjectsFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjectsFinal_Return_packer,
                                  (const dercursor *) &C_FindObjectsFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjectsFinal_Return_packer,
             (const dercursor *) &C_FindObjectsFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjectsInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_FindObjectsInit_Call_t C_FindObjectsInit_Call;

    memset (&C_FindObjectsInit_Call, 0, sizeof(C_FindObjectsInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_FindObjectsInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_FindObjectsInit_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_FindObjectsInit_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_FindObjectsInit_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjectsInit_Call_packer,
                                  (const dercursor *) &C_FindObjectsInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjectsInit_Call_packer,
             (const dercursor *) &C_FindObjectsInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_FindObjectsInit_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_ATTRIBUTE* pTemplate
) {
    C_FindObjectsInit_Return_t C_FindObjectsInit_Return;

    memset (&C_FindObjectsInit_Return, 0, sizeof(C_FindObjectsInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_FindObjectsInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            (sizeof(pTemplate) / sizeof(CK_ATTRIBUTE)),
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_FindObjectsInit_Return.pTemplate.wire.derptr = pTemplate_innerlist;
    C_FindObjectsInit_Return.pTemplate.wire.derlen = pTemplate_length;


    // END OF PACKING

    pack_target->derlen = der_pack(C_FindObjectsInit_Return_packer,
                                  (const dercursor *) &C_FindObjectsInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_FindObjectsInit_Return_packer,
             (const dercursor *) &C_FindObjectsInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateKey_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_GenerateKey_Call_t C_GenerateKey_Call;

    memset (&C_GenerateKey_Call, 0, sizeof(C_GenerateKey_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GenerateKey_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_GenerateKey_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_GenerateKey_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_GenerateKey_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_GenerateKey_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateKey_Call_packer,
                                  (const dercursor *) &C_GenerateKey_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateKey_Call_packer,
             (const dercursor *) &C_GenerateKey_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateKey_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
) {
    C_GenerateKey_Return_t C_GenerateKey_Return;

    memset (&C_GenerateKey_Return, 0, sizeof(C_GenerateKey_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GenerateKey_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phKey_storage = { 0 };
    C_GenerateKey_Return.phKey = der_put_ulong(phKey_storage, *phKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateKey_Return_packer,
                                  (const dercursor *) &C_GenerateKey_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateKey_Return_packer,
             (const dercursor *) &C_GenerateKey_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateKeyPair_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_ATTRIBUTE* pPublicKeyTemplate,
        const CK_ULONG* ulPublicKeyAttributeCount,
        const CK_ATTRIBUTE* pPrivateKeyTemplate,
        const CK_ULONG* ulPrivateKeyAttributeCount
) {
    C_GenerateKeyPair_Call_t C_GenerateKeyPair_Call;

    memset (&C_GenerateKeyPair_Call, 0, sizeof(C_GenerateKeyPair_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GenerateKeyPair_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_GenerateKeyPair_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING pPublicKeyTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pPublicKeyTemplate_innerlist = NULL;
    size_t pPublicKeyTemplate_length = 0;
    CK_RV pPublicKeyTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pPublicKeyTemplate,
            *ulPublicKeyAttributeCount,
            &pPublicKeyTemplate_innerlist,
            &pPublicKeyTemplate_length);

    if (pPublicKeyTemplate_status != CKR_OK)
        return pPublicKeyTemplate_status;

    C_GenerateKeyPair_Call.pPublicKeyTemplate.wire.derptr = pPublicKeyTemplate_innerlist;
    C_GenerateKeyPair_Call.pPublicKeyTemplate.wire.derlen = pPublicKeyTemplate_length;


    // PACKING ulPublicKeyAttributeCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulPublicKeyAttributeCount_storage = { 0 };
    C_GenerateKeyPair_Call.ulPublicKeyAttributeCount = der_put_ulong(ulPublicKeyAttributeCount_storage, *ulPublicKeyAttributeCount);


    // PACKING pPrivateKeyTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pPrivateKeyTemplate_innerlist = NULL;
    size_t pPrivateKeyTemplate_length = 0;
    CK_RV pPrivateKeyTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pPrivateKeyTemplate,
            *ulPrivateKeyAttributeCount,
            &pPrivateKeyTemplate_innerlist,
            &pPrivateKeyTemplate_length);

    if (pPrivateKeyTemplate_status != CKR_OK)
        return pPrivateKeyTemplate_status;

    C_GenerateKeyPair_Call.pPrivateKeyTemplate.wire.derptr = pPrivateKeyTemplate_innerlist;
    C_GenerateKeyPair_Call.pPrivateKeyTemplate.wire.derlen = pPrivateKeyTemplate_length;


    // PACKING ulPrivateKeyAttributeCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulPrivateKeyAttributeCount_storage = { 0 };
    C_GenerateKeyPair_Call.ulPrivateKeyAttributeCount = der_put_ulong(ulPrivateKeyAttributeCount_storage, *ulPrivateKeyAttributeCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateKeyPair_Call_packer,
                                  (const dercursor *) &C_GenerateKeyPair_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateKeyPair_Call_packer,
             (const dercursor *) &C_GenerateKeyPair_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateKeyPair_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phPublicKey,
        const CK_OBJECT_HANDLE* phPrivateKey
) {
    C_GenerateKeyPair_Return_t C_GenerateKeyPair_Return;

    memset (&C_GenerateKeyPair_Return, 0, sizeof(C_GenerateKeyPair_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GenerateKeyPair_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phPublicKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phPublicKey_storage = { 0 };
    C_GenerateKeyPair_Return.phPublicKey = der_put_ulong(phPublicKey_storage, *phPublicKey);


    // PACKING phPrivateKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phPrivateKey_storage = { 0 };
    C_GenerateKeyPair_Return.phPrivateKey = der_put_ulong(phPrivateKey_storage, *phPrivateKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateKeyPair_Return_packer,
                                  (const dercursor *) &C_GenerateKeyPair_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateKeyPair_Return_packer,
             (const dercursor *) &C_GenerateKeyPair_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateRandom_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* ulRandomLen
) {
    C_GenerateRandom_Call_t C_GenerateRandom_Call;

    memset (&C_GenerateRandom_Call, 0, sizeof(C_GenerateRandom_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GenerateRandom_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING ulRandomLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulRandomLen_storage = { 0 };
    C_GenerateRandom_Call.ulRandomLen = der_put_ulong(ulRandomLen_storage, *ulRandomLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateRandom_Call_packer,
                                  (const dercursor *) &C_GenerateRandom_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateRandom_Call_packer,
             (const dercursor *) &C_GenerateRandom_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GenerateRandom_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pSeed
) {
    C_GenerateRandom_Return_t C_GenerateRandom_Return;

    memset (&C_GenerateRandom_Return, 0, sizeof(C_GenerateRandom_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GenerateRandom_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSeed (type CK_BYTE_ARRAY)



    uint8_t *pSeed_innerlist = NULL;
    size_t pSeed_length = 0;
    CK_RV pSeed_status = der_put_CK_BYTE_ARRAY(
            pSeed,
            pulSeedLen,
            &pSeed_innerlist,
            &pSeed_length,
            ByteArray_packer);

    if (pSeed_status != CKR_OK)
        return pSeed_status;

    C_GenerateRandom_Return.pSeed.derptr = pSeed_innerlist;
    C_GenerateRandom_Return.pSeed.derlen = pSeed_length;


    // END OF PACKING

    pack_target->derlen = der_pack(C_GenerateRandom_Return_packer,
                                  (const dercursor *) &C_GenerateRandom_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GenerateRandom_Return_packer,
             (const dercursor *) &C_GenerateRandom_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetAttributeValue_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_GetAttributeValue_Call_t C_GetAttributeValue_Call;

    memset (&C_GetAttributeValue_Call, 0, sizeof(C_GetAttributeValue_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GetAttributeValue_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hObject_storage = { 0 };
    C_GetAttributeValue_Call.hObject = der_put_ulong(hObject_storage, *hObject);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_GetAttributeValue_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_GetAttributeValue_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_GetAttributeValue_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetAttributeValue_Call_packer,
                                  (const dercursor *) &C_GetAttributeValue_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetAttributeValue_Call_packer,
             (const dercursor *) &C_GetAttributeValue_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetAttributeValue_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_ATTRIBUTE* pTemplate
) {
    C_GetAttributeValue_Return_t C_GetAttributeValue_Return;

    memset (&C_GetAttributeValue_Return, 0, sizeof(C_GetAttributeValue_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetAttributeValue_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            (sizeof(pTemplate) / sizeof(CK_ATTRIBUTE)),
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_GetAttributeValue_Return.pTemplate.wire.derptr = pTemplate_innerlist;
    C_GetAttributeValue_Return.pTemplate.wire.derlen = pTemplate_length;


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetAttributeValue_Return_packer,
                                  (const dercursor *) &C_GetAttributeValue_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetAttributeValue_Return_packer,
             (const dercursor *) &C_GetAttributeValue_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetFunctionStatus_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_GetFunctionStatus_Call_t C_GetFunctionStatus_Call;

    memset (&C_GetFunctionStatus_Call, 0, sizeof(C_GetFunctionStatus_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GetFunctionStatus_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetFunctionStatus_Call_packer,
                                  (const dercursor *) &C_GetFunctionStatus_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetFunctionStatus_Call_packer,
             (const dercursor *) &C_GetFunctionStatus_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetFunctionStatus_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_GetFunctionStatus_Return_t C_GetFunctionStatus_Return;

    memset (&C_GetFunctionStatus_Return, 0, sizeof(C_GetFunctionStatus_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetFunctionStatus_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetFunctionStatus_Return_packer,
                                  (const dercursor *) &C_GetFunctionStatus_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetFunctionStatus_Return_packer,
             (const dercursor *) &C_GetFunctionStatus_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetInfo_Call(
        dercursor* pack_target
) {
    C_GetInfo_Call_t C_GetInfo_Call;

    memset (&C_GetInfo_Call, 0, sizeof(C_GetInfo_Call));

    // BEGIN OF PACKING


    // argument list is empty
    C_GetInfo_Call.empty = der_null;

    // END OF PACKING

    pack_target->derlen = der_pack(C_GetInfo_Call_packer,
                                  (const dercursor *) &C_GetInfo_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetInfo_Call_packer,
             (const dercursor *) &C_GetInfo_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetInfo_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_INFO* pInfo
) {
    C_GetInfo_Return_t C_GetInfo_Return;

    memset (&C_GetInfo_Return, 0, sizeof(C_GetInfo_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetInfo_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInfo (type CK_INFO_PTR)


    manufacturerID_t manufacturerID_buf = { 0 };
    libraryDescription_t libraryDescription_buf = { 0 };
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    der_buf_char_t libraryVersion_minor_buf = { 0 };
    der_buf_char_t libraryVersion_major_buf = { 0 };
    der_buf_char_t cryptokiVersion_minor_buf = { 0 };
    der_buf_char_t cryptokiVersion_major_buf = { 0 };
    CK_RV pInfo_status = der_put_CK_INFO_PTR(
            &C_GetInfo_Return.pInfo,
            pInfo,
            manufacturerID_buf,
            libraryDescription_buf,
            flags_buf,
            libraryVersion_minor_buf,
            libraryVersion_major_buf,
            cryptokiVersion_minor_buf,
            cryptokiVersion_major_buf
);
    if (pInfo_status != CKR_OK)
        return pInfo_status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetInfo_Return_packer,
                                  (const dercursor *) &C_GetInfo_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetInfo_Return_packer,
             (const dercursor *) &C_GetInfo_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetMechanismInfo_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID,
        const CK_MECHANISM_TYPE* type
) {
    C_GetMechanismInfo_Call_t C_GetMechanismInfo_Call;

    memset (&C_GetMechanismInfo_Call, 0, sizeof(C_GetMechanismInfo_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_GetMechanismInfo_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // PACKING type (type CK_MECHANISM_TYPE_PTR)


    der_buf_ulong_t type_storage = { 0 };
    C_GetMechanismInfo_Call.type = der_put_ulong(type_storage, *type);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetMechanismInfo_Call_packer,
                                  (const dercursor *) &C_GetMechanismInfo_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetMechanismInfo_Call_packer,
             (const dercursor *) &C_GetMechanismInfo_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetMechanismInfo_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_MECHANISM_INFO* pInfo
) {
    C_GetMechanismInfo_Return_t C_GetMechanismInfo_Return;

    memset (&C_GetMechanismInfo_Return, 0, sizeof(C_GetMechanismInfo_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetMechanismInfo_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInfo (type CK_MECHANISM_INFO_PTR)


    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    der_buf_ulong_t ulMaxKeySize_buf = { 0 };
    der_buf_ulong_t ulMinKeySize_buf = { 0 };

    CK_RV pInfo_status = der_put_CK_MECHANISM_INFO_PTR(
        &C_GetMechanismInfo_Return.pInfo,
        pInfo,
        flags_buf,
        ulMaxKeySize_buf,
        ulMinKeySize_buf
    );

    if (pInfo_status != CKR_OK)
        return pInfo_status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetMechanismInfo_Return_packer,
                                  (const dercursor *) &C_GetMechanismInfo_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetMechanismInfo_Return_packer,
             (const dercursor *) &C_GetMechanismInfo_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetMechanismList_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID,
        const CK_ULONG* pulCount
) {
    C_GetMechanismList_Call_t C_GetMechanismList_Call;

    memset (&C_GetMechanismList_Call, 0, sizeof(C_GetMechanismList_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_GetMechanismList_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // PACKING pulCount (type CK_ULONG_PTR)


    der_buf_ulong_t pulCount_storage = { 0 };
    C_GetMechanismList_Call.pulCount = der_put_ulong(pulCount_storage, *pulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetMechanismList_Call_packer,
                                  (const dercursor *) &C_GetMechanismList_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetMechanismList_Call_packer,
             (const dercursor *) &C_GetMechanismList_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetMechanismList_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_MECHANISM_TYPE* pMechanismList,
        const CK_ULONG* pulCount
) {
    C_GetMechanismList_Return_t C_GetMechanismList_Return;

    memset (&C_GetMechanismList_Return, 0, sizeof(C_GetMechanismList_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetMechanismList_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pMechanismList (type CK_MECHANISM_TYPE_ARRAY)


    uint8_t *pMechanismList_innerlist = NULL;
    size_t pMechanismList_length = 0;
    CK_RV pMechanismList_status = der_put_CK_MECHANISM_TYPE_ARRAY(
        pMechanismList,
        pulCount,
        &pMechanismList_innerlist,
        &pMechanismList_length,
        mechanism_type_array_packer);

    if (pMechanismList_status != CKR_OK)
        return pMechanismList_status;

    if (pMechanismList == NULL_PTR) {
        C_GetMechanismList_Return.pMechanismList.null = der_null;
        C_GetMechanismList_Return.pMechanismList.data.wire = der_empty;
    } else {
        C_GetMechanismList_Return.pMechanismList.data.wire.derptr = pMechanismList_innerlist;
        C_GetMechanismList_Return.pMechanismList.data.wire.derlen = pMechanismList_length;
        C_GetMechanismList_Return.pMechanismList.null = der_empty;
    }


    // PACKING pulCount (type CK_ULONG_PTR)


    der_buf_ulong_t pulCount_storage = { 0 };
    C_GetMechanismList_Return.pulCount = der_put_ulong(pulCount_storage, *pulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetMechanismList_Return_packer,
                                  (const dercursor *) &C_GetMechanismList_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetMechanismList_Return_packer,
             (const dercursor *) &C_GetMechanismList_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetObjectSize_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject
) {
    C_GetObjectSize_Call_t C_GetObjectSize_Call;

    memset (&C_GetObjectSize_Call, 0, sizeof(C_GetObjectSize_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GetObjectSize_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hObject_storage = { 0 };
    C_GetObjectSize_Call.hObject = der_put_ulong(hObject_storage, *hObject);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetObjectSize_Call_packer,
                                  (const dercursor *) &C_GetObjectSize_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetObjectSize_Call_packer,
             (const dercursor *) &C_GetObjectSize_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetObjectSize_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_ULONG* pulSize
) {
    C_GetObjectSize_Return_t C_GetObjectSize_Return;

    memset (&C_GetObjectSize_Return, 0, sizeof(C_GetObjectSize_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetObjectSize_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pulSize (type CK_ULONG_PTR)


    der_buf_ulong_t pulSize_storage = { 0 };
    C_GetObjectSize_Return.pulSize = der_put_ulong(pulSize_storage, *pulSize);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetObjectSize_Return_packer,
                                  (const dercursor *) &C_GetObjectSize_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetObjectSize_Return_packer,
             (const dercursor *) &C_GetObjectSize_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetOperationState_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulOperationStateLen
) {
    C_GetOperationState_Call_t C_GetOperationState_Call;

    memset (&C_GetOperationState_Call, 0, sizeof(C_GetOperationState_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GetOperationState_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pulOperationStateLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulOperationStateLen_storage = { 0 };
    C_GetOperationState_Call.pulOperationStateLen = der_put_ulong(pulOperationStateLen_storage, *pulOperationStateLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetOperationState_Call_packer,
                                  (const dercursor *) &C_GetOperationState_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetOperationState_Call_packer,
             (const dercursor *) &C_GetOperationState_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetOperationState_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pOperationState,
        const CK_ULONG* pulOperationStateLen
) {
    C_GetOperationState_Return_t C_GetOperationState_Return;

    memset (&C_GetOperationState_Return, 0, sizeof(C_GetOperationState_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetOperationState_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pOperationState (type CK_BYTE_ARRAY)



    uint8_t *pOperationState_innerlist = NULL;
    size_t pOperationState_length = 0;
    CK_RV pOperationState_status = der_put_CK_BYTE_ARRAY(
            pOperationState,
            pulOperationStateLen,
            &pOperationState_innerlist,
            &pOperationState_length,
            ByteArray_packer);

    if (pOperationState_status != CKR_OK)
        return pOperationState_status;

    C_GetOperationState_Return.pOperationState.derptr = pOperationState_innerlist;
    C_GetOperationState_Return.pOperationState.derlen = pOperationState_length;


    // PACKING pulOperationStateLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulOperationStateLen_storage = { 0 };
    C_GetOperationState_Return.pulOperationStateLen = der_put_ulong(pulOperationStateLen_storage, *pulOperationStateLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetOperationState_Return_packer,
                                  (const dercursor *) &C_GetOperationState_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetOperationState_Return_packer,
             (const dercursor *) &C_GetOperationState_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSessionInfo_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_GetSessionInfo_Call_t C_GetSessionInfo_Call;

    memset (&C_GetSessionInfo_Call, 0, sizeof(C_GetSessionInfo_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_GetSessionInfo_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSessionInfo_Call_packer,
                                  (const dercursor *) &C_GetSessionInfo_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSessionInfo_Call_packer,
             (const dercursor *) &C_GetSessionInfo_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSessionInfo_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_SESSION_INFO* pInfo
) {
    C_GetSessionInfo_Return_t C_GetSessionInfo_Return;

    memset (&C_GetSessionInfo_Return, 0, sizeof(C_GetSessionInfo_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetSessionInfo_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInfo (type CK_SESSION_INFO_PTR)


    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    der_buf_ulong_t slotID_buf = { 0 };
    der_buf_ulong_t state_buf = { 0 };
    der_buf_ulong_t ulDeviceError_buf = { 0 };

    CK_RV pInfo_status = der_put_CK_SESSION_INFO_PTR(
        &C_GetSessionInfo_Return.pInfo,
        pInfo,
        flags_buf,
        slotID_buf,
        state_buf,
        ulDeviceError_buf
    );

    if (pInfo_status != CKR_OK)
        return pInfo_status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSessionInfo_Return_packer,
                                  (const dercursor *) &C_GetSessionInfo_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSessionInfo_Return_packer,
             (const dercursor *) &C_GetSessionInfo_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSlotInfo_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID
) {
    C_GetSlotInfo_Call_t C_GetSlotInfo_Call;

    memset (&C_GetSlotInfo_Call, 0, sizeof(C_GetSlotInfo_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_GetSlotInfo_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSlotInfo_Call_packer,
                                  (const dercursor *) &C_GetSlotInfo_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSlotInfo_Call_packer,
             (const dercursor *) &C_GetSlotInfo_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSlotInfo_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_SLOT_INFO* pInfo
) {
    C_GetSlotInfo_Return_t C_GetSlotInfo_Return;

    memset (&C_GetSlotInfo_Return, 0, sizeof(C_GetSlotInfo_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetSlotInfo_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInfo (type CK_SLOT_INFO_PTR)


    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    manufacturerID_t manufacturerID_buf = { 0 };
    slotDescription_t slotDescription_buf = { 0 };
    der_buf_ulong_t firmwareVersion_minor_buf = { 0 };
    der_buf_ulong_t firmwareVersion_major_buf = { 0 };
    der_buf_ulong_t hardwareVersion_minor_buf = { 0 };
    der_buf_ulong_t hardwareVersion_major_buf = { 0 };

    CK_RV pInfo_status = der_put_CK_SLOT_INFO_PTR(
        &C_GetSlotInfo_Return.pInfo,
        pInfo,
        flags_buf,
        manufacturerID_buf,
        slotDescription_buf,
        firmwareVersion_minor_buf,
        firmwareVersion_major_buf,
        hardwareVersion_minor_buf,
        hardwareVersion_major_buf
    );

    if (pInfo_status != CKR_OK)
        return pInfo_status;



    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSlotInfo_Return_packer,
                                  (const dercursor *) &C_GetSlotInfo_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSlotInfo_Return_packer,
             (const dercursor *) &C_GetSlotInfo_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSlotList_Call(
        dercursor* pack_target,
        const CK_BBOOL* tokenPresent,
        const CK_ULONG* pulCount
) {
    C_GetSlotList_Call_t C_GetSlotList_Call;

    memset (&C_GetSlotList_Call, 0, sizeof(C_GetSlotList_Call));

    // BEGIN OF PACKING


    // PACKING tokenPresent (type CK_BBOOL_PTR)


    der_buf_bool_t tokenPresent_buf = { 0 };
    C_GetSlotList_Call.tokenPresent = der_put_CK_BBOOL_PTR(tokenPresent_buf, tokenPresent);


    // PACKING pulCount (type CK_ULONG_PTR)


    der_buf_ulong_t pulCount_storage = { 0 };
    C_GetSlotList_Call.pulCount = der_put_ulong(pulCount_storage, *pulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSlotList_Call_packer,
                                  (const dercursor *) &C_GetSlotList_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSlotList_Call_packer,
             (const dercursor *) &C_GetSlotList_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetSlotList_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_SLOT_ID* pSlotList,
        const CK_ULONG* pulCount
) {
    C_GetSlotList_Return_t C_GetSlotList_Return;

    memset (&C_GetSlotList_Return, 0, sizeof(C_GetSlotList_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetSlotList_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSlotList (type CK_SLOT_ID_ARRAY)


    uint8_t *innerlist = NULL;
    size_t length = 0;

    CK_RV status = der_put_CK_SLOT_ID_ARRAY(pSlotList, pulCount, &innerlist, &length, pSlotList_packer);
    if (status != CKR_OK)
        return status;

    C_GetSlotList_Return.pSlotList.data.wire.derptr = innerlist;
    C_GetSlotList_Return.pSlotList.data.wire.derlen = length;



    // PACKING pulCount (type CK_ULONG_PTR)


    der_buf_ulong_t pulCount_storage = { 0 };
    C_GetSlotList_Return.pulCount = der_put_ulong(pulCount_storage, *pulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetSlotList_Return_packer,
                                  (const dercursor *) &C_GetSlotList_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetSlotList_Return_packer,
             (const dercursor *) &C_GetSlotList_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetTokenInfo_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID
) {
    C_GetTokenInfo_Call_t C_GetTokenInfo_Call;

    memset (&C_GetTokenInfo_Call, 0, sizeof(C_GetTokenInfo_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_GetTokenInfo_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // END OF PACKING

    pack_target->derlen = der_pack(C_GetTokenInfo_Call_packer,
                                  (const dercursor *) &C_GetTokenInfo_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetTokenInfo_Call_packer,
             (const dercursor *) &C_GetTokenInfo_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_GetTokenInfo_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_TOKEN_INFO* pInfo
) {
    C_GetTokenInfo_Return_t C_GetTokenInfo_Return;

    memset (&C_GetTokenInfo_Return, 0, sizeof(C_GetTokenInfo_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_GetTokenInfo_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInfo (type CK_TOKEN_INFO_PTR)


    der_buf_ulong_t firmwareVersion_minor_buf = { 0 };
    der_buf_ulong_t firmwareVersion_major_buf = { 0 };
    der_buf_ulong_t hardwareVersion_minor_buf = { 0 };
    der_buf_ulong_t hardwareVersion_major_buf = { 0 };
    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    manufacturerID_t manufacturerID_buf = { 0 };
    label_t label_buf = { 0 };
    model_t model_buf = { 0 };
    serialNumber_t serialNumber_buf = { 0 };
    der_buf_ulong_t ulMaxSessionCount_buf = { 0 };
    der_buf_ulong_t ulSessionCount_buf = { 0 };
    der_buf_ulong_t ulMaxRwSessionCount_buf = { 0 };
    der_buf_ulong_t ulRwSessionCount_buf = { 0 };
    der_buf_ulong_t ulMaxPinLen_buf = { 0 };
    der_buf_ulong_t ulMinPinLen_buf = { 0 };
    der_buf_ulong_t ulTotalPublicMemory_buf = { 0 };
    der_buf_ulong_t ulFreePublicMemory_buf = { 0 };
    der_buf_ulong_t ulTotalPrivateMemory_buf = { 0 };
    der_buf_ulong_t ulFreePritvateMemory_buf = { 0 };
    utcTime_t utcTime_buf = { 0 };

    CK_RV pInfo_status = der_put_CK_TOKEN_INFO_PTR(
        &C_GetTokenInfo_Return.pInfo,
        pInfo,
        firmwareVersion_minor_buf,
        firmwareVersion_major_buf,
        hardwareVersion_minor_buf,
        hardwareVersion_major_buf,
        flags_buf,
        manufacturerID_buf,
        label_buf,
        model_buf,
        serialNumber_buf,
        ulMaxSessionCount_buf,
        ulSessionCount_buf,
        ulMaxRwSessionCount_buf,
        ulRwSessionCount_buf,
        ulMaxPinLen_buf,
        ulMinPinLen_buf,
        ulTotalPublicMemory_buf,
        ulFreePublicMemory_buf,
        ulTotalPrivateMemory_buf,
        ulFreePritvateMemory_buf,
        utcTime_buf
    );

    if (pInfo_status != CKR_OK)
        return pInfo_status;



    // END OF PACKING

    pack_target->derlen = der_pack(C_GetTokenInfo_Return_packer,
                                  (const dercursor *) &C_GetTokenInfo_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_GetTokenInfo_Return_packer,
             (const dercursor *) &C_GetTokenInfo_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_InitPIN_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_UTF8CHAR* pPin,
        const CK_ULONG* ulPinLen
) {
    C_InitPIN_Call_t C_InitPIN_Call;

    memset (&C_InitPIN_Call, 0, sizeof(C_InitPIN_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_InitPIN_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPin (type CK_UTF8CHAR_ARRAY)


    CK_RV pPin_status = der_put_CK_UTF8CHAR_ARRAY(&C_InitPIN_Call.pPin, pPin, *ulPinLen);
    if (pPin_status != CKR_OK)
        return pPin_status;


    // PACKING ulPinLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPinLen_storage = { 0 };
    C_InitPIN_Call.ulPinLen = der_put_ulong(ulPinLen_storage, *ulPinLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_InitPIN_Call_packer,
                                  (const dercursor *) &C_InitPIN_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_InitPIN_Call_packer,
             (const dercursor *) &C_InitPIN_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_InitPIN_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_InitPIN_Return_t C_InitPIN_Return;

    memset (&C_InitPIN_Return, 0, sizeof(C_InitPIN_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_InitPIN_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_InitPIN_Return_packer,
                                  (const dercursor *) &C_InitPIN_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_InitPIN_Return_packer,
             (const dercursor *) &C_InitPIN_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_InitToken_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID,
        const unsigned char* pPin,
        const CK_ULONG* ulPinLen,
        const unsigned char* pLabel
) {
    C_InitToken_Call_t C_InitToken_Call;

    memset (&C_InitToken_Call, 0, sizeof(C_InitToken_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_InitToken_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // PACKING pPin (type UTF8String)


    CK_RV pPin_status = der_put_UTF8String(&C_InitToken_Call.pPin, pPin, *ulPinLen);
    if (pPin_status != CKR_OK)
        return pPin_status;


    // PACKING ulPinLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPinLen_storage = { 0 };
    C_InitToken_Call.ulPinLen = der_put_ulong(ulPinLen_storage, *ulPinLen);


    // PACKING pLabel (type UTF8String)


    CK_RV pLabel_status = der_put_UTF8String(&C_InitToken_Call.pLabel, pLabel, (sizeof(pLabel) / sizeof(UTF8String)));
    if (pLabel_status != CKR_OK)
        return pLabel_status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_InitToken_Call_packer,
                                  (const dercursor *) &C_InitToken_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_InitToken_Call_packer,
             (const dercursor *) &C_InitToken_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_InitToken_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_InitToken_Return_t C_InitToken_Return;

    memset (&C_InitToken_Return, 0, sizeof(C_InitToken_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_InitToken_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_InitToken_Return_packer,
                                  (const dercursor *) &C_InitToken_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_InitToken_Return_packer,
             (const dercursor *) &C_InitToken_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Initialize_Call(
        dercursor* pack_target,
        const CK_C_INITIALIZE_ARGS* pInitArgs
) {
    C_Initialize_Call_t C_Initialize_Call;

    memset (&C_Initialize_Call, 0, sizeof(C_Initialize_Call));

    // BEGIN OF PACKING


    // PACKING pInitArgs (type CK_C_INITIALIZE_ARGS_PTR)


    DER_BUF_BITSTRING(flags_buf, 8 * 8);
    der_buf_bool_t createMutex_bool_buf = { 0 };
    der_buf_bool_t destroyMutex_bool_buf = { 0 };
    der_buf_bool_t lockMutex_bool_buf = { 0 };
    der_buf_bool_t unlockMutex_bool_buf = { 0 };
    CK_RV status = der_put_CK_C_INITIALIZE_ARGS_PTR(
        &C_Initialize_Call,
        pInitArgs,
        flags_buf,
        createMutex_bool_buf,
        destroyMutex_bool_buf,
        lockMutex_bool_buf,
        unlockMutex_bool_buf
);
    if (status != CKR_OK)
        return status;


    // END OF PACKING

    pack_target->derlen = der_pack(C_Initialize_Call_packer,
                                  (const dercursor *) &C_Initialize_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Initialize_Call_packer,
             (const dercursor *) &C_Initialize_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Initialize_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        ANY pInitArgs
) {
    C_Initialize_Return_t C_Initialize_Return;

    memset (&C_Initialize_Return, 0, sizeof(C_Initialize_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Initialize_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pInitArgs (type ANY)


    // TODO: finish this in case not null (ANY pInitArgs)

    C_Initialize_Return.pInitArgs = der_null;



    // END OF PACKING

    pack_target->derlen = der_pack(C_Initialize_Return_packer,
                                  (const dercursor *) &C_Initialize_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Initialize_Return_packer,
             (const dercursor *) &C_Initialize_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Login_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_USER_TYPE* userType,
        const CK_UTF8CHAR* pPin,
        const CK_ULONG* ulPinLen
) {
    C_Login_Call_t C_Login_Call;

    memset (&C_Login_Call, 0, sizeof(C_Login_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Login_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING userType (type CK_USER_TYPE_PTR)


    der_buf_ulong_t userType_storage = { 0 };
    C_Login_Call.userType = der_put_ulong(userType_storage, *userType);


    // PACKING pPin (type CK_UTF8CHAR_ARRAY)


    CK_RV pPin_status = der_put_CK_UTF8CHAR_ARRAY(&C_Login_Call.pPin, pPin, *ulPinLen);
    if (pPin_status != CKR_OK)
        return pPin_status;


    // PACKING ulPinLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPinLen_storage = { 0 };
    C_Login_Call.ulPinLen = der_put_ulong(ulPinLen_storage, *ulPinLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Login_Call_packer,
                                  (const dercursor *) &C_Login_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Login_Call_packer,
             (const dercursor *) &C_Login_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Login_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_Login_Return_t C_Login_Return;

    memset (&C_Login_Return, 0, sizeof(C_Login_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Login_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Login_Return_packer,
                                  (const dercursor *) &C_Login_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Login_Return_packer,
             (const dercursor *) &C_Login_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Logout_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession
) {
    C_Logout_Call_t C_Logout_Call;

    memset (&C_Logout_Call, 0, sizeof(C_Logout_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Logout_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Logout_Call_packer,
                                  (const dercursor *) &C_Logout_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Logout_Call_packer,
             (const dercursor *) &C_Logout_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Logout_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_Logout_Return_t C_Logout_Return;

    memset (&C_Logout_Return, 0, sizeof(C_Logout_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Logout_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Logout_Return_packer,
                                  (const dercursor *) &C_Logout_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Logout_Return_packer,
             (const dercursor *) &C_Logout_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_OpenSession_Call(
        dercursor* pack_target,
        const CK_SLOT_ID* slotID,
        const CK_FLAGS* flags,
        ANY pApplication,
        CK_NOTIFY notify
) {
    C_OpenSession_Call_t C_OpenSession_Call;

    memset (&C_OpenSession_Call, 0, sizeof(C_OpenSession_Call));

    // BEGIN OF PACKING


    // PACKING slotID (type CK_SLOT_ID_PTR)


    der_buf_ulong_t slotID_storage = { 0 };
    C_OpenSession_Call.slotID = der_put_ulong(slotID_storage, *slotID);


    // PACKING flags (type CK_FLAGS_PTR)


    DER_BUF_BITSTRING(flags_storage, 8 * 8);
    C_OpenSession_Call.flags = der_put_CK_FLAGS_PTR(flags_storage, *flags);


    // PACKING pApplication (type ANY)


    // TODO: finish this in case not null (ANY pApplication)

    C_OpenSession_Call.pApplication.null = der_null;



    // PACKING notify (type CK_NOTIFY)


    if (*notify != NULL) {
        der_buf_bool_t notify_present_buf = { 0 };
        C_OpenSession_Call.notify.present = der_put_bool(notify_present_buf, TRUE);
        C_OpenSession_Call.notify.null = der_empty;
    } else {
        C_OpenSession_Call.notify.null = der_null;
        C_OpenSession_Call.notify.present = der_empty;
    }


    // END OF PACKING

    pack_target->derlen = der_pack(C_OpenSession_Call_packer,
                                  (const dercursor *) &C_OpenSession_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_OpenSession_Call_packer,
             (const dercursor *) &C_OpenSession_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_OpenSession_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_SESSION_HANDLE* phSession
) {
    C_OpenSession_Return_t C_OpenSession_Return;

    memset (&C_OpenSession_Return, 0, sizeof(C_OpenSession_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_OpenSession_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t phSession_storage = { 0 };
    C_OpenSession_Return.phSession = der_put_ulong(phSession_storage, *phSession);


    // END OF PACKING

    pack_target->derlen = der_pack(C_OpenSession_Return_packer,
                                  (const dercursor *) &C_OpenSession_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_OpenSession_Return_packer,
             (const dercursor *) &C_OpenSession_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SeedRandom_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSeed,
        const CK_ULONG* ulSeedLen
) {
    C_SeedRandom_Call_t C_SeedRandom_Call;

    memset (&C_SeedRandom_Call, 0, sizeof(C_SeedRandom_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SeedRandom_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pSeed (type CK_BYTE_ARRAY)



    uint8_t *pSeed_innerlist = NULL;
    size_t pSeed_length = 0;
    CK_RV pSeed_status = der_put_CK_BYTE_ARRAY(
            pSeed,
            ulSeedLen,
            &pSeed_innerlist,
            &pSeed_length,
            ByteArray_packer);

    if (pSeed_status != CKR_OK)
        return pSeed_status;

    C_SeedRandom_Call.pSeed.derptr = pSeed_innerlist;
    C_SeedRandom_Call.pSeed.derlen = pSeed_length;


    // PACKING ulSeedLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulSeedLen_storage = { 0 };
    C_SeedRandom_Call.ulSeedLen = der_put_ulong(ulSeedLen_storage, *ulSeedLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SeedRandom_Call_packer,
                                  (const dercursor *) &C_SeedRandom_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SeedRandom_Call_packer,
             (const dercursor *) &C_SeedRandom_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SeedRandom_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SeedRandom_Return_t C_SeedRandom_Return;

    memset (&C_SeedRandom_Return, 0, sizeof(C_SeedRandom_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SeedRandom_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SeedRandom_Return_packer,
                                  (const dercursor *) &C_SeedRandom_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SeedRandom_Return_packer,
             (const dercursor *) &C_SeedRandom_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetAttributeValue_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_OBJECT_HANDLE* hObject,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulCount
) {
    C_SetAttributeValue_Call_t C_SetAttributeValue_Call;

    memset (&C_SetAttributeValue_Call, 0, sizeof(C_SetAttributeValue_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SetAttributeValue_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING hObject (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hObject_storage = { 0 };
    C_SetAttributeValue_Call.hObject = der_put_ulong(hObject_storage, *hObject);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_SetAttributeValue_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_SetAttributeValue_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulCount_storage = { 0 };
    C_SetAttributeValue_Call.ulCount = der_put_ulong(ulCount_storage, *ulCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetAttributeValue_Call_packer,
                                  (const dercursor *) &C_SetAttributeValue_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetAttributeValue_Call_packer,
             (const dercursor *) &C_SetAttributeValue_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetAttributeValue_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SetAttributeValue_Return_t C_SetAttributeValue_Return;

    memset (&C_SetAttributeValue_Return, 0, sizeof(C_SetAttributeValue_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SetAttributeValue_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetAttributeValue_Return_packer,
                                  (const dercursor *) &C_SetAttributeValue_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetAttributeValue_Return_packer,
             (const dercursor *) &C_SetAttributeValue_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetOperationState_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pOperationState,
        const CK_ULONG* ulOperationStateLen,
        const CK_OBJECT_HANDLE* hEncryptionKey,
        const CK_OBJECT_HANDLE* hAuthenticationKey
) {
    C_SetOperationState_Call_t C_SetOperationState_Call;

    memset (&C_SetOperationState_Call, 0, sizeof(C_SetOperationState_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SetOperationState_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pOperationState (type CK_BYTE_ARRAY)



    uint8_t *pOperationState_innerlist = NULL;
    size_t pOperationState_length = 0;
    CK_RV pOperationState_status = der_put_CK_BYTE_ARRAY(
            pOperationState,
            ulOperationStateLen,
            &pOperationState_innerlist,
            &pOperationState_length,
            ByteArray_packer);

    if (pOperationState_status != CKR_OK)
        return pOperationState_status;

    C_SetOperationState_Call.pOperationState.derptr = pOperationState_innerlist;
    C_SetOperationState_Call.pOperationState.derlen = pOperationState_length;


    // PACKING ulOperationStateLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulOperationStateLen_storage = { 0 };
    C_SetOperationState_Call.ulOperationStateLen = der_put_ulong(ulOperationStateLen_storage, *ulOperationStateLen);


    // PACKING hEncryptionKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hEncryptionKey_storage = { 0 };
    C_SetOperationState_Call.hEncryptionKey = der_put_ulong(hEncryptionKey_storage, *hEncryptionKey);


    // PACKING hAuthenticationKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hAuthenticationKey_storage = { 0 };
    C_SetOperationState_Call.hAuthenticationKey = der_put_ulong(hAuthenticationKey_storage, *hAuthenticationKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetOperationState_Call_packer,
                                  (const dercursor *) &C_SetOperationState_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetOperationState_Call_packer,
             (const dercursor *) &C_SetOperationState_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetOperationState_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SetOperationState_Return_t C_SetOperationState_Return;

    memset (&C_SetOperationState_Return, 0, sizeof(C_SetOperationState_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SetOperationState_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetOperationState_Return_packer,
                                  (const dercursor *) &C_SetOperationState_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetOperationState_Return_packer,
             (const dercursor *) &C_SetOperationState_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetPIN_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_UTF8CHAR* pOldPin,
        const CK_ULONG* ulOldLen,
        const CK_UTF8CHAR* pNewPin,
        const CK_ULONG* ulNewPin
) {
    C_SetPIN_Call_t C_SetPIN_Call;

    memset (&C_SetPIN_Call, 0, sizeof(C_SetPIN_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SetPIN_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pOldPin (type CK_UTF8CHAR_ARRAY)


    CK_RV pOldPin_status = der_put_CK_UTF8CHAR_ARRAY(&C_SetPIN_Call.pOldPin, pOldPin, *ulOldLen);
    if (pOldPin_status != CKR_OK)
        return pOldPin_status;


    // PACKING ulOldLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulOldLen_storage = { 0 };
    C_SetPIN_Call.ulOldLen = der_put_ulong(ulOldLen_storage, *ulOldLen);


    // PACKING pNewPin (type CK_UTF8CHAR_ARRAY)


    CK_RV pNewPin_status = der_put_CK_UTF8CHAR_ARRAY(&C_SetPIN_Call.pNewPin, pNewPin, *ulNewPin);
    if (pNewPin_status != CKR_OK)
        return pNewPin_status;


    // PACKING ulNewPin (type CK_ULONG_PTR)


    der_buf_ulong_t ulNewPin_storage = { 0 };
    C_SetPIN_Call.ulNewPin = der_put_ulong(ulNewPin_storage, *ulNewPin);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetPIN_Call_packer,
                                  (const dercursor *) &C_SetPIN_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetPIN_Call_packer,
             (const dercursor *) &C_SetPIN_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SetPIN_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SetPIN_Return_t C_SetPIN_Return;

    memset (&C_SetPIN_Return, 0, sizeof(C_SetPIN_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SetPIN_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SetPIN_Return_packer,
                                  (const dercursor *) &C_SetPIN_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SetPIN_Return_packer,
             (const dercursor *) &C_SetPIN_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Sign_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulSignatureLen
) {
    C_Sign_Call_t C_Sign_Call;

    memset (&C_Sign_Call, 0, sizeof(C_Sign_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Sign_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            ulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_Sign_Call.pData.derptr = pData_innerlist;
    C_Sign_Call.pData.derlen = pData_length;


    // PACKING ulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulDataLen_storage = { 0 };
    C_Sign_Call.ulDataLen = der_put_ulong(ulDataLen_storage, *ulDataLen);


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_Sign_Call.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Sign_Call_packer,
                                  (const dercursor *) &C_Sign_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Sign_Call_packer,
             (const dercursor *) &C_Sign_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Sign_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
) {
    C_Sign_Return_t C_Sign_Return;

    memset (&C_Sign_Return, 0, sizeof(C_Sign_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Sign_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            pulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_Sign_Return.pSignature.derptr = pSignature_innerlist;
    C_Sign_Return.pSignature.derlen = pSignature_length;


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_Sign_Return.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Sign_Return_packer,
                                  (const dercursor *) &C_Sign_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Sign_Return_packer,
             (const dercursor *) &C_Sign_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignEncryptUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_SignEncryptUpdate_Call_t C_SignEncryptUpdate_Call;

    memset (&C_SignEncryptUpdate_Call, 0, sizeof(C_SignEncryptUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignEncryptUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_SignEncryptUpdate_Call.pPart.derptr = pPart_innerlist;
    C_SignEncryptUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_SignEncryptUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_SignEncryptUpdate_Call.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignEncryptUpdate_Call_packer,
                                  (const dercursor *) &C_SignEncryptUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignEncryptUpdate_Call_packer,
             (const dercursor *) &C_SignEncryptUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignEncryptUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pEncryptedPart,
        const CK_ULONG* pulEncryptedPartLen
) {
    C_SignEncryptUpdate_Return_t C_SignEncryptUpdate_Return;

    memset (&C_SignEncryptUpdate_Return, 0, sizeof(C_SignEncryptUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignEncryptUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pEncryptedPart (type CK_BYTE_ARRAY)



    uint8_t *pEncryptedPart_innerlist = NULL;
    size_t pEncryptedPart_length = 0;
    CK_RV pEncryptedPart_status = der_put_CK_BYTE_ARRAY(
            pEncryptedPart,
            pulEncryptedPartLen,
            &pEncryptedPart_innerlist,
            &pEncryptedPart_length,
            ByteArray_packer);

    if (pEncryptedPart_status != CKR_OK)
        return pEncryptedPart_status;

    C_SignEncryptUpdate_Return.pEncryptedPart.derptr = pEncryptedPart_innerlist;
    C_SignEncryptUpdate_Return.pEncryptedPart.derlen = pEncryptedPart_length;


    // PACKING pulEncryptedPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulEncryptedPartLen_storage = { 0 };
    C_SignEncryptUpdate_Return.pulEncryptedPartLen = der_put_ulong(pulEncryptedPartLen_storage, *pulEncryptedPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignEncryptUpdate_Return_packer,
                                  (const dercursor *) &C_SignEncryptUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignEncryptUpdate_Return_packer,
             (const dercursor *) &C_SignEncryptUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_ULONG* pulSignatureLen
) {
    C_SignFinal_Call_t C_SignFinal_Call;

    memset (&C_SignFinal_Call, 0, sizeof(C_SignFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_SignFinal_Call.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignFinal_Call_packer,
                                  (const dercursor *) &C_SignFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignFinal_Call_packer,
             (const dercursor *) &C_SignFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
) {
    C_SignFinal_Return_t C_SignFinal_Return;

    memset (&C_SignFinal_Return, 0, sizeof(C_SignFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            pulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_SignFinal_Return.pSignature.derptr = pSignature_innerlist;
    C_SignFinal_Return.pSignature.derlen = pSignature_length;


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_SignFinal_Return.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignFinal_Return_packer,
                                  (const dercursor *) &C_SignFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignFinal_Return_packer,
             (const dercursor *) &C_SignFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
) {
    C_SignInit_Call_t C_SignInit_Call;

    memset (&C_SignInit_Call, 0, sizeof(C_SignInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_SignInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_SignInit_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignInit_Call_packer,
                                  (const dercursor *) &C_SignInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignInit_Call_packer,
             (const dercursor *) &C_SignInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SignInit_Return_t C_SignInit_Return;

    memset (&C_SignInit_Return, 0, sizeof(C_SignInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignInit_Return_packer,
                                  (const dercursor *) &C_SignInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignInit_Return_packer,
             (const dercursor *) &C_SignInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignRecover_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_ULONG* pulSignatureLen
) {
    C_SignRecover_Call_t C_SignRecover_Call;

    memset (&C_SignRecover_Call, 0, sizeof(C_SignRecover_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignRecover_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            ulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_SignRecover_Call.pData.derptr = pData_innerlist;
    C_SignRecover_Call.pData.derlen = pData_length;


    // PACKING ulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulDataLen_storage = { 0 };
    C_SignRecover_Call.ulDataLen = der_put_ulong(ulDataLen_storage, *ulDataLen);


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_SignRecover_Call.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignRecover_Call_packer,
                                  (const dercursor *) &C_SignRecover_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignRecover_Call_packer,
             (const dercursor *) &C_SignRecover_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignRecover_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pSignature,
        const CK_ULONG* pulSignatureLen
) {
    C_SignRecover_Return_t C_SignRecover_Return;

    memset (&C_SignRecover_Return, 0, sizeof(C_SignRecover_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignRecover_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            pulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_SignRecover_Return.pSignature.derptr = pSignature_innerlist;
    C_SignRecover_Return.pSignature.derlen = pSignature_length;


    // PACKING pulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulSignatureLen_storage = { 0 };
    C_SignRecover_Return.pulSignatureLen = der_put_ulong(pulSignatureLen_storage, *pulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignRecover_Return_packer,
                                  (const dercursor *) &C_SignRecover_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignRecover_Return_packer,
             (const dercursor *) &C_SignRecover_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignRecoverInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
) {
    C_SignRecoverInit_Call_t C_SignRecoverInit_Call;

    memset (&C_SignRecoverInit_Call, 0, sizeof(C_SignRecoverInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignRecoverInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_SignRecoverInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_SignRecoverInit_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignRecoverInit_Call_packer,
                                  (const dercursor *) &C_SignRecoverInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignRecoverInit_Call_packer,
             (const dercursor *) &C_SignRecoverInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignRecoverInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SignRecoverInit_Return_t C_SignRecoverInit_Return;

    memset (&C_SignRecoverInit_Return, 0, sizeof(C_SignRecoverInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignRecoverInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignRecoverInit_Return_packer,
                                  (const dercursor *) &C_SignRecoverInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignRecoverInit_Return_packer,
             (const dercursor *) &C_SignRecoverInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
) {
    C_SignUpdate_Call_t C_SignUpdate_Call;

    memset (&C_SignUpdate_Call, 0, sizeof(C_SignUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_SignUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_SignUpdate_Call.pPart.derptr = pPart_innerlist;
    C_SignUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_SignUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignUpdate_Call_packer,
                                  (const dercursor *) &C_SignUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignUpdate_Call_packer,
             (const dercursor *) &C_SignUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_SignUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_SignUpdate_Return_t C_SignUpdate_Return;

    memset (&C_SignUpdate_Return, 0, sizeof(C_SignUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_SignUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_SignUpdate_Return_packer,
                                  (const dercursor *) &C_SignUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_SignUpdate_Return_packer,
             (const dercursor *) &C_SignUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_UnwrapKey_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hUnwrappingKey,
        const CK_BYTE* pWrappedKey,
        const CK_ULONG* ulWrappedKeyLen,
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* ulAttributeCount
) {
    C_UnwrapKey_Call_t C_UnwrapKey_Call;

    memset (&C_UnwrapKey_Call, 0, sizeof(C_UnwrapKey_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_UnwrapKey_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_UnwrapKey_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hUnwrappingKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hUnwrappingKey_storage = { 0 };
    C_UnwrapKey_Call.hUnwrappingKey = der_put_ulong(hUnwrappingKey_storage, *hUnwrappingKey);


    // PACKING pWrappedKey (type CK_BYTE_ARRAY)



    uint8_t *pWrappedKey_innerlist = NULL;
    size_t pWrappedKey_length = 0;
    CK_RV pWrappedKey_status = der_put_CK_BYTE_ARRAY(
            pWrappedKey,
            ulWrappedKeyLen,
            &pWrappedKey_innerlist,
            &pWrappedKey_length,
            ByteArray_packer);

    if (pWrappedKey_status != CKR_OK)
        return pWrappedKey_status;

    C_UnwrapKey_Call.pWrappedKey.derptr = pWrappedKey_innerlist;
    C_UnwrapKey_Call.pWrappedKey.derlen = pWrappedKey_length;


    // PACKING ulWrappedKeyLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulWrappedKeyLen_storage = { 0 };
    C_UnwrapKey_Call.ulWrappedKeyLen = der_put_ulong(ulWrappedKeyLen_storage, *ulWrappedKeyLen);


    // PACKING pTemplate (type CK_ATTRIBUTE_ARRAY)


    uint8_t *pTemplate_innerlist = NULL;
    size_t pTemplate_length = 0;
    CK_RV pTemplate_status = der_put_CK_ATTRIBUTE_ARRAY(
            pTemplate,
            *ulAttributeCount,
            &pTemplate_innerlist,
            &pTemplate_length);

    if (pTemplate_status != CKR_OK)
        return pTemplate_status;

    C_UnwrapKey_Call.pTemplate.wire.derptr = pTemplate_innerlist;
    C_UnwrapKey_Call.pTemplate.wire.derlen = pTemplate_length;


    // PACKING ulAttributeCount (type CK_ULONG_PTR)


    der_buf_ulong_t ulAttributeCount_storage = { 0 };
    C_UnwrapKey_Call.ulAttributeCount = der_put_ulong(ulAttributeCount_storage, *ulAttributeCount);


    // END OF PACKING

    pack_target->derlen = der_pack(C_UnwrapKey_Call_packer,
                                  (const dercursor *) &C_UnwrapKey_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_UnwrapKey_Call_packer,
             (const dercursor *) &C_UnwrapKey_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_UnwrapKey_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_OBJECT_HANDLE* phKey
) {
    C_UnwrapKey_Return_t C_UnwrapKey_Return;

    memset (&C_UnwrapKey_Return, 0, sizeof(C_UnwrapKey_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_UnwrapKey_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING phKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t phKey_storage = { 0 };
    C_UnwrapKey_Return.phKey = der_put_ulong(phKey_storage, *phKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_UnwrapKey_Return_packer,
                                  (const dercursor *) &C_UnwrapKey_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_UnwrapKey_Return_packer,
             (const dercursor *) &C_UnwrapKey_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Verify_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pData,
        const CK_ULONG* ulDataLen,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen
) {
    C_Verify_Call_t C_Verify_Call;

    memset (&C_Verify_Call, 0, sizeof(C_Verify_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_Verify_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            ulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_Verify_Call.pData.derptr = pData_innerlist;
    C_Verify_Call.pData.derlen = pData_length;


    // PACKING ulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulDataLen_storage = { 0 };
    C_Verify_Call.ulDataLen = der_put_ulong(ulDataLen_storage, *ulDataLen);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            ulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_Verify_Call.pSignature.derptr = pSignature_innerlist;
    C_Verify_Call.pSignature.derlen = pSignature_length;


    // PACKING ulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulSignatureLen_storage = { 0 };
    C_Verify_Call.ulSignatureLen = der_put_ulong(ulSignatureLen_storage, *ulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Verify_Call_packer,
                                  (const dercursor *) &C_Verify_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Verify_Call_packer,
             (const dercursor *) &C_Verify_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_Verify_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_Verify_Return_t C_Verify_Return;

    memset (&C_Verify_Return, 0, sizeof(C_Verify_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_Verify_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_Verify_Return_packer,
                                  (const dercursor *) &C_Verify_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_Verify_Return_packer,
             (const dercursor *) &C_Verify_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyFinal_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen
) {
    C_VerifyFinal_Call_t C_VerifyFinal_Call;

    memset (&C_VerifyFinal_Call, 0, sizeof(C_VerifyFinal_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_VerifyFinal_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            ulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_VerifyFinal_Call.pSignature.derptr = pSignature_innerlist;
    C_VerifyFinal_Call.pSignature.derlen = pSignature_length;


    // PACKING ulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulSignatureLen_storage = { 0 };
    C_VerifyFinal_Call.ulSignatureLen = der_put_ulong(ulSignatureLen_storage, *ulSignatureLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyFinal_Call_packer,
                                  (const dercursor *) &C_VerifyFinal_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyFinal_Call_packer,
             (const dercursor *) &C_VerifyFinal_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyFinal_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_VerifyFinal_Return_t C_VerifyFinal_Return;

    memset (&C_VerifyFinal_Return, 0, sizeof(C_VerifyFinal_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_VerifyFinal_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyFinal_Return_packer,
                                  (const dercursor *) &C_VerifyFinal_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyFinal_Return_packer,
             (const dercursor *) &C_VerifyFinal_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyInit_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hKey
) {
    C_VerifyInit_Call_t C_VerifyInit_Call;

    memset (&C_VerifyInit_Call, 0, sizeof(C_VerifyInit_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_VerifyInit_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_VerifyInit_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_VerifyInit_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyInit_Call_packer,
                                  (const dercursor *) &C_VerifyInit_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyInit_Call_packer,
             (const dercursor *) &C_VerifyInit_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyInit_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_VerifyInit_Return_t C_VerifyInit_Return;

    memset (&C_VerifyInit_Return, 0, sizeof(C_VerifyInit_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_VerifyInit_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyInit_Return_packer,
                                  (const dercursor *) &C_VerifyInit_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyInit_Return_packer,
             (const dercursor *) &C_VerifyInit_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyRecover_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pSignature,
        const CK_ULONG* ulSignatureLen,
        const CK_ULONG* pulDataLen
) {
    C_VerifyRecover_Call_t C_VerifyRecover_Call;

    memset (&C_VerifyRecover_Call, 0, sizeof(C_VerifyRecover_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_VerifyRecover_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pSignature (type CK_BYTE_ARRAY)



    uint8_t *pSignature_innerlist = NULL;
    size_t pSignature_length = 0;
    CK_RV pSignature_status = der_put_CK_BYTE_ARRAY(
            pSignature,
            ulSignatureLen,
            &pSignature_innerlist,
            &pSignature_length,
            ByteArray_packer);

    if (pSignature_status != CKR_OK)
        return pSignature_status;

    C_VerifyRecover_Call.pSignature.derptr = pSignature_innerlist;
    C_VerifyRecover_Call.pSignature.derlen = pSignature_length;


    // PACKING ulSignatureLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulSignatureLen_storage = { 0 };
    C_VerifyRecover_Call.ulSignatureLen = der_put_ulong(ulSignatureLen_storage, *ulSignatureLen);


    // PACKING pulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDataLen_storage = { 0 };
    C_VerifyRecover_Call.pulDataLen = der_put_ulong(pulDataLen_storage, *pulDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyRecover_Call_packer,
                                  (const dercursor *) &C_VerifyRecover_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyRecover_Call_packer,
             (const dercursor *) &C_VerifyRecover_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyRecover_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pData,
        const CK_ULONG* pulDataLen
) {
    C_VerifyRecover_Return_t C_VerifyRecover_Return;

    memset (&C_VerifyRecover_Return, 0, sizeof(C_VerifyRecover_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_VerifyRecover_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pData (type CK_BYTE_ARRAY)



    uint8_t *pData_innerlist = NULL;
    size_t pData_length = 0;
    CK_RV pData_status = der_put_CK_BYTE_ARRAY(
            pData,
            pulDataLen,
            &pData_innerlist,
            &pData_length,
            ByteArray_packer);

    if (pData_status != CKR_OK)
        return pData_status;

    C_VerifyRecover_Return.pData.derptr = pData_innerlist;
    C_VerifyRecover_Return.pData.derlen = pData_length;


    // PACKING pulDataLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulDataLen_storage = { 0 };
    C_VerifyRecover_Return.pulDataLen = der_put_ulong(pulDataLen_storage, *pulDataLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyRecover_Return_packer,
                                  (const dercursor *) &C_VerifyRecover_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyRecover_Return_packer,
             (const dercursor *) &C_VerifyRecover_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyUpdate_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_BYTE* pPart,
        const CK_ULONG* ulPartLen
) {
    C_VerifyUpdate_Call_t C_VerifyUpdate_Call;

    memset (&C_VerifyUpdate_Call, 0, sizeof(C_VerifyUpdate_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_VerifyUpdate_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pPart (type CK_BYTE_ARRAY)



    uint8_t *pPart_innerlist = NULL;
    size_t pPart_length = 0;
    CK_RV pPart_status = der_put_CK_BYTE_ARRAY(
            pPart,
            ulPartLen,
            &pPart_innerlist,
            &pPart_length,
            ByteArray_packer);

    if (pPart_status != CKR_OK)
        return pPart_status;

    C_VerifyUpdate_Call.pPart.derptr = pPart_innerlist;
    C_VerifyUpdate_Call.pPart.derlen = pPart_length;


    // PACKING ulPartLen (type CK_ULONG_PTR)


    der_buf_ulong_t ulPartLen_storage = { 0 };
    C_VerifyUpdate_Call.ulPartLen = der_put_ulong(ulPartLen_storage, *ulPartLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyUpdate_Call_packer,
                                  (const dercursor *) &C_VerifyUpdate_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyUpdate_Call_packer,
             (const dercursor *) &C_VerifyUpdate_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_VerifyUpdate_Return(
        dercursor* pack_target,
        const CK_RV* retval
) {
    C_VerifyUpdate_Return_t C_VerifyUpdate_Return;

    memset (&C_VerifyUpdate_Return, 0, sizeof(C_VerifyUpdate_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_VerifyUpdate_Return.retval = der_put_ulong(retval_storage, *retval);


    // END OF PACKING

    pack_target->derlen = der_pack(C_VerifyUpdate_Return_packer,
                                  (const dercursor *) &C_VerifyUpdate_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_VerifyUpdate_Return_packer,
             (const dercursor *) &C_VerifyUpdate_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_WaitForSlotEvent_Call(
        dercursor* pack_target,
        const CK_FLAGS* flags,
        const CK_VOID* pReserved
) {
    C_WaitForSlotEvent_Call_t C_WaitForSlotEvent_Call;

    memset (&C_WaitForSlotEvent_Call, 0, sizeof(C_WaitForSlotEvent_Call));

    // BEGIN OF PACKING


    // PACKING flags (type CK_FLAGS_PTR)


    DER_BUF_BITSTRING(flags_storage, 8 * 8);
    C_WaitForSlotEvent_Call.flags = der_put_CK_FLAGS_PTR(flags_storage, *flags);


    // PACKING pReserved (type CK_VOID_PTR)


    C_WaitForSlotEvent_Call.pReserved.null = der_put_CK_VOID_PTR(pReserved);


    // END OF PACKING

    pack_target->derlen = der_pack(C_WaitForSlotEvent_Call_packer,
                                  (const dercursor *) &C_WaitForSlotEvent_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_WaitForSlotEvent_Call_packer,
             (const dercursor *) &C_WaitForSlotEvent_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_WaitForSlotEvent_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_SLOT_ID* pSlot,
        const CK_VOID* pReserved
) {
    C_WaitForSlotEvent_Return_t C_WaitForSlotEvent_Return;

    memset (&C_WaitForSlotEvent_Return, 0, sizeof(C_WaitForSlotEvent_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_WaitForSlotEvent_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pSlot (type CK_SLOT_ID_PTR)


    der_buf_ulong_t pSlot_storage = { 0 };
    C_WaitForSlotEvent_Return.pSlot = der_put_ulong(pSlot_storage, *pSlot);


    // PACKING pReserved (type CK_VOID_PTR)


    C_WaitForSlotEvent_Return.pReserved.null = der_put_CK_VOID_PTR(pReserved);


    // END OF PACKING

    pack_target->derlen = der_pack(C_WaitForSlotEvent_Return_packer,
                                  (const dercursor *) &C_WaitForSlotEvent_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_WaitForSlotEvent_Return_packer,
             (const dercursor *) &C_WaitForSlotEvent_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};



/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_WrapKey_Call(
        dercursor* pack_target,
        const CK_SESSION_HANDLE* hSession,
        const CK_MECHANISM* pMechanism,
        const CK_OBJECT_HANDLE* hWrappingKey,
        const CK_OBJECT_HANDLE* hKey,
        const CK_ULONG* pulWrappedKeyLen
) {
    C_WrapKey_Call_t C_WrapKey_Call;

    memset (&C_WrapKey_Call, 0, sizeof(C_WrapKey_Call));

    // BEGIN OF PACKING


    // PACKING hSession (type CK_SESSION_HANDLE_PTR)


    der_buf_ulong_t hSession_storage = { 0 };
    C_WrapKey_Call.hSession = der_put_ulong(hSession_storage, *hSession);


    // PACKING pMechanism (type CK_MECHANISM_PTR)


    der_buf_ulong_t mechanism_buf = { 0 };
    der_buf_ulong_t ulParameterLen_buf = { 0 };
    CK_RV pMechanism_status = der_put_CK_MECHANISM_PTR(&C_WrapKey_Call.pMechanism, pMechanism, mechanism_buf, ulParameterLen_buf);
    if (pMechanism_status != CKR_OK)
        return pMechanism_status;


    // PACKING hWrappingKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hWrappingKey_storage = { 0 };
    C_WrapKey_Call.hWrappingKey = der_put_ulong(hWrappingKey_storage, *hWrappingKey);


    // PACKING hKey (type CK_OBJECT_HANDLE_PTR)


    der_buf_ulong_t hKey_storage = { 0 };
    C_WrapKey_Call.hKey = der_put_ulong(hKey_storage, *hKey);


    // PACKING pulWrappedKeyLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulWrappedKeyLen_storage = { 0 };
    C_WrapKey_Call.pulWrappedKeyLen = der_put_ulong(pulWrappedKeyLen_storage, *pulWrappedKeyLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_WrapKey_Call_packer,
                                  (const dercursor *) &C_WrapKey_Call,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_WrapKey_Call_packer,
             (const dercursor *) &C_WrapKey_Call,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

/* if you use this function, don't forget to free(pack_target->derptr) */
CK_RV
pack_C_WrapKey_Return(
        dercursor* pack_target,
        const CK_RV* retval,
        const CK_BYTE* pWrappedKey,
        const CK_ULONG* pulWrappedKeyLen
) {
    C_WrapKey_Return_t C_WrapKey_Return;

    memset (&C_WrapKey_Return, 0, sizeof(C_WrapKey_Return));

    // BEGIN OF PACKING


    // PACKING retval (type CK_RV_PTR)


    der_buf_ulong_t retval_storage = { 0 };
    C_WrapKey_Return.retval = der_put_ulong(retval_storage, *retval);


    // PACKING pWrappedKey (type CK_BYTE_ARRAY)



    uint8_t *pWrappedKey_innerlist = NULL;
    size_t pWrappedKey_length = 0;
    CK_RV pWrappedKey_status = der_put_CK_BYTE_ARRAY(
            pWrappedKey,
            pulWrappedKeyLen,
            &pWrappedKey_innerlist,
            &pWrappedKey_length,
            ByteArray_packer);

    if (pWrappedKey_status != CKR_OK)
        return pWrappedKey_status;

    C_WrapKey_Return.pWrappedKey.derptr = pWrappedKey_innerlist;
    C_WrapKey_Return.pWrappedKey.derlen = pWrappedKey_length;


    // PACKING pulWrappedKeyLen (type CK_ULONG_PTR)


    der_buf_ulong_t pulWrappedKeyLen_storage = { 0 };
    C_WrapKey_Return.pulWrappedKeyLen = der_put_ulong(pulWrappedKeyLen_storage, *pulWrappedKeyLen);


    // END OF PACKING

    pack_target->derlen = der_pack(C_WrapKey_Return_packer,
                                  (const dercursor *) &C_WrapKey_Return,
                                  NULL);

    if (pack_target->derlen == 0)
        return CKR_KEEHIVE_DER_UNKNOWN_ERROR;

    pack_target->derptr = malloc(pack_target->derlen);
    if (pack_target->derptr == NULL)
        return CKR_KEEHIVE_MEMORY_ERROR;

    der_pack(C_WrapKey_Return_packer,
             (const dercursor *) &C_WrapKey_Return,
             pack_target->derptr + pack_target->derlen);

    return CKR_OK;
};

