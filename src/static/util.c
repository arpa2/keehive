#include "pkcs11/pkcs11unix.h"
#include <quick-der/api.h>
#include <stdlib.h>
#include <assert.h>
#include "util.h"
#include "returncodes.h"
#include <stdio.h>


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


int der_get_long(dercursor cursor, long int *valp)
{
    return der_get_int32 (cursor, (int32_t *)valp);
};


int der_get_ulong(dercursor cursor,  long unsigned int *valp)
{
    return der_get_uint32 (cursor, (u_int32_t *)valp);
};


dercursor der_put_long(u_int8_t* der_buf_long, long int value)
{
    return der_put_int32 (der_buf_long,(u_int32_t) value);
};


dercursor der_put_ulong(u_int8_t* der_buf_ulong, long int value)
{
    return der_put_uint32 (der_buf_ulong, (u_int32_t)value);
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


void der_dump(char* path, dercursor* pCursor)
{
    FILE *pFile = fopen(path, "w+b");
    fwrite(pCursor->derptr, 1, pCursor->derlen, pFile);
    fclose(pFile);
}
