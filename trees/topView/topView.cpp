#include <stack>

void top_view(node * root)
{
    std::stack<node*> stack;
    node* current = root;
    bool rightOfRoot = false;
    while(!stack.empty() || current != NULL) {
        if (current != NULL) {
            if (!rightOfRoot){
                stack.push(current);
                current = current->left;
            } else {
                printf("%d ", current->data);
                current = current->right;
            }
            continue;
        }
        printf("%d ", stack.top()->data);
        if (stack.top() == root) {
            current = root->right;
            rightOfRoot = true;
        }
        stack.pop();
    }
}

