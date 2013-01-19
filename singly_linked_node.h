#ifndef SINGLY_LINKED_NODE_H
#define SINGLY_LINKED_NODE_H

template <class CT> class SinglyLinkedNode {

  private:
    CT value;
    SinglyLinkedNode* next;

  public:
    SinglyLinkedNode<CT>(CT, SinglyLinkedNode*);
    ~SinglyLinkedNode<CT>();

    CT getValue();
    SinglyLinkedNode<CT>* getNext();
    void setNext(SinglyLinkedNode<CT>*);

};

template <class CT> SinglyLinkedNode<CT>::SinglyLinkedNode(CT value, SinglyLinkedNode* next) {
  this->value = value;
  this->next = next;
}

template <class CT> SinglyLinkedNode<CT>::~SinglyLinkedNode() {
}

template <class CT> CT SinglyLinkedNode<CT>::getValue() {
  return this->value;
}

template <class CT> SinglyLinkedNode<CT>* SinglyLinkedNode<CT>::getNext() {
  return this->next;
}

template <class CT> void SinglyLinkedNode<CT>::setNext(SinglyLinkedNode<CT>* next) {
  this->next = next;
}

#endif
