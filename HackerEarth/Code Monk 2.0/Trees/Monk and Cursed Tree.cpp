#include <iostream>
using namespace std;

struct node {
    long long data;
    node *left;
    node *right;
};

node *insert(node *root, long long x)
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

node *lca(node *root, long long a, long long b) 
{
    if(a < root->data and b < root->data)
        return lca(root->left, a, b);
    if(a > root->data and b > root->data)
        return lca(root->right, a, b);
    return root;
}

long long maxInPath(node *root, long long x)
{
    if(root->data == x)
        return root->data;
    else if(root->data < x)
        return maxInPath(root->right, x);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    node *root = NULL;
    while(n--) {
        long long x;
        cin >> x;
        root = insert(root, x);
    }
    long long a, b;
    cin >> a >> b;
    cout << maxInPath(lca(root, a, b), max(a, b)) << endl;
    return 0;
}