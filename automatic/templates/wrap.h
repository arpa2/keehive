#ifndef KEEHIVE_WRAP_C_H
#define KEEHIVE_WRAP_C_H

#include "types.h"
#include "pkcs11/pkcs11unix.h"

{% for f in calls %}
CK_RV
call_{{ f.type_name[:-5]|under }}(
    {%- for comp in f.type_decl.components %}
    {{ comp.type_decl.type_name|under }} {{ comp.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_WRAP_C_H
