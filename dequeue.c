#include<stdio.h>
#define MAX 100
int dq[MAX],front=-1,rear=-1;
void insertfront()
{
    int x;
    if(front==0 && rear != -1)
        printf("Cannot insert at front\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        if(front==-1)
        {
            front=rear=0;
            dq[front]=x;
        }
        else
        {
            front--;
            dq[front]=x;
        }
    }
}
void insertrear()
{
    int x;
    if(rear==MAX-1)
        printf("Full\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        if(front==-1)
            front=rear=0;
        else
            rear++;
        dq[rear]=x;
    }
}
void deletefront()
{
    if(front==-1)
        printf("Empty\n");
    else
    {
        printf("Removed %d\n",dq[front]);
        if(front==rear)
            front=rear=-1;
        else
            front++;
    }
}
void deleterear()
{
    if(front==-1)
        printf("Empty\n");
    else
    {
        printf("Removed %d\n",dq[rear]);
        if(front==rear)
            front=rear=-1;
        else
            rear--;
    }
}
void display()
{
    int i;
    if(front==-1)
        printf("Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d ",dq[i]);
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.InsertFront 2.InsertRear 3.DeleteFront 4.DeleteRear 5.Display 6.Exit\nChoice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertfront(); break;
            case 2: insertrear(); break;
            case 3: deletefront(); break;
            case 4: deleterear(); break;
            case 5: display(); break;
            case 6: return 0;
        }
    }
}

