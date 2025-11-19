#include<stdio.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char exp[100],*e;
    int n1,n2,n3,num;
    printf("Enter postfix expression: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            num=*e-48;
            push(num);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
            {
                case '+': n3=n2+n1; break;
                case '-': n3=n2-n1; break;
                case '*': n3=n2*n1; break;
                case '/': n3=n2/n1; break;
                default: printf("Invalid operator\n"); return 1;
            }
            push(n3);
        }
        e++;
    }
    printf("Result = %d\n",pop());
    return 0;
}

