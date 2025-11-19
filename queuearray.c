#include<stdio.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1;
void enqueue()
{
    int x;
    if(rear==MAX-1)
        printf("Queue full\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
        printf("Queue empty\n");
    else
    {
        printf("Removed %d\n",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 || front>rear)
        printf("Queue empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
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
        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
        }
    }
}

