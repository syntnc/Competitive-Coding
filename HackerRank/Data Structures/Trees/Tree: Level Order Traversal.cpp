
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

#include <queue>

void levelOrder(node * root) {
    queue <node *> q;
    if(root)
        q.push(root);
    while(!q.empty()) {
        node *ptr = q.front();
        cout << ptr->data << " ";
        if(ptr->left)
            q.push(ptr->left);
        if(ptr->right)
            q.push(ptr->right);
        q.pop();
    }
}
