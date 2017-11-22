#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "keehive.h"
#include "pkcs11/pkcs11unix.h"

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>


static void test_pack_unpack(void **state) {
    CK_ULONG pulCount = 0;
    CK_BBOOL tokenPresent = TRUE;
    size_t len = 0;

    KeehiveError error = get_slot_list_pack(tokenPresent, &pulCount, NULL_PTR, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    uint8_t * packed_ptr = malloc (len);
    if (packed_ptr == NULL) {
        exit(1);
    }

    error = get_slot_list_pack(tokenPresent, &pulCount, packed_ptr, &len);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    getslotlist_call_t getslotlist;
    error = get_slot_list_unpack(packed_ptr, &len, &getslotlist);
    assert_int_equal(error, KEEHIVE_E_SUCCESS);

    free(packed_ptr);
}


static void test_get_slot_list_unpack(void **state) {
    const char *code = "0x30 0x18 0xa0 0x0a 0x01 0x08 0x01 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xa2 0x0a 0x02 0x08 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00";
    size_t b = strlen(code) / 5;
    uint8_t * decptr = malloc(b);

    uint8_t counter = 0;
    char *end;
    for (long i = strtol(code, &end, 16); code != end; i = strtol(code, &end, 16)) {
        decptr[counter] = (uint8_t) (end - code);
        printf("'%.*s' -> ", (int) (end - code), code);
        code = end;
        if (errno == ERANGE) {
            printf("range error, got ");
            errno = 0;
        }
        printf("%ld\n", i);
        counter += 1;
    }
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_pack_unpack),
        cmocka_unit_test(test_get_slot_list_unpack),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}