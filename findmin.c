#include<stdio.h>
int main()
{
    int n,i,min,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("No elements\n");
        return 0;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
        if(a[i]<min)
            min=a[i];
    printf("Minimum = %d\n",min);
    return 0;
}

