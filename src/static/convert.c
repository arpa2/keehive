#include "derput.h"
#include "convert.h"
#include "derget.h"

func_tree_t functree;

dercursor der_put_rfc2279_string(const CK_ATTRIBUTE attribute, uint8_t* buffer) {
    dercursor cursor = {.derptr=buffer, .derlen=attribute.ulValueLen};
    memcpy(cursor.derptr, attribute.pValue, attribute.ulValueLen);
    return cursor;
}

int der_get_rfc2279_string(dercursor cursor, CK_ATTRIBUTE* attribute) {
    memcpy(attribute->pValue, cursor.derptr, cursor.derlen);
    return 0;
}

dercursor der_put_attribute_bool(const CK_ATTRIBUTE attribute, uint8_t* buffer) {
    bool boolvalue = *(CK_BBOOL_PTR)attribute.pValue == CK_TRUE;
    return der_put_bool (buffer, boolvalue);
}

int der_get_attribute_bool(dercursor cursor, CK_ATTRIBUTE* attribute) {
    return der_get_CK_BBOOL_PTR(cursor, attribute->pValue);
}

dercursor der_put_attribute_long(const CK_ATTRIBUTE attribute, uint8_t* buffer) {
    return der_put_ulong(buffer, *(CK_ULONG_PTR)attribute.pValue);
}

int der_get_attribute_long(dercursor cursor, CK_ATTRIBUTE* attribute) {
    return der_get_ulong(cursor, attribute->pValue);
}


dercursor der_put_attribute_byte_array(const CK_ATTRIBUTE attribute, uint8_t* buffer) {
    dercursor cursor;
    der_put_CK_BYTE_ARRAY(attribute.pValue, &attribute.ulValueLen, &cursor.derptr, &cursor.derlen);
    return cursor;

}

int der_get_attribute_byte_array(dercursor cursor, CK_ATTRIBUTE* attribute) {
    return der_get_CK_BYTE_ARRAY(cursor, attribute->pValue);
}


dercursor der_put_attribute_date(const CK_ATTRIBUTE attribute, uint8_t* buffer) {
    return der_put_CK_DATE(*(CK_DATE *)attribute.pValue, buffer);
}

int der_get_attribute_date(dercursor cursor, CK_ATTRIBUTE* attribute) {
    return der_get_CK_DATE(cursor, attribute->pValue);
}



func_t func_array[] = {
        {.key=CKA_TOKEN, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_CLASS, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_PRIVATE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_LABEL, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_APPLICATION, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_VALUE, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_OBJECT_ID, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_CERTIFICATE_TYPE, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_ISSUER, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_SERIAL_NUMBER, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_AC_ISSUER, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_OWNER, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_ATTR_TYPES, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_TRUSTED, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_CERTIFICATE_CATEGORY, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_JAVA_MIDP_SECURITY_DOMAIN, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_URL, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_HASH_OF_SUBJECT_PUBLIC_KEY, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_HASH_OF_ISSUER_PUBLIC_KEY, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_NAME_HASH_ALGORITHM, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_CHECK_VALUE, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_KEY_TYPE, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_SUBJECT, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_ID, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_SENSITIVE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_ENCRYPT, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_DECRYPT, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_WRAP, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_UNWRAP, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_SIGN, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_SIGN_RECOVER, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_VERIFY, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_VERIFY_RECOVER,.put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_DERIVE,.put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_START_DATE, der_put_attribute_date, .get=der_get_attribute_date},
        {.key=CKA_END_DATE, der_put_attribute_date, .get=der_get_attribute_date},
        {.key=CKA_MODULUS, .put=der_put_attribute_long, .get=der_get_attribute_long},  // Big integer
        {.key=CKA_MODULUS_BITS,  .put=der_put_attribute_long, .get=der_get_attribute_long},  // not defined
        {.key=CKA_PUBLIC_EXPONENT, .put=der_put_attribute_long, .get=der_get_attribute_long}, // Big integer
        {.key=CKA_PRIVATE_EXPONENT, .put=der_put_attribute_long, .get=der_get_attribute_long}, // Big integer
        {.key=CKA_PRIME_1, .put=der_put_attribute_long, .get=der_get_attribute_long}, // Big integer
        {.key=CKA_PRIME_2, .put=der_put_attribute_long, .get=der_get_attribute_long}, // Big integer
        {.key=CKA_EXPONENT_1, .put=der_put_attribute_long, .get=der_get_attribute_long},  // Big integer
        {.key=CKA_EXPONENT_2, .put=der_put_attribute_long, .get=der_get_attribute_long},  // Big integer
        {.key=CKA_COEFFICIENT, .put=der_put_attribute_long, .get=der_get_attribute_long},  // Big integer
        {.key=CKA_PUBLIC_KEY_INFO, .put=der_put_attribute_byte_array, .get=der_get_attribute_byte_array},
        {.key=CKA_PRIME, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_SUBPRIME, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_BASE, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_PRIME_BITS,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_SUBPRIME_BITS,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_SUB_PRIME_BITS, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_VALUE_BITS, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_VALUE_LEN, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_EXTRACTABLE,  .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_LOCAL,.put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_NEVER_EXTRACTABLE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_ALWAYS_SENSITIVE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_KEY_GEN_MECHANISM, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_MODIFIABLE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_COPYABLE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_DESTROYABLE, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_ECDSA_PARAMS, .put=NULL}, // type not defined
        {.key=CKA_EC_PARAMS, .put=NULL}, // type not defined
        {.key=CKA_EC_POINT, .put=NULL}, // type not defined
        {.key=CKA_SECONDARY_AUTH, .put=NULL},  // type not defined
        {.key=CKA_AUTH_PIN_FLAGS, .put=NULL}, // type not defined
        {.key=CKA_ALWAYS_AUTHENTICATE,  .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_WRAP_WITH_TRUSTED,  .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_WRAP_TEMPLATE, .put=NULL}, // CK_ATTRIBUTE_PTR
        {.key=CKA_UNWRAP_TEMPLATE, .put=NULL},  // CK_ATTRIBUTE_PTR
        {.key=CKA_DERIVE_TEMPLATE, .put=NULL},  // type not defined
        {.key=CKA_OTP_FORMAT, .put=NULL},  // type not defined
        {.key=CKA_OTP_LENGTH, .put=NULL},  // type not defined
        {.key=CKA_OTP_TIME_INTERVAL, .put=NULL},  // type not defined
        {.key=CKA_OTP_USER_FRIENDLY_MODE, .put=NULL},  // type not defined
        {.key=CKA_OTP_CHALLENGE_REQUIREMENT, .put=NULL},  // type not defined
        {.key=CKA_OTP_TIME_REQUIREMENT, .put=NULL},  // type not defined
        {.key=CKA_OTP_COUNTER_REQUIREMENT, .put=NULL},  // type not defined
        {.key=CKA_OTP_PIN_REQUIREMENT, .put=NULL},  // type not defined
        {.key=CKA_OTP_COUNTER, .put=NULL},  // type not defined
        {.key=CKA_OTP_TIME, .put=NULL},  // type not defined
        {.key=CKA_OTP_USER_IDENTIFIER, .put=NULL},  // type not defined
        {.key=CKA_OTP_SERVICE_IDENTIFIER, .put=NULL},  // type not defined
        {.key=CKA_OTP_SERVICE_LOGO, .put=NULL},  // type not defined
        {.key=CKA_OTP_SERVICE_LOGO_TYPE, .put=NULL},  // type not defined
        {.key=CKA_GOSTR3410_PARAMS, .put=NULL},  // type not defined
        {.key=CKA_GOSTR3411_PARAMS, .put=NULL},  // type not defined
        {.key=CKA_GOST28147_PARAMS, .put=NULL},  // type not defined
        {.key=CKA_HW_FEATURE_TYPE, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_RESET_ON_INIT, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_HAS_RESET, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_PIXEL_X, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_PIXEL_Y, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_RESOLUTION, .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_CHAR_ROWS,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_CHAR_COLUMNS,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_COLOR, .put=der_put_attribute_bool, .get=der_get_attribute_bool},
        {.key=CKA_BITS_PER_PIXEL,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_CHAR_SETS,  .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_ENCODING_METHODS, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_MIME_TYPES, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_MECHANISM_TYPE,  .put=der_put_attribute_long, .get=der_get_attribute_long},
        {.key=CKA_REQUIRED_CMS_ATTRIBUTES, .put=NULL}, // type not defined
        {.key=CKA_DEFAULT_CMS_ATTRIBUTES, .put=NULL}, // type not defined
        {.key=CKA_SUPPORTED_CMS_ATTRIBUTES, .put=NULL}, // type not defined
        {.key=CKA_ALLOWED_MECHANISMS, .put=NULL}, // CK_MECHANISM_TYPE _PTR
        {.key=CKA_VENDOR_DEFINED, .put=NULL}
};

size_t funckeyfunct(const func_t *r)
{
    return r->key;
}


NEDTRIE_HEAD(func_tree_s, func_s);


NEDTRIE_GENERATE(static, func_tree_s, func_s, link, funckeyfunct, NEDTRIE_NOBBLEZEROS(func_tree_s));


void init_func_tree()
{
    NEDTRIE_INIT(&functree);
    int i;
    for (i=0; i< sizeof(func_array)/ sizeof(func_t); i++)
        NEDTRIE_INSERT(func_tree_s, &functree, &func_array[i]);
}

func_t* find_func(size_t key) {
    func_t s, *r;
    s.key = key;
    r = NEDTRIE_FIND(func_tree_s, &functree, &s);
    return r;
}
