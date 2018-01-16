#ifndef KEEHIVE_CLIENT_H
#define KEEHIVE_CLIENT_H

#include "pkcs11/pkcs11unix.h"
#include "types.h"

{% for f in calls %}
CK_RV
client_{{ f.type_name[:-5]|under }}(
    {%- for type, var in f|extractargs %}
    {{ type }} {{ var }}{%- if not loop.last %},{%- endif -%}
    {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_CLIENT_H
