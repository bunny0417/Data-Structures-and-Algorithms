#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create()
{
    struct node *temp,*p;
    int n,i,x;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&x);
        temp->data=x;
        temp->next=NULL;
        if(head==NULL)
            head=temp;
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;
        }
    }
}
void middle()
{
    if(head == NULL)
    {
        printf("List empty\n");
        return;
    }
    struct node *slow,*fast;
    slow=fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle element = %d\n",slow->data);
}
int main()
{
    create();
    middle();
    return 0;
}

