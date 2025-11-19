#include<stdio.h>
#define MAX 100
int q[MAX],front=-1,rear=-1;
int stack[MAX],top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}
void enqueue()
{
    int x;
    printf("Enter: ");
    scanf("%d",&x);
    if(rear==MAX-1) printf("Full\n");
    else
    {
        if(front==-1) front=0;
        q[++rear]=x;
    }
}
void reverse()
{
    while(front<=rear)
        push(q[front++]);
    front=-1; rear=-1;
    while(top!=-1)
    {
        if(front==-1) front=0;
        q[++rear]=pop();
    }
}
void display()
{
    int i;
    if(front==-1) printf("Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d ",q[i]);
        printf("\n");
    }
}
int main()
{
    int n,i,x;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        enqueue();
    reverse();
    printf("Reversed queue: ");
    display();
    return 0;
}

