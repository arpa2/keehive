#ifndef KEEHIVE_DERPUT_H
#define KEEHIVE_DERPUT_H

#include "cryptoki.h"
#include "types.h"

const dercursor der_empty;
const dercursor der_null;


typedef uint8_t der_buf_ulong_t [5];
dercursor der_put_ulong(uint8_t* , long int);


typedef uint8_t der_buf_char_t [1];
dercursor der_put_char(uint8_t* , char);


typedef uint8_t der_buf_uchar_t [1];
dercursor der_put_uchar(uint8_t* , unsigned char);


dercursor der_put_CK_DATE(CK_DATE ck_date, uint8_t *buffer);


CK_RV der_put_CK_ATTRIBUTE_ARRAY(const CK_ATTRIBUTE* , CK_ULONG , uint8_t** , size_t*);


CK_RV der_put_CK_ULONG_ARRAY(const CK_ULONG* , const CK_ULONG* , uint8_t** , size_t* , const derwalk*);


CK_RV der_put_CK_SLOT_ID_ARRAY(const CK_SLOT_ID* , const CK_ULONG* , uint8_t **, size_t *, const derwalk *);


CK_RV der_put_CK_BYTE_ARRAY(const CK_BYTE* , const CK_ULONG* , uint8_t** , size_t*);


dercursor der_put_CK_VOID_PTR(const CK_VOID_PTR*);


CK_RV der_put_CK_MECHANISM_PTR(ACK_MECHANISM_t* , const CK_MECHANISM* , der_buf_ulong_t , der_buf_ulong_t);


dercursor der_put_CK_BBOOL_PTR(uint8_t *, const CK_BBOOL*);


CK_RV der_put_CK_UTF8CHAR_ARRAY(dercursor* , const CK_UTF8CHAR* , const CK_ULONG);


CK_RV der_put_UTF8String(dercursor* , const CK_UTF8CHAR* , const CK_ULONG);


CK_RV
der_put_CK_C_INITIALIZE_ARGS_PTR(
        C_Initialize_Call_t* ,
        const CK_C_INITIALIZE_ARGS* ,
        der_buf_ulong_t ,
        der_buf_bool_t ,
        der_buf_bool_t ,
        der_buf_bool_t ,
        der_buf_bool_t
);


dercursor der_put_CK_FLAGS_PTR(uint8_t* , const CK_FLAGS);


CK_RV
der_put_CK_OBJECT_HANDLE_ARRAY(
        const CK_OBJECT_HANDLE* ,
        const CK_ULONG* ,
        uint8_t **,
        size_t *,
        const derwalk *
);


typedef uint8_t manufacturerID_t [32];
typedef uint8_t libraryDescription_t [32];
CK_RV
der_put_CK_INFO_PTR(
        ACK_INFO_t* ,
        const CK_INFO* ,
        manufacturerID_t ,
        libraryDescription_t ,
        der_buf_ulong_t ,
        der_buf_char_t ,
        der_buf_char_t ,
        der_buf_char_t ,
        der_buf_char_t

);


CK_RV
der_put_CK_MECHANISM_TYPE_ARRAY(
        const CK_MECHANISM_TYPE* ,
        const CK_ULONG* ,
        uint8_t **,
        size_t *,
        const derwalk *
);


CK_RV
der_put_CK_MECHANISM_INFO_PTR(
        ACK_MECHANISM_INFO_t* ,
        const CK_MECHANISM_INFO* ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t
);


CK_RV
der_put_CK_SESSION_INFO_PTR(
        ACK_SESSION_INFO_t* ,
        const CK_SESSION_INFO* ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t
);

typedef uint8_t slotDescription_t [64];
CK_RV
der_put_CK_SLOT_INFO_PTR(
        ACK_SLOT_INFO_t* ,
        const CK_SLOT_INFO* ,
        der_buf_ulong_t ,
        manufacturerID_t ,
        slotDescription_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t
);


typedef uint8_t label_t [21];
typedef uint8_t model_t [16];
typedef uint8_t serialNumber_t [16];
typedef uint8_t utcTime_t [16];
CK_RV
der_put_CK_TOKEN_INFO_PTR(
        ACK_TOKEN_INFO_t* Ack_Token_Info,
        const CK_TOKEN_INFO* pInfo,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        manufacturerID_t ,
        label_t ,
        model_t ,
        serialNumber_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        der_buf_ulong_t ,
        utcTime_t
);


#endif //KEEHIVE_DERPUT_H


