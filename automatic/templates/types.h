#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"
#include "pkcs11/pkcs11unix.h"

typedef CK_VOID_PTR_PTR CK_OPAQUE;
typedef CK_UTF8CHAR_PTR UTF8String;
typedef CK_BBOOL BOOLEAN;


{% for f in functions %}
typedef DER_OVLY_RemotePKCS11_{{ f.type_name|under }} {{ f.type_name|under }}_t;
{%- endfor %}

#endif //KEEHIVE_CONSTANTS_H

