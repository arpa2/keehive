#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "static/RemotePKCS11.h"
#include "pkcs11/pkcs11unix.h"

typedef CK_VOID_PTR_PTR CK_OPAQUE;
typedef CK_UTF8CHAR_PTR UTF8String;
typedef CK_BBOOL BOOLEAN;
typedef CK_BBOOL CK_PTR CK_BBOOL_PTR;
typedef CK_VOID_PTR ANY;
typedef CK_RV CK_PTR CK_RV_PTR;
typedef CK_FLAGS CK_PTR CK_FLAGS_PTR;
typedef CK_USER_TYPE CK_PTR CK_USER_TYPE_PTR;
typedef void CK_VOID;

typedef CK_ATTRIBUTE_PTR CK_ATTRIBUTE_ARRAY;
typedef CK_BYTE_PTR CK_BYTE_ARRAY;
typedef CK_MECHANISM_TYPE_PTR CK_MECHANISM_TYPE_ARRAY;
typedef CK_OBJECT_HANDLE_PTR CK_OBJECT_HANDLE_ARRAY;
typedef CK_SLOT_ID_PTR CK_SLOT_ID_ARRAY;
typedef CK_UTF8CHAR_PTR CK_UTF8CHAR_ARRAY;

{% for f in functions %}
typedef DER_OVLY_RemotePKCS11_{{ f.type_name|under }} {{ f.type_name|under }}_t;
{%- endfor %}


{% for o in others %}
typedef DER_OVLY_RemotePKCS11_{{ o.type_name|under }} {{ o.type_name|under }}_t;
{%- endfor %}

#endif //KEEHIVE_CONSTANTS_H

