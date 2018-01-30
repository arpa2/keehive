#ifndef KEEHIVE_UTIL_H
#define KEEHIVE_UTIL_H

#include "pkcs11/pkcs11unix.h"
#include "quick-der/api.h"

CK_RV der_error_helper(int error);

dercursor der_put_empty();

dercursor der_put_null();

int  der_get_char(dercursor *cursor, char *val );

int der_get_uchar(dercursor *cursor, unsigned char *val );

int der_get_long (dercursor cursor, long int *valp);

int der_get_ulong (dercursor cursor,  long unsigned int *valp);

typedef uint8_t der_buf_long_t [4];
dercursor der_put_long(uint8_t* der_buf_long, long int value);

typedef uint8_t der_buf_ulong_t [5];
dercursor der_put_ulong(uint8_t* der_buf_ulong, long int value);

typedef uint8_t der_buf_char_t [1];
dercursor der_put_char(uint8_t* der_buf_char, char value);

typedef uint8_t der_buf_uchar_t [1];
dercursor der_put_uchar(uint8_t* der_buf_char, unsigned char value);

typedef uint8_t der_buf_uint32_t [5];
dercursor der_put_uint8(uint8_t* der_buf_uint8, uint8_t value);

void der_dump(char* path, dercursor* pCursor);

#endif //KEEHIVE_UTIL_H
