#ifndef KEEHIVE_CONSTANTS_H
#define KEEHIVE_CONSTANTS_H

#include "RemotePKCS11.h"

{% for obj in objects %}
typedef DER_OVLY_RemotePKCS11_{{ obj.type_name|under }} {{ obj.type_name|under }}_t;
{%- endfor %}

#endif //KEEHIVE_CONSTANTS_H

