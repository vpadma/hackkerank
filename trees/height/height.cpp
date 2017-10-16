//dfs traversal
void explore(Node* parent, int &height, int &maxHeight) {
    if (height > maxHeight) {
        maxHeight = height;
    }
    //printf("current height: %d\n", height);
    if (parent->left) {
        explore(parent->left, ++height, maxHeight);
    } 
    if (parent->right) {
        explore(parent->right, ++height, maxHeight);
    }
    height--;
}


int height(Node* root) {
    int height, maxHeight;
    height = maxHeight = 0;
    explore(root, height, maxHeight);
    
    return maxHeight;
}