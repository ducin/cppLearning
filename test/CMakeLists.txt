message(STATUS "entering test")

find_library(CPPUNIT_LIB cppunit)
if(CPPUNIT_LIB)
  message(STATUS "cppunit found in ${CPPUNIT_LIB}")
else()
  message(FATAL_ERROR "cppunit not found")
endif()

add_executable(runtest test.cpp list_test.cpp)
target_link_libraries(runtest cppunit)
