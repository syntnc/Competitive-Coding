/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *new_ptr = new Node;
    new_ptr->data = data;
    new_ptr->next = NULL;
    if(head) {
        Node *ptr = head;
        while(ptr->next)
            ptr = ptr->next;
        ptr->next = new_ptr;
        return head;
    } else {
        return new_ptr;
    }
}
