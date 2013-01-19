#!/bin/bash

g++ test.cpp -o test singly_linked_list.cpp singly_linked_node.cpp list_test.cpp -lcppunit
g++ main.cpp -o main singly_linked_list.cpp singly_linked_node.cpp

