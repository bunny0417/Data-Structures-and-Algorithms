#include<stdio.h>
#define MAX 100
struct pq
{
    int data,pri;
};
struct pq q[MAX];
int rear=-1;
void insert()
{
    int x,p,i,pos;
    if(rear==MAX-1)
        printf("Full\n");
    else
    {
        printf("Enter value and priority: ");
        scanf("%d%d",&x,&p);
        rear++;
        q[rear].data=x;
        q[rear].pri=p;
        pos = rear;
        for(i=0;i<rear;i++)
        {
            if(q[i].pri < p)
            {
                pos=i;
                break;
            }
        }
        for(i=rear;i>pos;i--)
            q[i]=q[i-1];
        q[pos].data=x;
        q[pos].pri=p;
    }
}
void delete()
{
    if(rear==-1)
        printf("Empty\n");
    else
    {
        printf("Removed %d\n",q[0].data);
        for(int i=0;i<rear;i++)
            q[i]=q[i+1];
        rear--;
    }
}
void display()
{
    if(rear==-1)
        printf("Empty\n");
    else
    {
        for(int i=0;i<=rear;i++)
            printf("%d(pri:%d) ",q[i].data,q[i].pri);
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) insert();
        else if(ch==2) delete();
        else if(ch==3) display();
        else if(ch==4) break;
    }
    return 0;
}

