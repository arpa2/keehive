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
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    status = initialize(&function_list);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&function_list);
}

static void test_finalize(void **state) {
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    get_slot_list(&function_list);
    status = finalize(&function_list);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
}

static void test_get_slot_list(void **state) {
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    status = get_slot_list(&function_list);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&function_list);
}

static void test_get_info_before_init(void **state) {
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    CK_INFO info;
    KeehiveError status = get_info(&function_list, &info);
    assert_int_equal(status, KEEHIVE_E_SO_ERROR);
}

static void test_so_not_exists(void **state) {
    CK_FUNCTION_LIST_PTR function_list;
    KeehiveError status = get_function_list("thisdoesnotexists", &function_list);
    assert_int_equal(status, KEEHIVE_E_SO_INVALID);
}

static void test_double_init(void **state) {
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    status = initialize(&function_list);
    assert_int_equal(status, KEEHIVE_E_SO_INIT_ERROR);
}

static void test_finalize_before_init(void **state) {
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    finalize(&function_list);
    status = finalize(&function_list);
    assert_int_equal(status, KEEHIVE_E_SO_ERROR);
}

static void test_double_finalize(void **state) {
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    finalize(&function_list);
    status = finalize(&function_list);
    assert_int_equal(status, KEEHIVE_E_SO_ERROR);
}

static void test_get_info(void **state) {
    void *handle;
    CK_INFO info;
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    get_function_list(path, &function_list);
    initialize(&function_list);
    status = get_info(&function_list, &info);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&function_list);
}

static void test_get_function_list(void **state) {
    void *handle;
    KeehiveError status;
    CK_FUNCTION_LIST_PTR function_list;
    status = get_function_list(path, &function_list);
    assert_int_equal(status, KEEHIVE_E_SUCCESS);
    finalize(&function_list);
}


int main(void) {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(test_initialize),
            cmocka_unit_test(test_finalize),
            cmocka_unit_test(test_get_slot_list),
            cmocka_unit_test(test_get_info_before_init),
            cmocka_unit_test(test_double_init),
            cmocka_unit_test(test_so_not_exists),
            cmocka_unit_test(test_finalize_before_init),
            cmocka_unit_test(test_double_finalize),
            cmocka_unit_test(test_get_info),
            cmocka_unit_test(test_get_function_list),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}