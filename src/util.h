

#ifndef KEEHIVE_UTIL_H
#define KEEHIVE_UTIL_H

#include "pkcs11/pkcs11unix.h"
#include "quick-der/api.h"

CK_RV
der_error_helper(int error);

dercursor
der_put_empty();


#endif //KEEHIVE_UTIL_H
