#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "keehive.h"

/* A test case that does nothing and succeeds. */
static void null_test_slot(void **state) {
    KeehiveError error = get_slot_list_pack();
    assert_int_equal(error, KEEHIVE_E_SUCCESS);
}

int main(void) {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(null_test_slot),

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}