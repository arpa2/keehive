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
        {%- for type, value in f|extractargs %}
        {%- if loop.first %},{% endif %}
        {{ type }}* {{ value }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_UNPACK_H