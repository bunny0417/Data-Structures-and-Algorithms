#include<stdio.h>
int main()
{
    int n,i,a[100],b[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements for a: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    printf("Copied array b: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");
    return 0;
}

