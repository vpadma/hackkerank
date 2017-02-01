/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
#include <iostream>
void ReversePrint(Node *head)
{ 
    std::vector<int> data_list;
    struct Node* currNode = head;
    for (; currNode != NULL; currNode = currNode->next) {
        data_list.push_back(currNode->data);
    }
    if (data_list.size() == 0) return;
    
    for (std::vector<int>::iterator itr = data_list.end() - 1; ; itr--) {
        std::cout << *itr << std::endl;
        if (itr == data_list.begin()) break;
    }
}