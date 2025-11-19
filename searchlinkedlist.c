#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create()
{
    struct node *temp,*p;
    int n,i,x;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&x);
        temp->data=x;
        temp->next=NULL;
        if(head==NULL) head=temp;
        else
        {
            p=head;
            while(p->next!=NULL) p=p->next;
            p->next=temp;
        }
    }
}
void search()
{
    int key,found=0,pos=1;
    struct node *p=head;
    printf("Enter key: ");
    scanf("%d",&key);
    while(p!=NULL)
    {
        if(p->data==key)
        {
            found=1;
            break;
        }
        p=p->next;
        pos++;
    }
    if(found)
        printf("Found at position %d\n",pos);
    else
        printf("Not found\n");
}
int main()
{
    create();
    search();
    return 0;
}

