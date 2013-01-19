#include "singly_linked_node.h"

SinglyLinkedNode::SinglyLinkedNode(int value, SinglyLinkedNode* next) {
  this->value = value;
  this->next = next;
}

SinglyLinkedNode::~SinglyLinkedNode() {
}

int SinglyLinkedNode::getValue() {
  return this->value;
}

SinglyLinkedNode* SinglyLinkedNode::getNext() {
  return this->next;
}

void SinglyLinkedNode::setNext(SinglyLinkedNode* next) {
  this->next = next;
}
