#include "client.h"
#include "pkcs11/pkcs11unix.h"

{% for call in calls %}
{% set f = call.type_name[:-5]|under %}
void test_client_{{ f}}(){
    {% for type, var in call|extractargs -%}
    {{ type }} {{ var }};
    {%- endfor %}

    client_{{ f }}(
        {% for type, var in call|extractargs %}
        {{ var }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
    );
};
{% endfor %}