#ifndef KEEHIVE_PACK_H
#define KEEHIVE_PACK_H

#include <stdlib.h>
#include <quick-der/api.h>
#include "types.h"
#include "pkcs11/pkcs11unix.h"
#include "static/RemotePKCS11.h"


{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
CK_RV
pack_{{ f.type_name|under }}(
        dercursor * packtarget
        {%- for type, pointerized, var, other in extract_args(f, o ,True) %}
        {%- if loop.first %},{% endif %}
        {% if type|is_pointer %}const {{ type|depointerize }}* {{ var }}{%- else -%}{{  type }} {{ var }}{%- endif -%}{%- if not loop.last %},{% endif %}
        {%- endfor %}
);
{% endfor %}
{% endfor %}


#endif //KEEHIVE_PACK_H
