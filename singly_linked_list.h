#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "singly_linked_node.h"

class SinglyLinkedList {

  private:
    SinglyLinkedNode* head;

  public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void pushFront(int);
    int popFront();
    void pushBack(int);
    int popBack();

    bool empty();
    void display();
    int size();

};

#endif
