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
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=20;
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->data=30;
    head->next->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->next->data=40;
    head->next->next->next->next=NULL;
}
void deleteNode(struct node *node)
{
    struct node *temp;
    node->data=node->next->data;
    temp=node->next;
    node->next=node->next->next;
    free(temp);
}
void display()
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    create();
    printf("Before: ");
    display();
    deleteNode(head->next);
    printf("After deleting 20: ");
    display();
    return 0;
}
