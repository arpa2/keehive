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
    retval.derptr = (uint8_t *) "";
    retval.derlen = 0;
    return retval;
}

