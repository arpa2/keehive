#ifndef KEEHIVE_PACK_H
#define KEEHIVE_PACK_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "static/RemotePKCS11.h"


{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for type, var, other in f|extract_args %}{% if loop.first %},{% endif %}
        const {{ type }}* {{ var }} {% if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_PACK_H
