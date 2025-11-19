#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("No elements\n");
        return 0;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}

