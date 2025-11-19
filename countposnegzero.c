#include<stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        else zero++;
    }
    printf("Positive: %d, Negative: %d, Zero: %d\n",pos,neg,zero);
    return 0;
}

