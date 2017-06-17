/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(!head || !head->next)
        return head;
    Node *ptr1 = head, *ptr2 = head;
    while(ptr1->next) ptr1 = ptr1->next;
    while(ptr2->next != ptr1) ptr2 = ptr2->next;
    Node *new_ptr = new Node;
    new_ptr->data = ptr1->data;
    ptr2->next = NULL;
    new_ptr->next = Reverse(head);
    return new_ptr;
}
