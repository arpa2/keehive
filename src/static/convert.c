#include "derput.h"
#include "convert.h"



int der_put_rfc2279_string(const CK_ATTRIBUTE* pTemplate, dercursor* cursor)
{
    memcpy(cursor->derptr, pTemplate->pValue, pTemplate->ulValueLen);
    cursor->derlen = pTemplate->ulValueLen;
    return 0;
}

int der_get_rfc2279_string(dercursor* cursor, CK_ATTRIBUTE* array)
{
    memcpy(array, cursor->derptr, cursor->derlen);
    return 0;
}


func_tree_t functree;


func_t func_array[] = {
        {.key=CKA_TOKEN, .put=NULL},
        {.key=CKA_CLASS, .put=NULL},
        {.key=CKA_PRIVATE, .put=NULL},
        {.key=CKA_LABEL, .put=der_put_rfc2279_string, .get=der_get_rfc2279_string},
        {.key=CKA_APPLICATION, .put=NULL},
        {.key=CKA_VALUE, .put=NULL},
        {.key=CKA_OBJECT_ID, .put=NULL},
        {.key=CKA_CERTIFICATE_TYPE, .put=NULL},
        {.key=CKA_ISSUER, .put=NULL},
        {.key=CKA_SERIAL_NUMBER, .put=NULL},
        {.key=CKA_AC_ISSUER, .put=NULL},
        {.key=CKA_OWNER, .put=NULL},
        {.key=CKA_ATTR_TYPES, .put=NULL},
        {.key=CKA_TRUSTED, .put=NULL},
        {.key=CKA_CERTIFICATE_CATEGORY, .put=NULL},
        {.key=CKA_JAVA_MIDP_SECURITY_DOMAIN, .put=NULL},
        {.key=CKA_URL, .put=NULL},
        {.key=CKA_HASH_OF_SUBJECT_PUBLIC_KEY, .put=NULL},
        {.key=CKA_HASH_OF_ISSUER_PUBLIC_KEY, .put=NULL},
        {.key=CKA_NAME_HASH_ALGORITHM, .put=NULL},
        {.key=CKA_CHECK_VALUE, .put=NULL},
        {.key=CKA_KEY_TYPE, .put=NULL},
        {.key=CKA_SUBJECT, .put=NULL},
        {.key=CKA_ID, .put=NULL},
        {.key=CKA_SENSITIVE, .put=NULL},
        {.key=CKA_ENCRYPT, .put=NULL},
        {.key=CKA_DECRYPT, .put=NULL},
        {.key=CKA_WRAP, .put=NULL},
        {.key=CKA_UNWRAP, .put=NULL},
        {.key=CKA_SIGN, .put=NULL},
        {.key=CKA_SIGN_RECOVER, .put=NULL},
        {.key=CKA_VERIFY, .put=NULL},
        {.key=CKA_VERIFY_RECOVER, .put=NULL},
        {.key=CKA_DERIVE, .put=NULL},
        {.key=CKA_START_DATE, .put=NULL},
        {.key=CKA_END_DATE, .put=NULL},
        {.key=CKA_MODULUS, .put=NULL},
        {.key=CKA_MODULUS_BITS, .put=NULL},
        {.key=CKA_PUBLIC_EXPONENT, .put=NULL},
        {.key=CKA_PRIVATE_EXPONENT, .put=NULL},
        {.key=CKA_PRIME_1, .put=NULL},
        {.key=CKA_PRIME_2, .put=NULL},
        {.key=CKA_EXPONENT_1, .put=NULL},
        {.key=CKA_EXPONENT_2, .put=NULL},
        {.key=CKA_COEFFICIENT, .put=NULL},
        {.key=CKA_PUBLIC_KEY_INFO, .put=NULL},
        {.key=CKA_PRIME, .put=NULL},
        {.key=CKA_SUBPRIME, .put=NULL},
        {.key=CKA_BASE, .put=NULL},
        {.key=CKA_PRIME_BITS, .put=NULL},
        {.key=CKA_SUBPRIME_BITS, .put=NULL},
        {.key=CKA_SUB_PRIME_BITS, .put=NULL},
        {.key=CKA_VALUE_BITS, .put=NULL},
        {.key=CKA_VALUE_LEN, .put=NULL},
        {.key=CKA_EXTRACTABLE, .put=NULL},
        {.key=CKA_LOCAL, .put=NULL},
        {.key=CKA_NEVER_EXTRACTABLE, .put=NULL},
        {.key=CKA_ALWAYS_SENSITIVE, .put=NULL},
        {.key=CKA_KEY_GEN_MECHANISM, .put=NULL},
        {.key=CKA_MODIFIABLE, .put=NULL},
        {.key=CKA_COPYABLE, .put=NULL},
        {.key=CKA_DESTROYABLE, .put=NULL},
        {.key=CKA_ECDSA_PARAMS, .put=NULL},
        {.key=CKA_EC_PARAMS, .put=NULL},
        {.key=CKA_EC_POINT, .put=NULL},
        {.key=CKA_SECONDARY_AUTH, .put=NULL},
        {.key=CKA_AUTH_PIN_FLAGS, .put=NULL},
        {.key=CKA_ALWAYS_AUTHENTICATE, .put=NULL},
        {.key=CKA_WRAP_WITH_TRUSTED, .put=NULL},
        {.key=CKA_WRAP_TEMPLATE, .put=NULL},
        {.key=CKA_UNWRAP_TEMPLATE, .put=NULL},
        {.key=CKA_DERIVE_TEMPLATE, .put=NULL},
        {.key=CKA_OTP_FORMAT, .put=NULL},
        {.key=CKA_OTP_LENGTH, .put=NULL},
        {.key=CKA_OTP_TIME_INTERVAL, .put=NULL},
        {.key=CKA_OTP_USER_FRIENDLY_MODE, .put=NULL},
        {.key=CKA_OTP_CHALLENGE_REQUIREMENT, .put=NULL},
        {.key=CKA_OTP_TIME_REQUIREMENT, .put=NULL},
        {.key=CKA_OTP_COUNTER_REQUIREMENT, .put=NULL},
        {.key=CKA_OTP_PIN_REQUIREMENT, .put=NULL},
        {.key=CKA_OTP_COUNTER, .put=NULL},
        {.key=CKA_OTP_TIME, .put=NULL},
        {.key=CKA_OTP_USER_IDENTIFIER, .put=NULL},
        {.key=CKA_OTP_SERVICE_IDENTIFIER, .put=NULL},
        {.key=CKA_OTP_SERVICE_LOGO, .put=NULL},
        {.key=CKA_OTP_SERVICE_LOGO_TYPE, .put=NULL},
        {.key=CKA_GOSTR3410_PARAMS, .put=NULL},
        {.key=CKA_GOSTR3411_PARAMS, .put=NULL},
        {.key=CKA_GOST28147_PARAMS, .put=NULL},
        {.key=CKA_HW_FEATURE_TYPE, .put=NULL},
        {.key=CKA_RESET_ON_INIT, .put=NULL},
        {.key=CKA_HAS_RESET, .put=NULL},
        {.key=CKA_PIXEL_X, .put=NULL},
        {.key=CKA_PIXEL_Y, .put=NULL},
        {.key=CKA_RESOLUTION, .put=NULL},
        {.key=CKA_CHAR_ROWS, .put=NULL},
        {.key=CKA_CHAR_COLUMNS, .put=NULL},
        {.key=CKA_COLOR, .put=NULL},
        {.key=CKA_BITS_PER_PIXEL, .put=NULL},
        {.key=CKA_CHAR_SETS, .put=NULL},
        {.key=CKA_ENCODING_METHODS, .put=NULL},
        {.key=CKA_MIME_TYPES, .put=NULL},
        {.key=CKA_MECHANISM_TYPE, .put=NULL},
        {.key=CKA_REQUIRED_CMS_ATTRIBUTES, .put=NULL},
        {.key=CKA_DEFAULT_CMS_ATTRIBUTES, .put=NULL},
        {.key=CKA_SUPPORTED_CMS_ATTRIBUTES, .put=NULL},
        {.key=CKA_ALLOWED_MECHANISMS, .put=NULL},
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
