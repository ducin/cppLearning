#include <cppunit/extensions/HelperMacros.h>
#include "list_test.h"

#include "singly_linked_node.h"
#include "singly_linked_list.h"

CPPUNIT_TEST_SUITE_REGISTRATION( ListTest );

void ListTest::TestOperations(void) {
  SinglyLinkedList* list = new SinglyLinkedList();
  int value;

  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( list->empty() );

  list->pushFront(3);
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( !list->empty() );

  list->pushBack(4);
  CPPUNIT_ASSERT( list->size() == 2 );

  value = list->popFront();
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( value == 3 );

  value = list->popBack();
  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( value == 4 );
  CPPUNIT_ASSERT( list->empty() );

  list->~SinglyLinkedList();
}
