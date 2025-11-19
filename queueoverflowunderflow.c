#include<stdio.h>
#define MAX 5
int q[MAX],front=-1,rear=-1;
void enqueue()
{
    int x;
    if(rear==MAX-1)
        printf("Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        if(front==-1) front=0;
        rear++;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
        printf("Underflow\n");
    else
    {
        printf("Removed %d\n",q[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 || front>rear)
        printf("Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d ",q[i]);
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
        if(ch==1) enqueue();
        else if(ch==2) dequeue();
        else if(ch==3) display();
        else if(ch==4) break;
    }
    return 0;
}

