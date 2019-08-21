

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
if(position==0)
{
    head=head->next;
    return head;
    }
SinglyLinkedListNode* p=head;position--;

while(position)
{
    p=p->next;
    position--;
}
p->next=p->next->next;
return head;
}

