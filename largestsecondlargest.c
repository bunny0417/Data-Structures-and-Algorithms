#include<stdio.h>
int main()
{
    int n,i,l1=-999999,l2=-999999,a[100];
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
    l1 = a[0];
    l2 = a[1];
    if(l1 < l2)
    {
        int t = l1; l1 = l2; l2 = t;
    }
    for(i=2;i<n;i++)
    {
        if(a[i] > l1)
        {
            l2 = l1;
            l1 = a[i];
        }
        else if(a[i] > l2)
            l2 = a[i];
    }
    printf("Largest: %d, Second: %d\n",l1,l2);
    return 0;
}

