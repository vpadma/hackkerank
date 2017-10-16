#include <unordered_map>
int FindMergeNode(Node *headA, Node *headB)
{
    std::unordered_map<Node*, bool> address_map;
    struct Node* tmp = headA;
    for (; tmp != NULL; tmp = tmp->next) {
        address_map[tmp] = true;
    }
    std::unordered_map<Node*, bool>::iterator search;
    for (tmp = headB; tmp != NULL; tmp = tmp->next) {
        search = address_map.find(tmp);
        if (search != address_map.end()) {
            break;
        }
    }
    return tmp->data;
}