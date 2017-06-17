/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0) {
        return head->next;
    } else {
        Node *ptr = head;
        for(int i = 0; i < position - 1; i++, ptr = ptr->next);
        if(ptr->next) ptr->next = ptr->next->next;
        return head;
    }
}
