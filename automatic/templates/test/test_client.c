#include "client.h"
#include "pkcs11/pkcs11unix.h"

{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
void test_client_{{ f}}(){
    {%- for type, var, pointer in combined_args(call, return_) %}
    {{ type }} {{ var }};
    {%- endfor %}

    client_{{ f }}(
        {%- for type, var, pointer in combined_args(call, return_) %}
        {{ var }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
    );
};
{% endfor %}