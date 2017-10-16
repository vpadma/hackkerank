int CompareLists(Node *headA, Node* headB)
{
    struct Node* travNode1 = headA;
    struct Node* travNode2 = headB;
    for (; ; travNode1 = travNode1->next, travNode2 = travNode2->next) {
        if ((travNode1 == NULL) || (travNode2 == NULL)) {
            if ((travNode1 != NULL) || (travNode2 != NULL)) {
                return 0;
            } else return 1;
        }
        if (travNode1->data != travNode2->data) return 0;
    }
}