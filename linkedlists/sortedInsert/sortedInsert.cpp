Node* SortedInsert(Node *head,int data)
{
    struct Node* newNode; 
    struct Node* currNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    if (!head){
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
    
    currNode = head->next;
    if (currNode == NULL) {
        if (data < head->data) {
            head->prev = newNode;
            newNode->next = head;
            newNode->prev = NULL;
            return newNode;
        } 
        
        head->next = newNode;
        newNode->prev = head;
        newNode->next = NULL;
        return head;
    }
    
    for(; currNode != NULL;) {
        if (data < currNode->data) {
            currNode->prev->next = newNode;
            newNode->prev = currNode->prev;
            currNode->prev = newNode;
            newNode->next = currNode;
            
            if (newNode->prev == NULL) {
                return newNode;
            } else return head;
        }
        
        if (currNode->next == NULL) {
            break;
        }
    }
    
    // if reached the end of list (i.e. new node is the max value)
    currNode->next = newNode;
    newNode->prev = currNode;
    newNode->next = NULL;
    
    return head;
}