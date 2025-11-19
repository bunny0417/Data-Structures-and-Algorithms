#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue()
{
    struct node *new;
    int x;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d",&x);
    new->data=x;
    new->next=NULL;
    if(rear==NULL)
        front=rear=new;
    else
    {
        rear->next=new;
        rear=new;
    }
}
void dequeue()
{
    struct node *temp;
    if(front==NULL)
        printf("Queue empty\n");
    else
    {
        temp=front;
        printf("Removed %d\n",front->data);
        front=front->next;
        if(front==NULL)
            rear=NULL;
        free(temp);
    }
}
void display()
{
    struct node *p=front;
    if(front==NULL)
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
    int ch;
    while(1)
    {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) enqueue();
        else if(ch==2) dequeue();
        else if(ch==3) display();
        else if(ch==4) break;
    }
    return 0;
}

