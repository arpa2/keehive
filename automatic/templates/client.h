#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

{% for call, return_ in zipped %}
CK_RV
client_{{ call.type_name[:-5]|under }}(
    {%- for type, pointerized, value in combined_args(call, return_) %}
    {{ type }} {{ value }}{%- if not loop.last %},{% endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
