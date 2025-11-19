#include<stdio.h>
int main()
{
    int n,i,key,a[100],found=0,pos;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=1;
            pos=i;
            break;
        }
    }
    if(found)
        printf("Found at index %d\n",pos);
    else
        printf("Not Found\n");
    return 0;
}

