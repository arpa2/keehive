include_directories (".")

add_executable(api.test test_api.c)
add_dependencies(api.test api.test)
target_link_libraries(api.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(api.test api.test)


add_executable(pack.test test_pack.c)
add_dependencies(pack.test pack.test)
target_link_libraries(pack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(pack.test pack.test)


add_executable(libload.test test_libload.cpp)
add_dependencies(libload.test libload.test keehive)
add_test(libload.test libload.test)