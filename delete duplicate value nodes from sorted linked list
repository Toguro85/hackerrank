

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr=head;
    SinglyLinkedListNode* next=curr->next;
    while(next!=NULL)
    {
        if(curr->data==next->data)
        {
            next=next->next;
            curr->next=next;
        }
        else
        {
            curr=next;
            next=curr->next;
        }
    }
    return head;

}

