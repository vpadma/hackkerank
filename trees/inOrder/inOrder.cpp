#include <stack>

void inOrder(node *root) {
    std::stack<node*> stack;
    
    node* current = root;
    while (!stack.empty() || current != NULL) {
        if (current) {
            stack.push(current);
            current = current->left;
            continue;
        }
        printf("%d ", stack.top()->data);
        current = stack.top()->right;
        stack.pop();
    }
}