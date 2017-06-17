/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    Node *ptrA = headA;
    Node *ptrB = headB;
    int lenA = 0, lenB = 0;
    
    while(ptrA) {
        ptrA = ptrA->next;
        lenA++;
    }
    while(ptrB) {
        ptrB = ptrB->next;
        lenB++;
    }
    
    ptrA = headA;
    ptrB = headB;
    
    while(lenA > lenB) {
        ptrA = ptrA->next;
        lenA--;
    }
    while(lenB > lenA) {
        ptrB = ptrB->next;
        lenB--;
    }
    
    while(ptrA && ptrA != ptrB) {
        ptrA = ptrA->next;
        ptrB = ptrB->next;
    }
    return ptrA->data;
}
