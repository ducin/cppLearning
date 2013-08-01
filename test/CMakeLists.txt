message(STATUS "entering test")

add_executable(runtest test.cpp list_test.cpp)
target_link_libraries(runtest cppunit)
