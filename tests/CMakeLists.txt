project(tests)

add_executable(test1 test1.cpp)
add_executable(test2 test2.cpp)

target_link_libraries(test1 Arithmetic)
target_link_libraries(test2 Arithmetic)

add_test(NAME Test1 COMMAND test1)
add_test(NAME Test2 COMMAND test2 )
