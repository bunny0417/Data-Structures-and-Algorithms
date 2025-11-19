#include<stdio.h>
int main()
{
    int n,i,key,count=0,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key)
            count++;
    printf("Frequency = %d\n",count);
    return 0;
}

