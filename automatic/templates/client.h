#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

{% for f in calls %}
CK_RV
client_{{ f.type_name[:-5]|under }}(
    {% for c in f.type_decl.components if c.type_decl.type_name != 'NULL' and c.type_decl.type_name != 'ANY' -%}
    {% set outerloop = loop %}
    {%- if c.type_decl.type_name == "CHOICE" -%}
    {% for d in c.type_decl.type_decl.components if d.__str__() != "..." and d.type_decl.type_name != 'NULL' and d.type_decl.type_name != 'ANY' -%}
    {{ d.type_decl.type_name|under|ack2ck }} {{ d.identifier }}{% if not outerloop.last %},{% endif %} // CHOICE
    {%- endfor %}
    {%- else -%}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}{%- if not loop.last %},{%- endif -%}
    {%- endif %}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
