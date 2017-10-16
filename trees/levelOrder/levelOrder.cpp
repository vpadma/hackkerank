#include <queue>

void LevelOrder(node * root)
{
    std::queue<node*> queue;
    queue.push(root);
    node* tmp;
    while(!queue.empty()) {
        tmp = queue.front();
        queue.pop();
        printf("%d ", tmp->data);
        if (tmp->left != NULL) {
            queue.push(tmp->left);
        }
        if (tmp->right != NULL)
        {
            queue.push(tmp->right);
        }
    }
}