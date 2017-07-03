/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
    node *ptr = root;
    string s = to_string(root->data);
    while(ptr->left) {
        ptr = ptr->left;
        s = to_string(ptr->data) + " " + s;
    }
    ptr = root;
    while(ptr->right) {
        ptr = ptr->right;
        s += " " + to_string(ptr->data);
    }
    cout << s << endl;
}