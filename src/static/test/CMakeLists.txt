set(TEST_C_FILES
    AsymEncryptDecryptTests.cpp
    AsymWrapUnwrapTests.cpp
    DeriveTests.cpp
    DigestTests.cpp
    InfoTests.cpp
    InitTests.cpp
    ObjectTests.cpp
    RandomTests.cpp
    SessionTests.cpp
    SignVerifyTests.cpp
    SymmetricAlgorithmTests.cpp
    TestsBase.cpp
    TestsNoPINInitBase.cpp
    TokenTests.cpp
    UserTests.cpp
    p11test.cpp
)

set(TEST_H_FILES
    AsymEncryptDecryptTests.h
    AsymWrapUnwrapTests.h
    DeriveTests.h
    DigestTests.h
    InfoTests.h
    InitTests.h
    ObjectTests.h
    RandomTests.h
    SessionTests.h
    SignVerifyTests.h
    SymmetricAlgorithmTests.h
    TestsBase.h
    TestsNoPINInitBase.h
    TokenTests.h
    UserTests.h
)


add_executable(softhsm2.test ${TEST_C_FILES})