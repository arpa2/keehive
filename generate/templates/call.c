#include "call.h"


{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
call_{{ f }}(
    CK_FUNCTION_LIST_PTR_PTR function_list
    {%- for type, pointerized, value in combined_args(call, return_) %}
    {%- if loop.first %},{% endif %}
    {{ type }} {{ value }}
    {%- if not loop.last %},{% endif -%}
    {% endfor %}
) {
    return ((*function_list)->{{ f }})(
        {% for type, pointerized, value in combined_args(call, return_) -%}
        {{- value -}}
        {%- if not loop.last %},
        {% endif -%}
        {% endfor %}
    );

};
{% endfor %}
