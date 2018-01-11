#include "wrap.h"

#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>


{% for call in calls %}
{% set f = call.type_name[:-5]|under %}
CK_RV
call_{{ f }}(
    {%- for comp in call.type_decl.components %}
    {{ comp.type_decl.type_name|under }} {{ comp.identifier }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
) {
    CK_RV status = ((*function_list)->{{ f }})(
        {% for c in call.type_decl.components -%}
        {{- c.identifier -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

    if (status != CKR_OK)
        return CKR_KEEHIVE_SO_ERROR;

    return CKR_OK;

};
{% endfor %}
