#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "pack.h"


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

};
{% endfor %}
{% endfor %}


int main(void) {
    const struct CMUnitTest tests[] = {
            {% for f in functions %}
            cmocka_unit_test(test_pack_{{ f.type_name|under }}){% if not loop.last %},{% endif -%}
            {% endfor %}
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
