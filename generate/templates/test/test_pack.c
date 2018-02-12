#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pack.h"
#include "unpack.h"


{% for call, return_ in zipped %}
{% for f, o in ((call, return_), (return_, call)) %}
void test_pack_{{ f.type_name|under }}(void **state) {

    (void) state; /* unused */

    dercursor dercursor;

    {% for type_, pointerized, identifier, other in extract_args(f, o) -%}
    {{ initialise_test(type_, identifier) }}
    {% endfor %}

    CK_RV status = pack_{{ f.type_name|under }}(
        &dercursor
        {%- for type_, pointerized, identifier, other in extract_args(f, o) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    assert_int_equal(status, CKR_OK);

    {% for type_, pointerized, identifier, other in extract_args(f, o) -%}
    //{{ initialise(type_, identifier + "_unpack") }}
    {{ type_ }} {{ identifier }}_unpack;
    {% endfor %}

    status = unpack_{{ f.type_name|under }}(
        &dercursor
        {%- for type_, pointerized, identifier, other in extract_args(f, o) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}_unpack{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    free(dercursor.derptr);

    assert_int_equal(status, CKR_OK);

{% for type_, pointerized, identifier, other in extract_args(f, o) -%}
{% if type_ in ("CK_INFO", "CK_MECHANISM_INFO", "CK_SESSION_INFO", "CK_SLOT_INFO", "CK_TOKEN_INFO") %}
    // todo: assert for {{ identifier }} ({{ type_ }})
    assert_false(true);
{% else %}
    assert_int_equal({{ identifier }}, {{ identifier }}_unpack);
{% endif %}
{% endfor %}

};
{% endfor %}
{% endfor %}


int main(void) {
    const struct CMUnitTest tests[] = {
            {% for f in functions[:2] %}
            cmocka_unit_test(test_pack_{{ f.type_name|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
