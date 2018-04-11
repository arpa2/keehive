include_directories (${PROJECT_SOURCE_DIR}/src/static)
include_directories (${PROJECT_SOURCE_DIR}/src/generated)
include_directories (${PROJECT_SOURCE_DIR}/src/)


set(KEEHIVE_TEST_LINK_LIRARIES
        ${LIBCMOCKA_LIBRARIES}
)

add_executable(api.test test_api.c)
add_dependencies(api.test api.test)
target_link_libraries(api.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(api.test api.test)


add_executable(packunpack.test test_packunpack.c)
add_dependencies(packunpack.test packunpack.test)
target_link_libraries(packunpack.test keehive ${KEEHIVE_TEST_LINK_LIRARIES})
add_test(packunpack.test packunpack.test)
