#ifndef SINGLY_LINKED_NODE_H
#define SINGLY_LINKED_NODE_H

class SinglyLinkedNode {

  private:
    int value;
    SinglyLinkedNode* next;

  public:
    SinglyLinkedNode(int, SinglyLinkedNode*);
    ~SinglyLinkedNode();

    int getValue();
    SinglyLinkedNode* getNext();
    void setNext(SinglyLinkedNode*);

};

#endif
