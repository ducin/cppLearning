#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "singly_linked_node.h"

#include <iostream>

template <class CT> class SinglyLinkedList {

  private:
    SinglyLinkedNode<CT>* head;

  public:
    SinglyLinkedList<CT>();
    ~SinglyLinkedList<CT>();

    void pushFront(CT);
    CT popFront();
    void pushBack(CT);
    CT popBack();

    bool empty();
    void display();
    int size();

};

template <class CT> SinglyLinkedList<CT>::SinglyLinkedList() {
  head = NULL;
}

template <class CT> SinglyLinkedList<CT>::~SinglyLinkedList() {
  while (!empty()) {
    popFront();
  }
}

template <class CT> void SinglyLinkedList<CT>::pushFront(CT value) {
  SinglyLinkedNode<CT>* new_node = new SinglyLinkedNode<CT>(value, head);
  head = new_node;
}

template <class CT> CT SinglyLinkedList<CT>::popFront() {
  if (head == NULL) {
//    return NULL;
  } else {
    SinglyLinkedNode<CT>* next = head->getNext();
    CT value = head->getValue();
    head->~SinglyLinkedNode<CT>();
    head = next;
    return value;
  }
}

template <class CT> void SinglyLinkedList<CT>::pushBack(CT value) {
  SinglyLinkedNode<CT>* new_node = new SinglyLinkedNode<CT>(value, NULL);
  if (head == NULL) {
    head = new_node;
  } else {
    SinglyLinkedNode<CT>* tmp_node = head;
    while (tmp_node->getNext() != NULL) {
      tmp_node = tmp_node->getNext();
    }
    tmp_node->setNext(new_node);
  }
}

template <class CT> CT SinglyLinkedList<CT>::popBack() {
  if (head == NULL) { // empty
//    return NULL;
  } else if (head->getNext() == NULL) { // 1 element
    CT value = head->getValue();
    head->~SinglyLinkedNode<CT>();
    head = NULL;
    return value;
  } else {
    SinglyLinkedNode<CT> *pre_tail = head, *tail = head->getNext();
    while (tail->getNext() != NULL) {
      pre_tail = tail;
      tail = tail->getNext();
    }
    CT value = tail->getValue();
    tail->~SinglyLinkedNode<CT>();
    return value;
  }
}

template <class CT> bool SinglyLinkedList<CT>::empty() {
  return head == NULL;
}

template <class CT> void SinglyLinkedList<CT>::display() {
  std::cout << "List size = " << size() << ", elements" << std::endl;
  SinglyLinkedNode<CT>* tmp_node = head;
  while (tmp_node != NULL) { // iterate through all nodes
    std::cout << tmp_node->getValue() << std::endl;
    tmp_node = tmp_node->getNext();
  }
}

template <class CT> int SinglyLinkedList<CT>::size() {
  int size = 0;
  SinglyLinkedNode<CT>* tmp_node = head;
  while (tmp_node != NULL) {
    size++;
    tmp_node = tmp_node->getNext();
  }
  return size;
}

#endif
