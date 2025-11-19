#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int priority(char x)
{
    if(x=='(') return 0;
    if(x=='+' || x=='-') return 1;
    if(x=='*' || x=='/') return 2;
    return 0;
}
int main()
{
    char exp[100],postfix[100],*e,x;
    int k=0;
    printf("Enter infix expression: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
            postfix[k++]=*e;
        else if(*e=='(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                postfix[k++]=x;
        }
        else
        {
            while(top!=-1 && priority(stack[top])>=priority(*e))
                postfix[k++]=pop();
            push(*e);
        }
        e++;
    }
    while(top!=-1)
        postfix[k++]=pop();
    postfix[k]='\0';
    printf("Postfix: %s\n",postfix);
    return 0;
}

