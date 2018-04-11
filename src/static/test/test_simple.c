#include "cryptoki.h"
#include <stddef.h>
#include "settings.h"
#include "loader.h"
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>


void softhsm(void **state) {
    CK_FUNCTION_LIST_PTR function_list = NULL;
    CK_RV status = cryptoki_loader(LIBSOFTHSM2_LIBRARY, &function_list);
    assert_int_equal(status, 0);
    CK_VOID_PTR pInitArgs = NULL;
    CK_RV retval = (function_list->C_Initialize)(pInitArgs);
    assert_int_equal(retval, 0);
}

int main(void) {
    setenv("SOFTHSM2_CONF", "./softhsm2.conf", 1);

    const struct CMUnitTest tests[] = {
            cmocka_unit_test(softhsm),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}