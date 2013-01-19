#include "singly_linked_node.h"
#include "singly_linked_list.h"

#include <iostream>

void runInt() {
  std::cout << "running INT template" << std::endl;
  
  SinglyLinkedList<int>* list = new SinglyLinkedList<int>();
  int value;

  list->display();
  // assert size = 0
  // assert empty = true

  list->pushFront(3);
  // assert size = 1
  // assert empty = false
  list->display();

  list->pushBack(4);
  // assert size = 2
  list->display();

  value = list->popFront();
  // assert size = 1
  // assert value = 3
  list->display();

  value = list->popBack();
  // assert size = 0
  // assert value = 4
  // assert sempty = true
  list->display();

  list->~SinglyLinkedList();
}

void runFloat() {
  std::cout << "running FLOAT template" << std::endl;
  
  SinglyLinkedList<float>* list = new SinglyLinkedList<float>();
  float value;

  list->display();
  // assert size = 0
  // assert empty = true

  list->pushFront(3.0);
  // assert size = 1
  // assert empty = false
  list->display();

  list->pushBack(4.0);
  // assert size = 2
  list->display();

  value = list->popFront();
  // assert size = 1
  // assert value = 3.0
  list->display();

  value = list->popBack();
  // assert size = 0
  // assert value = 4.0
  // assert sempty = true
  list->display();

  list->~SinglyLinkedList();
}

int main(int argc, char* argv[]) {
  runInt();
  runFloat();
}
