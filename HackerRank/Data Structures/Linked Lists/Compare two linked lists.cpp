/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
    if(!headA && !headB)
        return 1;
    if((!headA && headB) || (headA && !headB))
        return 0;
    if(headA->data != headB->data)
        return 0;
    else
        return CompareLists(headA->next, headB->next);
}
