#include <unordered_map>
bool has_cycle(Node* head) {
    std::unordered_map<Node*, bool> address_map;
    struct Node* currNode = head;
    std::unordered_map<Node*, bool>::iterator tmp;
    for (; currNode != NULL; currNode = currNode->next) {
        tmp = address_map.find(currNode);
        if (tmp != address_map.end()) {
            return true;
        }
        address_map[currNode] = true;
    }
    return false;
}