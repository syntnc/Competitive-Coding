#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node *insert(node *root, int x)
{
    if(!root) {
        root = new node;
        root->data = x;
        root->left = NULL;
        root->right = NULL;
    } else if (x <= root->data) {
        root->left = insert(root->left, x);
    } else {
        root->right = insert(root->right, x);
    }
    return root;
}

int findHeight(node *root) {
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    else
        return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    node *root = NULL;
    while(n--) {
        int x;
        cin >> x;
        root = insert(root, x);
    }
    cout << findHeight(root) << endl;
    return 0;
}