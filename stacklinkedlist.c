#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push()
{
    struct node *new;
    int x;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d",&x);
    new->data=x;
    new->next=top;
    top=new;
}
void pop()
{
    struct node *temp;
    if(top==NULL)
        printf("Stack empty\n");
    else
    {
        temp=top;
        printf("Popped %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void display()
{
    struct node *p;
    if(top==NULL)
        printf("Empty\n");
    else
    {
        p=top;
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
        printf("\n1.Push 2.Pop 3.Display 4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1) push();
        else if(ch==2) pop();
        else if(ch==3) display();
        else if(ch==4) break;
        else printf("Wrong choice\n");
    }
    return 0;
}

