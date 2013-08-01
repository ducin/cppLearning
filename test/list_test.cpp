#include <cppunit/extensions/HelperMacros.h>
#include "list_test.h"

#include "../src/structures/singly_linked_list/node.h"
#include "../src/structures/singly_linked_list/list.h"

CPPUNIT_TEST_SUITE_REGISTRATION( ListTest );

void ListTest::TestOperationsInt(void) {
  SinglyLinkedList<int>* list = new SinglyLinkedList<int>();
  int value;

  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( list->empty() );

  list->pushFront(3);
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( !list->empty() );

  list->pushBack(4);
  CPPUNIT_ASSERT( list->size() == 2 );

  list->display();

  value = list->popFront();
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( value == 3 );

  value = list->popBack();
  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( value == 4 );
  CPPUNIT_ASSERT( list->empty() );

  list->~SinglyLinkedList();
}

void ListTest::TestOperationsDouble(void) {
  SinglyLinkedList<double>* list = new SinglyLinkedList<double>();
  double value;

  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( list->empty() );

  list->pushFront(3.3);
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( !list->empty() );

  list->pushBack(4.4);
  CPPUNIT_ASSERT( list->size() == 2 );

  list->display();

  value = list->popFront();
  CPPUNIT_ASSERT( list->size() == 1 );
  CPPUNIT_ASSERT( value == 3.3 );

  value = list->popBack();
  CPPUNIT_ASSERT( list->size() == 0 );
  CPPUNIT_ASSERT( value == 4.4 );
  CPPUNIT_ASSERT( list->empty() );

  list->~SinglyLinkedList();
}
