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
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    status = call_C_Initialize(&function_list);
    assert_int_equal(status, CKR_OK);
    call_C_Finalize(&function_list);
}

static void test_finalize(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Initialize(&function_list);
    status = call_C_Finalize(&function_list);
    assert_int_equal(status, CKR_OK);
}

static void test_get_slot_list(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Initialize(&function_list);
    CK_SLOT_ID_PTR pSlotList;
    CK_ULONG count;
    CK_BBOOL tokenPresent = CK_TRUE;
    status = call_C_GetSlotList(tokenPresent, &function_list, &pSlotList, &count);
    assert_int_equal(status, CKR_OK);
    call_C_Finalize(&function_list);
    free(pSlotList);
}

static void test_get_info_before_init(void **state) {
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    CK_INFO info;
    CK_RV status = call_C_GetInfo(&function_list, &info);
    assert_int_equal(status, CKR_KEEHIVE_SO_ERROR);
}

static void test_so_not_exists(void **state) {
    CK_FUNCTION_LIST_PTR function_list;
    CK_RV status = call_C_GetFunctionList("thisdoesnotexists", &function_list);
    assert_int_equal(status, CKR_KEEHIVE_SO_INVALID);
}

static void test_double_init(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Initialize(&function_list);
    status = call_C_Initialize(&function_list);
    assert_int_equal(status, CKR_KEEHIVE_SO_INIT_ERROR);
}

static void test_finalize_before_init(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Finalize(&function_list);
    status = call_C_Finalize(&function_list);
    assert_int_equal(status, CKR_KEEHIVE_SO_ERROR);
}

static void test_double_finalize(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Initialize(&function_list);
    call_C_Finalize(&function_list);
    status = call_C_Finalize(&function_list);
    assert_int_equal(status, CKR_KEEHIVE_SO_ERROR);
}

static void test_get_info(void **state) {
    CK_INFO info;
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    call_C_GetFunctionList(path, &function_list);
    call_C_Initialize(&function_list);
    status = call_C_GetInfo(&function_list, &info);
    assert_int_equal(status, CKR_OK);
    call_C_Finalize(&function_list);
}

static void test_get_function_list(void **state) {
    CK_RV status;
    CK_FUNCTION_LIST_PTR function_list;
    status = call_C_GetFunctionList(path, &function_list);
    assert_int_equal(status, CKR_OK);
    call_C_Finalize(&function_list);
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