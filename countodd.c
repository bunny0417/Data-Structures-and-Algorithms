#include<stdio.h>
int main()
{
    int n,i,count=0,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
            count++;
    printf("Odd numbers: %d\n",count);
    return 0;
}

