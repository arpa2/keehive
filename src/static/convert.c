#include "derput.h"
#include "convert.h"



dercursor not_implemented(const CK_ATTRIBUTE* pTemplate) {

    (void) pTemplate; // not used

    return der_put_null();
};


dercursor rfc2279_string(const CK_ATTRIBUTE* pTemplate)
{
    dercursor cursor;
    cursor.derptr = pTemplate->pValue;
    cursor.derlen = pTemplate->ulValueLen;
    return cursor;
}


func_tree_t functree;


func_t func_array[] = {
        {.key=CKA_TOKEN, .func=not_implemented},
        {.key=CKA_CLASS, .func=not_implemented},
        {.key=CKA_PRIVATE, .func=not_implemented},
        {.key=CKA_LABEL, .func=rfc2279_string},
        {.key=CKA_APPLICATION, .func=not_implemented},
        {.key=CKA_VALUE, .func=not_implemented},
        {.key=CKA_OBJECT_ID, .func=not_implemented},
        {.key=CKA_CERTIFICATE_TYPE, .func=not_implemented},
        {.key=CKA_ISSUER, .func=not_implemented},
        {.key=CKA_SERIAL_NUMBER, .func=not_implemented},
        {.key=CKA_AC_ISSUER, .func=not_implemented},
        {.key=CKA_OWNER, .func=not_implemented},
        {.key=CKA_ATTR_TYPES, .func=not_implemented},
        {.key=CKA_TRUSTED, .func=not_implemented},
        {.key=CKA_CERTIFICATE_CATEGORY, .func=not_implemented},
        {.key=CKA_JAVA_MIDP_SECURITY_DOMAIN, .func=not_implemented},
        {.key=CKA_URL, .func=not_implemented},
        {.key=CKA_HASH_OF_SUBJECT_PUBLIC_KEY, .func=not_implemented},
        {.key=CKA_HASH_OF_ISSUER_PUBLIC_KEY, .func=not_implemented},
        {.key=CKA_NAME_HASH_ALGORITHM, .func=not_implemented},
        {.key=CKA_CHECK_VALUE, .func=not_implemented},
        {.key=CKA_KEY_TYPE, .func=not_implemented},
        {.key=CKA_SUBJECT, .func=not_implemented},
        {.key=CKA_ID, .func=not_implemented},
        {.key=CKA_SENSITIVE, .func=not_implemented},
        {.key=CKA_ENCRYPT, .func=not_implemented},
        {.key=CKA_DECRYPT, .func=not_implemented},
        {.key=CKA_WRAP, .func=not_implemented},
        {.key=CKA_UNWRAP, .func=not_implemented},
        {.key=CKA_SIGN, .func=not_implemented},
        {.key=CKA_SIGN_RECOVER, .func=not_implemented},
        {.key=CKA_VERIFY, .func=not_implemented},
        {.key=CKA_VERIFY_RECOVER, .func=not_implemented},
        {.key=CKA_DERIVE, .func=not_implemented},
        {.key=CKA_START_DATE, .func=not_implemented},
        {.key=CKA_END_DATE, .func=not_implemented},
        {.key=CKA_MODULUS, .func=not_implemented},
        {.key=CKA_MODULUS_BITS, .func=not_implemented},
        {.key=CKA_PUBLIC_EXPONENT, .func=not_implemented},
        {.key=CKA_PRIVATE_EXPONENT, .func=not_implemented},
        {.key=CKA_PRIME_1, .func=not_implemented},
        {.key=CKA_PRIME_2, .func=not_implemented},
        {.key=CKA_EXPONENT_1, .func=not_implemented},
        {.key=CKA_EXPONENT_2, .func=not_implemented},
        {.key=CKA_COEFFICIENT, .func=not_implemented},
        {.key=CKA_PUBLIC_KEY_INFO, .func=not_implemented},
        {.key=CKA_PRIME, .func=not_implemented},
        {.key=CKA_SUBPRIME, .func=not_implemented},
        {.key=CKA_BASE, .func=not_implemented},
        {.key=CKA_PRIME_BITS, .func=not_implemented},
        {.key=CKA_SUBPRIME_BITS, .func=not_implemented},
        {.key=CKA_SUB_PRIME_BITS, .func=not_implemented},
        {.key=CKA_VALUE_BITS, .func=not_implemented},
        {.key=CKA_VALUE_LEN, .func=not_implemented},
        {.key=CKA_EXTRACTABLE, .func=not_implemented},
        {.key=CKA_LOCAL, .func=not_implemented},
        {.key=CKA_NEVER_EXTRACTABLE, .func=not_implemented},
        {.key=CKA_ALWAYS_SENSITIVE, .func=not_implemented},
        {.key=CKA_KEY_GEN_MECHANISM, .func=not_implemented},
        {.key=CKA_MODIFIABLE, .func=not_implemented},
        {.key=CKA_COPYABLE, .func=not_implemented},
        {.key=CKA_DESTROYABLE, .func=not_implemented},
        {.key=CKA_ECDSA_PARAMS, .func=not_implemented},
        {.key=CKA_EC_PARAMS, .func=not_implemented},
        {.key=CKA_EC_POINT, .func=not_implemented},
        {.key=CKA_SECONDARY_AUTH, .func=not_implemented},
        {.key=CKA_AUTH_PIN_FLAGS, .func=not_implemented},
        {.key=CKA_ALWAYS_AUTHENTICATE, .func=not_implemented},
        {.key=CKA_WRAP_WITH_TRUSTED, .func=not_implemented},
        {.key=CKA_WRAP_TEMPLATE, .func=not_implemented},
        {.key=CKA_UNWRAP_TEMPLATE, .func=not_implemented},
        {.key=CKA_DERIVE_TEMPLATE, .func=not_implemented},
        {.key=CKA_OTP_FORMAT, .func=not_implemented},
        {.key=CKA_OTP_LENGTH, .func=not_implemented},
        {.key=CKA_OTP_TIME_INTERVAL, .func=not_implemented},
        {.key=CKA_OTP_USER_FRIENDLY_MODE, .func=not_implemented},
        {.key=CKA_OTP_CHALLENGE_REQUIREMENT, .func=not_implemented},
        {.key=CKA_OTP_TIME_REQUIREMENT, .func=not_implemented},
        {.key=CKA_OTP_COUNTER_REQUIREMENT, .func=not_implemented},
        {.key=CKA_OTP_PIN_REQUIREMENT, .func=not_implemented},
        {.key=CKA_OTP_COUNTER, .func=not_implemented},
        {.key=CKA_OTP_TIME, .func=not_implemented},
        {.key=CKA_OTP_USER_IDENTIFIER, .func=not_implemented},
        {.key=CKA_OTP_SERVICE_IDENTIFIER, .func=not_implemented},
        {.key=CKA_OTP_SERVICE_LOGO, .func=not_implemented},
        {.key=CKA_OTP_SERVICE_LOGO_TYPE, .func=not_implemented},
        {.key=CKA_GOSTR3410_PARAMS, .func=not_implemented},
        {.key=CKA_GOSTR3411_PARAMS, .func=not_implemented},
        {.key=CKA_GOST28147_PARAMS, .func=not_implemented},
        {.key=CKA_HW_FEATURE_TYPE, .func=not_implemented},
        {.key=CKA_RESET_ON_INIT, .func=not_implemented},
        {.key=CKA_HAS_RESET, .func=not_implemented},
        {.key=CKA_PIXEL_X, .func=not_implemented},
        {.key=CKA_PIXEL_Y, .func=not_implemented},
        {.key=CKA_RESOLUTION, .func=not_implemented},
        {.key=CKA_CHAR_ROWS, .func=not_implemented},
        {.key=CKA_CHAR_COLUMNS, .func=not_implemented},
        {.key=CKA_COLOR, .func=not_implemented},
        {.key=CKA_BITS_PER_PIXEL, .func=not_implemented},
        {.key=CKA_CHAR_SETS, .func=not_implemented},
        {.key=CKA_ENCODING_METHODS, .func=not_implemented},
        {.key=CKA_MIME_TYPES, .func=not_implemented},
        {.key=CKA_MECHANISM_TYPE, .func=not_implemented},
        {.key=CKA_REQUIRED_CMS_ATTRIBUTES, .func=not_implemented},
        {.key=CKA_DEFAULT_CMS_ATTRIBUTES, .func=not_implemented},
        {.key=CKA_SUPPORTED_CMS_ATTRIBUTES, .func=not_implemented},
        {.key=CKA_ALLOWED_MECHANISMS, .func=not_implemented},
        {.key=CKA_VENDOR_DEFINED, .func=not_implemented}
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
