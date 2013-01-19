#ifndef LIST_TEST_H
#define LIST_TEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ListTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE( ListTest );
  CPPUNIT_TEST( TestOperations );
  CPPUNIT_TEST_SUITE_END();

 public:
  void setUp(void) {}
  void tearDown(void) {}

  void TestOperations(void); 
};

#endif
