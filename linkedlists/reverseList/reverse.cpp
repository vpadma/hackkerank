/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node *head)
{
  // Complete this method
    struct Node* prevNode = NULL;
    struct Node* nextNode = NULL;
    struct Node* currNode = head;
    
    if (currNode == NULL) return head;
    
    for (; ; currNode = nextNode) {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        
        if (nextNode == NULL) return currNode;
    }
}