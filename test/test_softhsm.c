#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "wrap.h"

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


static void test_init(void **state) {
    init();
}


int main(void) {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(test_init),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}