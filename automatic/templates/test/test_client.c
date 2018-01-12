#include "client.h"
//#include "RemotePKCS11.h"
#include "pkcs11/pkcs11unix.h"

{% for call in calls %}
{% set f = call.type_name[:-5]|under %}
void test_client_{{ f}}(){
    {% for c in call.type_decl.components if c.type_decl.type_name != 'NULL' -%}
    {{ c.type_decl.type_name|under|ack2ck }} {{ c.identifier }};
    {%- endfor %}

    client_{{ f }}(
        {% for c in call.type_decl.components if c.type_decl.type_name != 'NULL' %}
        {{ c.identifier }}{%- if not loop.last %},{% endif -%}
        {% endfor %}
    );
};
{% endfor %}