#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void enqueue()
{
    int x;
    if((rear+1)%MAX==front)
        printf("Queue full\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        if(front==-1)
            front=0;
        rear=(rear+1)%MAX;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1)
        printf("Queue empty\n");
    else
    {
        printf("Removed %d\n",queue[front]);
        if(front==rear)
            front=rear=-1;
        else
            front=(front+1)%MAX;
    }
}
void display()
{
    int i;
    if(front==-1)
        printf("Empty\n");
    else
    {
        i=front;
        while(1)
        {
            printf("%d ",queue[i]);
            if(i==rear)
                break;
            i=(i+1)%MAX;
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Enq 2.Deq 3.Display 4.Exit\nChoice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
        }
    }
}

