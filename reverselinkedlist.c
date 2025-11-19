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
        if(head==NULL) head=temp;
        else
        {
            p=head;
            while(p->next!=NULL) p=p->next;
            p->next=temp;
        }
    }
}
void reverse()
{
    struct node *prev=NULL,*curr=head,*next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void display()
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    create();
    reverse();
    display();
    return 0;
}

