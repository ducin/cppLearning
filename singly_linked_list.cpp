#include <iostream>

#include "singly_linked_list.h"
#include "singly_linked_node.h"

SinglyLinkedList::SinglyLinkedList() {
  head = NULL;
}

SinglyLinkedList::~SinglyLinkedList() {
  while (!empty()) {
    popFront();
  }
}

void SinglyLinkedList::pushFront(int value) {
  SinglyLinkedNode* new_node = new SinglyLinkedNode(value, head);
  head = new_node;
}

int SinglyLinkedList::popFront() {
  if (head == NULL) {
//    return NULL;
  } else {
    SinglyLinkedNode* next = head->getNext();
    int value = head->getValue();
    head->~SinglyLinkedNode();
    head = next;
    return value;
  }
}

void SinglyLinkedList::pushBack(int value) {
  SinglyLinkedNode* new_node = new SinglyLinkedNode(value, NULL);
  if (head == NULL) {
    head = new_node;
  } else {
    SinglyLinkedNode* tmp_node = head;
    while (tmp_node->getNext() != NULL) {
      tmp_node = tmp_node->getNext();
    }
    tmp_node->setNext(new_node);
  }
}

int SinglyLinkedList::popBack() {
  if (head == NULL) { // empty
//    return NULL;
  } else if (head->getNext() == NULL) { // 1 element
    int value = head->getValue();
    head->~SinglyLinkedNode();
    head = NULL;
    return value;
  } else {
    SinglyLinkedNode *pre_tail = head, *tail = head->getNext();
    while (tail->getNext() != NULL) {
      pre_tail = tail;
      tail = tail->getNext();
    }
    int value = tail->getValue();
    tail->~SinglyLinkedNode();
    return value;
  }
}

bool SinglyLinkedList::empty() {
  return head == NULL;
}

void SinglyLinkedList::display() {
  std::cout << "List size = " << size() << ", elements" << std::endl;
  SinglyLinkedNode* tmp_node = head;
  while (tmp_node != NULL) { // iterate through all nodes
    std::cout << tmp_node->getValue() << std::endl;
    tmp_node = tmp_node->getNext();
  }
}

int SinglyLinkedList::size() {
  int size = 0;
  SinglyLinkedNode* tmp_node = head;
  while (tmp_node != NULL) {
    size++;
    tmp_node = tmp_node->getNext();
  }
  return size;
}
