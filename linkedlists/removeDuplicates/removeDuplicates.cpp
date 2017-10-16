Node* RemoveDuplicates(Node *head)
{
    struct Node* prevNode = head;
    struct Node* currNode = head->next;
    for (; currNode != NULL; currNode = currNode->next) {
        if (currNode->data == prevNode->data) {
            prevNode->next = currNode->next;
        } else {
            prevNode = currNode;
        }
    }
    return head;
}