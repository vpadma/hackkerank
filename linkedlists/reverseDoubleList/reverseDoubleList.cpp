#include <vector>
Node* Reverse(Node* head)
{
    std::vector<int> list;
    struct Node* tmp = head;
    for (; tmp != NULL; tmp = tmp->next) {
        list.push_back(tmp->data);
    }
    tmp = head;
    for (int count = list.size() - 1; tmp != NULL; tmp = tmp->next, count--) {
        tmp->data = list[count];
    }
    return head;
}