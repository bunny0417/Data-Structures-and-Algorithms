#include<stdio.h>
int main()
{
    int n,i,max,a[100];
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
    max=a[0];
    for(i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];
    printf("Maximum = %d\n",max);
    return 0;
}

