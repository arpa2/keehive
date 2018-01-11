#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"

{% for f in calls %}
CK_RV
pack_{{ f.type_name[:-5]|under }}(
    {%- for comp in f.type_decl.components %}
    {{ comp.type_decl.type_name|under }} {{ comp.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
