#include<stdio.h>
#define MAX 100
int q[MAX],front=-1,rear=-1;
void enqueue()
{
    int x;
    if(rear==MAX-1) printf("Full\n");
    else
    {
        printf("Enter: ");
        scanf("%d",&x);
        if(front==-1) front=0;
        q[++rear]=x;
    }
}
void display()
{
    int i,count=0;
    if(front==-1) printf("Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            count++;
        printf("Count = %d\n",count);
    }
}
int main()
{
    int ch,x,i;
    while(1)
    {
        printf("\n1.Add few 2.Count 3.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("How many: ");
            scanf("%d",&x);
            for(i=0;i<x;i++) enqueue();
        }
        else if(ch==2) display();
        else if(ch==3) break;
    }
    return 0;
}

