#include<stdio.h>
int main()
{
    int n,i,temp,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n < 2)
    {
        printf("Need at least 2 elements\n");
        return 0;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    printf("After swap: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

