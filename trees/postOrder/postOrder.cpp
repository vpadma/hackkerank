/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include <stack>

void postOrder(node *root) {
    std::stack<node*> stack1;
    std::stack<node*> stack2;
    
    stack1.push(root);
    node* tmp;
    while(!stack1.empty()) {
        tmp = stack1.top();
        stack2.push(tmp);
        stack1.pop();
        if (tmp->left) {
            stack1.push(tmp->left);
        }
        if (tmp->right) {
            stack1.push(tmp->right);
        }
    }
    
    while (!stack2.empty()) {
        printf("%d ", stack2.top()->data);
        stack2.pop();
    }
}