#include<stdio.h>
int main()
{
    int n,i,s1=999999,s2=999999,a[100];
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
    s1 = a[0];
    s2 = a[1];
    if(s1 > s2)
    {
        int t = s1; s1 = s2; s2 = t;
    }
    for(i=2;i<n;i++)
    {
        if(a[i] < s1)
        {
            s2 = s1;
            s1 = a[i];
        }
        else if(a[i] < s2)
            s2 = a[i];
    }
    printf("Smallest: %d, Second: %d\n",s1,s2);
    return 0;
}

