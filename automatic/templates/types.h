#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"

{% for f in functions %}
typedef DER_OVLY_RemotePKCS11_{{ f.type_name|under }} {{ f.type_name|under }}_t;
{%- endfor %}

#endif //KEEHIVE_CONSTANTS_H

