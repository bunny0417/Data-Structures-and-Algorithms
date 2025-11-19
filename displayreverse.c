#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reverse order: ");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

