#include "pkcs11/pkcs11unix.h"
#include <quick-der/api.h>
#include <stdlib.h>
#include <assert.h>
#include "util.h"
#include "types.h"


CK_RV
der_error_helper(const int error)
{
    switch (error) {
        case ERANGE:
            return CKR_KEEHIVE_DER_RANGE_ERROR;
        case EBADMSG:
            return CKR_KEEHIVE_DER_SYNTAX_ERROR;
        default:
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
    }
}


dercursor
der_put_empty() {
    dercursor retval;
    retval.derptr = NULL_PTR;
    retval.derlen = 0;
    return retval;
}


dercursor
der_put_null() {
    dercursor retval;
    retval.derptr = (uint8_t *) "";
    retval.derlen = 0;
    return retval;
}


int der_get_char(dercursor *cursor, char *val )
{
    if (cursor->derlen == 0)
        return -1;
    *val = *cursor->derptr;

    return 0;
}


int der_get_uchar(dercursor *cursor, unsigned char *val )
{
    if (cursor->derlen == 0)
        return -1;
    *val = *cursor->derptr;

    return 0;
}


int der_get_long (dercursor cursor, long int *valp)
{
    return der_get_int32 (cursor, (int32_t *)valp);
};


int der_get_ulong (dercursor cursor,  long unsigned int *valp)
{
    return der_get_uint32 (cursor, (u_int32_t *)valp);
};


dercursor der_put_long (der_buf_long_t *der_buf_long, long int value)
{
    return der_put_int32 ((u_int8_t *)der_buf_long,(u_int32_t) value);
};


dercursor der_put_ulong (der_buf_ulong_t *der_buf_ulong, long int value)
{
    return der_put_uint32 ((u_int8_t *)der_buf_ulong, (u_int32_t)value);
};


dercursor der_put_char (der_buf_char_t *der_buf_char, char value)
{
    dercursor retval;
    retval.derptr = (uint8_t *)der_buf_char;
    retval.derlen = 1;
    *retval.derptr = (uint8_t)value;
    return retval;
}


CK_RV
pack_slotList(
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG *count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *slotpack
) {
    int i;
    CK_SLOT_ID slot;
    size_t innerlen = 0;
    size_t tmp = 0;
    for (i = 0; i < *count; i++) {
        slot = (*pSlotList)[i];
        if (slot > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }
        der_buf_uint32_t slotbuf;
        dercursor slotcrs = der_put_uint32(slotbuf, (uint32_t) slot);
        tmp = der_pack(slotpack, &slotcrs, NULL);
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
        slot = (*pSlotList)[i];
        if (slot > 0xffffffff) {
            return CKR_KEEHIVE_MEMORY_ERROR;
        }
        der_buf_uint32_t slotbuf;
        dercursor slotcrs = der_put_uint32(slotbuf, (uint32_t) slot);
        tmp = der_pack(slotpack, &slotcrs, *pInnerlist + innerlen);
        if (tmp == 0)
            return CKR_KEEHIVE_DER_UNKNOWN_ERROR;
        innerlen -= tmp;
    }
    assert(innerlen == 0);

    return CKR_OK;
};
