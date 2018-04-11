set(TEST_C_FILES
        test_derputget.c
        )

set(TEST_H_FILES
        )

include_directories(${PROJECT_SOURCE_DIR}/src/static)
include_directories (${PROJECT_SOURCE_DIR}/src/generated)


add_executable(derputget.test ${TEST_C_FILES})

target_link_libraries(derputget.test ${CPPUNIT_LIBRARIES})
target_link_libraries(derputget.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(derputget.test derputget.test)
