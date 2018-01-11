#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"

// TODO: gijs check if this makes sense
typedef void * CK_OPAQUE;
typedef void * ANY;
typedef CK_UTF8CHAR_PTR UTF8String;
typedef CK_BBOOL BOOLEAN;

{% for f in calls %}
CK_RV
client_{{ f.type_name[:-5]|under }}(
    {% for c in f.type_decl.components if c.type_decl.type_name != 'NULL' %}
    {%- if c.type_decl.type_name == "CHOICE" -%}
    {% for d in c.type_decl.type_decl.components if d.__str__() != "..." and d.type_decl.type_name != 'NULL' %}
    // TODO: gijs work in progress
    {{ d.type_decl.type_name|under|ack2ck }} {{ d.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
    {%- if not loop.last %},{% endif -%}
    {%- else -%}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}
    {%- if not loop.last %},{% endif -%}
    {%- endif %}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
