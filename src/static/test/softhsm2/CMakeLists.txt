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
    osmutex.cpp
        log.cpp
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

include_directories(${PROJECT_SOURCE_DIR}/src/static)

add_executable(softhsm2.test ${TEST_C_FILES})

target_link_libraries(softhsm2.test ${CPPUNIT_LIBRARIES})


target_link_libraries(softhsm2.test keehive)
add_test(softhsm2.test softhsm2.test)

# used during test run
file(COPY softhsm2.conf DESTINATION ${PROJECT_BINARY_DIR}/src/static/test/softhsm2/)
file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/src/static/test/softhsm2/tokens/)
