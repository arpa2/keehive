

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

typedef long int der_buf_long_t;
dercursor der_put_long (der_buf_long_t *der_buf_long, long int value);

typedef unsigned long int der_buf_ulong_t;
dercursor der_put_ulong (der_buf_ulong_t *der_buf_ulong, long int value);

typedef uint8_t der_buf_char_t [1];
dercursor der_put_char (der_buf_char_t *der_buf_char, char value);

CK_RV pack_slotList(
        CK_SLOT_ID_PTR *pSlotList,
        CK_ULONG *count,
        uint8_t **pInnerlist,
        size_t *pLength,
        const derwalk *slotpack
);

void der_dump(char* path, dercursor* pCursor);

#endif //KEEHIVE_UTIL_H
