#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"
#include "quick-der/api.h"


{% for f in functions %}
CK_RV
unpack_{{ f.type_name|under }}(
        dercursor* packed
        {%- for c in f.type_decl.components if not c.type_decl.type_name == 'NULL' %}
        {%- if loop.first %},{% endif %}
        {{ c.type_decl.type_name|under|ack2ck }}* {{ c.identifier }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_UNPACK_H