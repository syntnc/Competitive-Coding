/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    if(!head || !head->next) return head;
    while(head->next && head->data == head->next->data)
        head->next = head->next->next;
    head->next = RemoveDuplicates(head->next);
    return head;
}