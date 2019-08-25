#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int m=0;
struct node
{
    long long int data;
    struct node* next;
};
struct node* top;
struct node1
{
    long long int data;
    struct node1* next;
};
struct node1* top1=NULL;
int tp()
{
    if(top1==NULL)
    return -1;
    else
    return top1->data;
}
void push(long long int f)
{
    struct node* t=(struct node*)malloc(sizeof(struct node));
    struct node1* t1=(struct node1*)malloc(sizeof(struct node1));
    if(top1==NULL||f>tp())
    {
        t1->data=f;
        t1->next=top1;
        top1=t1;
    }    
    if(!t)
    {
        printf("\n heap overflow");
        exit(1);
    }
    t->data=f;
    t->next=top;
    top=t;
    
}

void del()
{
    if(top==NULL)
    {
        printf("\n stack underflow");
    }
    if(top->data==top1->data)
    top1=top1->next;
    top=top->next;
}
void mx()
{
    if(top1!=NULL)
    {
    m=top1->data;
    printf("%lld\n",m);
    }
    else
    printf("-1\n");
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,a;
    long long int d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        
        if(a==1)
        {
            scanf("%lld",&d);
            push(d);
        }
        else if(a==2)
        {
            del();
        }
        else if(a==3)
        {
            mx();
        }
    }  
    return 0;
}
