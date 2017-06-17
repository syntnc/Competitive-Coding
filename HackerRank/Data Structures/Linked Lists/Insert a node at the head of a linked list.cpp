/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *new_ptr = new Node;
    new_ptr->data = data;
    new_ptr->next = NULL;
    if(head) {
        Node *ptr = head;
        head = new_ptr;
        head->next = ptr;
        return head;
    } else {
        return new_ptr;
    }
}
