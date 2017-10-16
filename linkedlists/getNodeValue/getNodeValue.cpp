#include <deque>
int GetNode(Node *head,int positionFromTail)
{
    struct Node* currNode = head;
    int tmp;
    std::deque<int> queue(positionFromTail, 0);
    for (; currNode != NULL; currNode = currNode->next) {
        queue.push_back(currNode->data);
        tmp = queue.front();
        queue.pop_front();
    }
    return tmp;
}