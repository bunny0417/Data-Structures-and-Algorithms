#include<stdio.h>
int main()
{
    int n,i,key,a[100],pos=-1;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==key)
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
        printf("Last occurrence at %d\n",pos);
    else
        printf("Not found\n");
    return 0;
}

