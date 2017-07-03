/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    node *new_ptr = new node();
    new_ptr->data = value;
    node *last = root, *current = root;
    
    while(current != NULL) {
        last = current;
        if(value < current->data)
            current = current->left;
        else
            current = current->right;
    }
    if(!root)
        return new_ptr;
    if(value < last->data)
        last->left = new_ptr;
    else
        last->right = new_ptr;

    return root;
}
