#include <stdlib.h>
#include <assert.h>
#include "derput.h"
#include "returncodes.h"
#include "convert.h"
#include "util.h"

static const derwalk pValue_packer[] = {
        DER_PACK_STORE | DER_TAG_INTEGER,
        DER_PACK_END
};

typedef struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue ACK_ATTRIBUTE_pValue_t;

void der_put_CK_MECHANISM_PTR(const CK_MECHANISM* pMechanism) {
    // TODO: implement
};

void der_put_CK_MECHANISM_INFO_PTR(const CK_MECHANISM_INFO* pInfo) {
    // TODO: implement
};

void der_put_CK_UTF8CHAR_ARRAY(const CK_UTF8CHAR* pPin) {
    // TODO: implement
};

void der_put_UTF8String(const CK_UTF8CHAR* pPin) {
    // TODO: implement
};

void der_put_CK_BBOOL_PTR(const CK_BBOOL* tokenPresent) {
    // TODO: implement
};

void der_put_CK_FLAGS_PTR(const CK_FLAGS* flags) {
    // TODO: implement
};

void der_put_ANY(ANY pApplication) {
    // TODO: implement
};

void der_put_CK_NOTIFY(const CK_NOTIFY notify) {
    // TODO: implement
};

void der_put_CK_C_INITIALIZE_ARGS_PTR(const CK_C_INITIALIZE_ARGS* pInitArgs) {
    // TODO: implement
};

void der_put_CK_INFO_PTR(const CK_INFO* pInfo) {
    // TODO: implement
};

void der_put_CK_SESSION_INFO_PTR(const CK_SESSION_INFO* pInfo) {
    // TODO: implement
};

void der_put_CK_SLOT_INFO_PTR(const CK_SLOT_INFO* pInfo) {
    // TODO: implement
};

void der_put_CK_TOKEN_INFO_PTR(const CK_TOKEN_INFO* pInfo) {
    // TODO: implement
};

void der_put_CK_OBJECT_HANDLE_ARRAY(const CK_OBJECT_HANDLE* phObject) {
    // TODO: implement
};

void der_put_CK_MECHANISM_TYPE_ARRAY(const CK_MECHANISM_TYPE* pMechanismList) {
    // TODO: implement
};

dercursor
der_put_CK_VOID_PTR(const CK_VOID_PTR* pReserved) {
    dercursor retval;
    retval.derptr = (uint8_t *) "";
    retval.derlen = 0;
    return retval;
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


CK_RV
der_put_CK_ATTRIBUTE_ARRAY(
        const CK_ATTRIBUTE* pTemplate,
        const CK_ULONG* count,
        uint8_t** pInnerlist,
        size_t* pLength,
        const derwalk* pack
) {
    int i;
    der_buf_uint32_t buf = { 0 };
    dercursor crs;
    CK_ATTRIBUTE attribute;
    size_t innerlen = 0;
    size_t tmp = 0;

    for (i = 0; i < *count; i++) {
        attribute = pTemplate[i];
        crs = (*func_array[attribute.type])(buf, *(uint32_t*)attribute.pValue);
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
        attribute = pTemplate[i];
        crs = (*func_array[attribute.type])(buf, *(uint32_t*)attribute.pValue);
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
    int i;
    CK_SLOT_ID slot;
    size_t innerlen = 0;
    size_t tmp = 0;
    der_buf_uint32_t buf = { 0 };
    dercursor crs;

    for (i = 0; i < *count; i++) {
        slot = (pSlotList)[i];
        if (slot > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }

        crs = der_put_uint32(buf, (uint32_t) slot);
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
        slot = (pSlotList)[i];
        if (slot > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }
        crs = der_put_uint32(buf, (uint32_t) slot);
        tmp = der_pack(pack, &crs, *pInnerlist + innerlen);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen -= tmp;
    }
    assert(innerlen == 0);

    return CKR_OK;
};