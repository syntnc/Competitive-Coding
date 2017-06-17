/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    if(head) {
        Node *ptr1, *ptr2;
        ptr1 = head;
        while(ptr1->next) {
            ptr1 = ptr1->next;
        }
        while(true) {
            ptr2 = head;
            while(ptr2->next != ptr1) ptr2 = ptr2->next;
            cout << ptr1->data << endl;
            ptr1 = ptr2;
            if(ptr1 == head) break;
        }
        cout << head->data << endl;
    }
}
