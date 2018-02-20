#include "derput.h"
#include "convert.h"



dercursor rfc2279_string(const CK_ATTRIBUTE* pTemplate)
{
    dercursor cursor;
    cursor.derptr = pTemplate->pValue;
    cursor.derlen = pTemplate->ulValueLen;
    return cursor;
}


func_tree_t functree;


func_t func_array[] = {
        {.key=CKA_TOKEN, .func=NULL},
        {.key=CKA_CLASS, .func=NULL},
        {.key=CKA_PRIVATE, .func=NULL},
        {.key=CKA_LABEL, .func=rfc2279_string},
        {.key=CKA_APPLICATION, .func=NULL},
        {.key=CKA_VALUE, .func=NULL},
        {.key=CKA_OBJECT_ID, .func=NULL},
        {.key=CKA_CERTIFICATE_TYPE, .func=NULL},
        {.key=CKA_ISSUER, .func=NULL},
        {.key=CKA_SERIAL_NUMBER, .func=NULL},
        {.key=CKA_AC_ISSUER, .func=NULL},
        {.key=CKA_OWNER, .func=NULL},
        {.key=CKA_ATTR_TYPES, .func=NULL},
        {.key=CKA_TRUSTED, .func=NULL},
        {.key=CKA_CERTIFICATE_CATEGORY, .func=NULL},
        {.key=CKA_JAVA_MIDP_SECURITY_DOMAIN, .func=NULL},
        {.key=CKA_URL, .func=NULL},
        {.key=CKA_HASH_OF_SUBJECT_PUBLIC_KEY, .func=NULL},
        {.key=CKA_HASH_OF_ISSUER_PUBLIC_KEY, .func=NULL},
        {.key=CKA_NAME_HASH_ALGORITHM, .func=NULL},
        {.key=CKA_CHECK_VALUE, .func=NULL},
        {.key=CKA_KEY_TYPE, .func=NULL},
        {.key=CKA_SUBJECT, .func=NULL},
        {.key=CKA_ID, .func=NULL},
        {.key=CKA_SENSITIVE, .func=NULL},
        {.key=CKA_ENCRYPT, .func=NULL},
        {.key=CKA_DECRYPT, .func=NULL},
        {.key=CKA_WRAP, .func=NULL},
        {.key=CKA_UNWRAP, .func=NULL},
        {.key=CKA_SIGN, .func=NULL},
        {.key=CKA_SIGN_RECOVER, .func=NULL},
        {.key=CKA_VERIFY, .func=NULL},
        {.key=CKA_VERIFY_RECOVER, .func=NULL},
        {.key=CKA_DERIVE, .func=NULL},
        {.key=CKA_START_DATE, .func=NULL},
        {.key=CKA_END_DATE, .func=NULL},
        {.key=CKA_MODULUS, .func=NULL},
        {.key=CKA_MODULUS_BITS, .func=NULL},
        {.key=CKA_PUBLIC_EXPONENT, .func=NULL},
        {.key=CKA_PRIVATE_EXPONENT, .func=NULL},
        {.key=CKA_PRIME_1, .func=NULL},
        {.key=CKA_PRIME_2, .func=NULL},
        {.key=CKA_EXPONENT_1, .func=NULL},
        {.key=CKA_EXPONENT_2, .func=NULL},
        {.key=CKA_COEFFICIENT, .func=NULL},
        {.key=CKA_PUBLIC_KEY_INFO, .func=NULL},
        {.key=CKA_PRIME, .func=NULL},
        {.key=CKA_SUBPRIME, .func=NULL},
        {.key=CKA_BASE, .func=NULL},
        {.key=CKA_PRIME_BITS, .func=NULL},
        {.key=CKA_SUBPRIME_BITS, .func=NULL},
        {.key=CKA_SUB_PRIME_BITS, .func=NULL},
        {.key=CKA_VALUE_BITS, .func=NULL},
        {.key=CKA_VALUE_LEN, .func=NULL},
        {.key=CKA_EXTRACTABLE, .func=NULL},
        {.key=CKA_LOCAL, .func=NULL},
        {.key=CKA_NEVER_EXTRACTABLE, .func=NULL},
        {.key=CKA_ALWAYS_SENSITIVE, .func=NULL},
        {.key=CKA_KEY_GEN_MECHANISM, .func=NULL},
        {.key=CKA_MODIFIABLE, .func=NULL},
        {.key=CKA_COPYABLE, .func=NULL},
        {.key=CKA_DESTROYABLE, .func=NULL},
        {.key=CKA_ECDSA_PARAMS, .func=NULL},
        {.key=CKA_EC_PARAMS, .func=NULL},
        {.key=CKA_EC_POINT, .func=NULL},
        {.key=CKA_SECONDARY_AUTH, .func=NULL},
        {.key=CKA_AUTH_PIN_FLAGS, .func=NULL},
        {.key=CKA_ALWAYS_AUTHENTICATE, .func=NULL},
        {.key=CKA_WRAP_WITH_TRUSTED, .func=NULL},
        {.key=CKA_WRAP_TEMPLATE, .func=NULL},
        {.key=CKA_UNWRAP_TEMPLATE, .func=NULL},
        {.key=CKA_DERIVE_TEMPLATE, .func=NULL},
        {.key=CKA_OTP_FORMAT, .func=NULL},
        {.key=CKA_OTP_LENGTH, .func=NULL},
        {.key=CKA_OTP_TIME_INTERVAL, .func=NULL},
        {.key=CKA_OTP_USER_FRIENDLY_MODE, .func=NULL},
        {.key=CKA_OTP_CHALLENGE_REQUIREMENT, .func=NULL},
        {.key=CKA_OTP_TIME_REQUIREMENT, .func=NULL},
        {.key=CKA_OTP_COUNTER_REQUIREMENT, .func=NULL},
        {.key=CKA_OTP_PIN_REQUIREMENT, .func=NULL},
        {.key=CKA_OTP_COUNTER, .func=NULL},
        {.key=CKA_OTP_TIME, .func=NULL},
        {.key=CKA_OTP_USER_IDENTIFIER, .func=NULL},
        {.key=CKA_OTP_SERVICE_IDENTIFIER, .func=NULL},
        {.key=CKA_OTP_SERVICE_LOGO, .func=NULL},
        {.key=CKA_OTP_SERVICE_LOGO_TYPE, .func=NULL},
        {.key=CKA_GOSTR3410_PARAMS, .func=NULL},
        {.key=CKA_GOSTR3411_PARAMS, .func=NULL},
        {.key=CKA_GOST28147_PARAMS, .func=NULL},
        {.key=CKA_HW_FEATURE_TYPE, .func=NULL},
        {.key=CKA_RESET_ON_INIT, .func=NULL},
        {.key=CKA_HAS_RESET, .func=NULL},
        {.key=CKA_PIXEL_X, .func=NULL},
        {.key=CKA_PIXEL_Y, .func=NULL},
        {.key=CKA_RESOLUTION, .func=NULL},
        {.key=CKA_CHAR_ROWS, .func=NULL},
        {.key=CKA_CHAR_COLUMNS, .func=NULL},
        {.key=CKA_COLOR, .func=NULL},
        {.key=CKA_BITS_PER_PIXEL, .func=NULL},
        {.key=CKA_CHAR_SETS, .func=NULL},
        {.key=CKA_ENCODING_METHODS, .func=NULL},
        {.key=CKA_MIME_TYPES, .func=NULL},
        {.key=CKA_MECHANISM_TYPE, .func=NULL},
        {.key=CKA_REQUIRED_CMS_ATTRIBUTES, .func=NULL},
        {.key=CKA_DEFAULT_CMS_ATTRIBUTES, .func=NULL},
        {.key=CKA_SUPPORTED_CMS_ATTRIBUTES, .func=NULL},
        {.key=CKA_ALLOWED_MECHANISMS, .func=NULL},
        {.key=CKA_VENDOR_DEFINED, .func=NULL}
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
