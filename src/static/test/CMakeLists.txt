include_directories (${PROJECT_SOURCE_DIR}/src/static)
include_directories (${PROJECT_SOURCE_DIR}/src/generated)
include_directories (${PROJECT_SOURCE_DIR}/src/)

add_executable(derputget.test test_derputget.c)
target_link_libraries(derputget.test ${CPPUNIT_LIBRARIES})
target_link_libraries(derputget.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(derputget.test derputget.test)


add_executable(libload.test test_libload.cpp)
add_dependencies(libload.test keehive)
target_link_libraries(libload.test -ldl keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(libload.test libload.test)


add_executable(simple.test test_simple.c)
add_dependencies(simple.test keehive)
target_link_libraries(simple.test -ldl keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(simple.test simple.test)