#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "keehive.h"

static void test_get_slot_list_pack(void **state) {
    KeehiveError error = get_slot_list_pack();
    assert_int_equal(error, KEEHIVE_E_SUCCESS);
}


static void test_get_slot_list_unpack(void **state) {
    KeehiveError error = get_slot_list_unpack();
    assert_int_equal(error, KEEHIVE_E_SUCCESS);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_get_slot_list_pack),
        cmocka_unit_test(test_get_slot_list_unpack),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}