#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertbeg()
{
    struct node *temp;
    int x;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d",&x);
    temp->data=x;
    temp->next=head;
    head=temp;
}
void insertend()
{
    struct node *temp,*p;
    int x;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
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
void insertpos()
{
    struct node *temp,*p;
    int pos,i,x;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos==1)
    {
        insertbeg();
        return;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d",&x);
    temp->data=x;
    p=head;
    for(i=1;i<pos-1 && p!=NULL;i++)
        p=p->next;
    if(p==NULL)
        printf("Invalid position\n");
    else
    {
        temp->next=p->next;
        p->next=temp;
    }
}
void deletebeg()
{
    struct node *p;
    if(head==NULL)
        printf("Empty\n");
    else
    {
        p=head;
        head=head->next;
        printf("Deleted %d\n",p->data);
        free(p);
    }
}
void deleteend()
{
    struct node *p,*q;
    if(head==NULL)
        printf("Empty\n");
    else if(head->next==NULL)
    {
        printf("Deleted %d\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        p=head;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=NULL;
        printf("Deleted %d\n",p->data);
        free(p);
    }
}
void deleteval()
{
    struct node *p,*q;
    int x;
    printf("Enter value to delete: ");
    scanf("%d",&x);
    if(head==NULL)
        printf("Empty\n");
    else if(head->data==x)
    {
        p=head;
        head=head->next;
        printf("Deleted %d\n",x);
        free(p);
    }
    else
    {
        p=head;
        while(p!=NULL && p->data!=x)
        {
            q=p;
            p=p->next;
        }
        if(p==NULL)
            printf("Not found\n");
        else
        {
            q->next=p->next;
            printf("Deleted %d\n",x);
            free(p);
        }
    }
}
void display()
{
    struct node *p;
    if(head==NULL)
        printf("Empty\n");
    else
    {
        p=head;
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
    int ch;
    while(1)
    {
        printf("\n1.InsertBeg 2.InsertEnd 3.InsertPos 4.DeleteBeg 5.DeleteEnd 6.DeleteVal 7.Display 8.Exit\nChoice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertbeg(); break;
            case 2: insertend(); break;
            case 3: insertpos(); break;
            case 4: deletebeg(); break;
            case 5: deleteend(); break;
            case 6: deleteval(); break;
            case 7: display(); break;
            case 8: return 0;
            default: printf("Invalid\n");
        }
    }
}

