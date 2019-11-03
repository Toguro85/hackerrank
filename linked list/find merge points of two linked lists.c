

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode* cu1=head1;
SinglyLinkedListNode* cu2=head2;
int c1=0,c2=0;
while(cu1)
{
    cu1=cu1->next;
    c1++;
}
while(cu2)
{
    cu2=cu2->next;
        c2++;
        }
int d=abs(c1-c2);
if(c1>c2)
{
    cu2=head2;
    cu1=head1;
    while(d)
    {
      cu1=cu1->next;
      d--;
    }
}
else
{
    cu1=head1;
    cu2=head2;
    while(d)
    {
        cu2=cu2->next;
        d--;
    }
}
while(cu1&&cu2)
{
    if(cu1==cu2)
    {
        break;
    }
    cu1=cu1->next;
    cu2=cu2->next;
}
return cu1->data;
}

