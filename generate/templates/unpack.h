#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "static/RemotePKCS11.h"
#include "quick-der/api.h"


{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
CK_RV
unpack_{{ f.type_name|under }}(
        dercursor* packed
        {%- for type, pointerized, value, other in extract_args(f, o, True) %}
        {%- if loop.first %},{% endif %}
        {{ type }} {{ value }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}
{% endfor %}

#endif //KEEHIVE_UNPACK_H