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
    printf("Enter number of nodes: ");
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
void display()
{
    struct node *p=head;
    if(head==NULL)
        printf("Empty\n");
    else
    {
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    create();
    display();
    return 0;
}

