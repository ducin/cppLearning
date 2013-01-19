message(STATUS "executing src")

add_executable(main main.cpp)

add_executable(sort sort.cpp)

add_executable(test test.cpp list_test.cpp)
target_link_libraries(test cppunit)
