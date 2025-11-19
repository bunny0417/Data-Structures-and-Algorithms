#include<stdio.h>
int main()
{
    int n,i,key,a[100],low,high,mid,found=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            found=1;
            break;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if(found)
        printf("Found at index %d\n",mid);
    else
        printf("Not Found\n");
    return 0;
}

