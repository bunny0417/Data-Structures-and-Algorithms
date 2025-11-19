#include<stdio.h>
int main()
{
    int n,i,evenpos=0,oddpos=0,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            evenpos+=a[i];
        else
            oddpos+=a[i];
    }
    printf("Even pos sum: %d, Odd pos sum: %d\n",evenpos,oddpos);
    return 0;
}

