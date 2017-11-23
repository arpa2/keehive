#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "wrap.h"

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


const char path[] = "/usr/local/lib/softhsm/libsofthsm2.so";


static void test_initialize(void **state) {
    void *handle;
    KeehiveError status = initialize(path, &handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&handle);
}

static void test_finalize(void **state) {
    void *handle;
    initialize(path, &handle);
    KeehiveError status = finalize(&handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&handle);
}

static void test_get_slot_list(void **state) {
    void *handle;
    KeehiveError status;
    status = initialize(path, &handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    status = get_slot_list(&handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    status = finalize(&handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
}

static void test_get_info_before_init(void **state) {
    void *handle = NULL;
    KeehiveError status = get_info(&handle);
    assert_int_equal(status, KEEHIVE_E_SO_INVALID);
}

static void test_so_not_exists(void **state) {
    void *handle;
    KeehiveError status = initialize("thisdoesnotexists", &handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
}

static void test_double_init(void **state) {
    void *handle;
    KeehiveError status;
    initialize(path, &handle);
    status = initialize(path, &handle);
    assert_int_equal(status, KEEHIVE_E_SO_INIT_ERROR);
}

static void test_finalize_before_init(void **state) {
    void *handle = NULL;
    KeehiveError status;
    status = finalize(&handle);
    assert_int_equal(status, KEEHIVE_E_SO_INVALID);
}

static void test_double_finalize(void **state) {
    void *handle;
    KeehiveError status;
    initialize(path, &handle);
    finalize(&handle);
    status = finalize(&handle);
    assert_int_equal(status, KEEHIVE_E_SO_ERROR);
}

static void test_get_info(void **state) {
    void *handle;
    KeehiveError status;
    initialize(path, &handle);
    status = get_info(&handle);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&handle);
}


int main(void) {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(test_initialize),
            cmocka_unit_test(test_finalize),
            cmocka_unit_test(test_get_slot_list),
            cmocka_unit_test(test_get_info_before_init),
            cmocka_unit_test(test_double_init),
            cmocka_unit_test(test_finalize_before_init),
            cmocka_unit_test(test_double_finalize),
            cmocka_unit_test(test_get_info),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}