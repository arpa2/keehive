#ifndef KEEHIVE_CONVERT_H
#define KEEHIVE_CONVERT_H

#include "pkcs11/pkcs11unix.h"
#include <stdlib.h>
#include <quick-der/api.h>

dercursor not_implemented(uint8_t *der_buf_uint32, uint32_t value);

dercursor (*func_array[CKA_ALLOWED_MECHANISMS+1]) (uint8_t *der_buf_uint32, uint32_t value) = { not_implemented };

#endif //KEEHIVE_CONVERT_H