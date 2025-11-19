#include<stdio.h>
#define MAX 100
int stack[MAX],top=-1,temp[MAX],ttop=-1;
void push(int s[],int *t,int x)
{
    s[++(*t)]=x;
}
int pop(int s[],int *t)
{
    return s[(*t)--];
}
void sort()
{
    int x;
    while(top!=-1)
    {
        x=pop(stack,&top);
        while(ttop!=-1 && temp[ttop]>x)
            push(stack,&top,pop(temp,&ttop));
        push(temp,&ttop,x);
    }
    while(ttop!=-1)
        push(stack,&top,pop(temp,&ttop));
}
int main()
{
    int n,i,x;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(stack,&top,x);
    }
    sort();
    printf("Sorted stack: ");
    for(i=0;i<=top;i++)
        printf("%d ",stack[i]);
    printf("\n");
    return 0;
}

