#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

{% for f in calls %}
CK_RV
client_{{ f.type_name[:-5]|under }}(
    {%- for c in extractargs(f) %}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}{%- if not loop.last %},{%- endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
