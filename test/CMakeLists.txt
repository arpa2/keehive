



add_executable(keehive.test test_keehive.c)
add_dependencies(keehive.test keehive.test)
target_link_libraries(keehive.test keehive cmocka)

add_test(keehive.test keehive.test)

#add_test(keehive.test_valgrind valgrind
#        --error-exitcode=1 --read-var-info=yes
#        --leak-check=full --show-leak-kinds=all
#        ./keehive.test)
