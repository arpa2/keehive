#ifndef KEEHIVE_UNPACK_H
#define KEEHIVE_UNPACK_H

#include <stdlib.h>
#include "types.h"
#include "RemotePKCS11.h"

#include "quick-der/api.h"


{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packed
        {%- for comp in f.type_decl.components %}
            {%- if loop.first %},{% endif %}
        {{ comp.type_decl.type_name|under }} {{ comp.identifier }}
            {%- if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_UNPACK_H