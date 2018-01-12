#ifndef KEEHIVE_PACK_H
#define KEEHIVE_PACK_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "RemotePKCS11.h"


{% for f in functions %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for c in f|extractargs %}
        {%- if loop.first %},{% endif %}
        {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }}
        {%- if not loop.last %},{% endif -%}
        {% endfor %}
);
{% endfor %}


#endif //KEEHIVE_PACK_H
