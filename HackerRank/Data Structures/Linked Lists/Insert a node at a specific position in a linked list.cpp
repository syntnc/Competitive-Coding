/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *new_ptr = new Node;
    new_ptr->data = data;
    new_ptr->next = NULL;
    
    if(!head && position == 0){
        return new_ptr;
    } else {
        if(position == 0) {
            new_ptr->next = head;
            return new_ptr;
        } else {
            Node *ptr = head;
            for(int i = 0; i < position - 1; i++) {
                ptr = ptr->next;
            }
            Node *right = ptr->next;
            ptr->next = new_ptr;
            new_ptr->next = right;
            return head;
        }
    }
}
