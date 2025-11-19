#include<stdio.h>
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
int main()
{
    char exp[100];
    int i,flag=1;
    printf("Enter expression: ");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==-1)
            {
                flag=0;
                break;
            }
            char x=pop();
            if((exp[i]==')' && x!='(') || (exp[i]=='}' && x!='{') || (exp[i]==']' && x!='['))
            {
                flag=0;
                break;
            }
        }
    }
    if(top!=-1)
        flag=0;
    if(flag)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
    return 0;
}

