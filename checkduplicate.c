#include<stdio.h>
int main()
{
    int n,i,j,a[100],flag;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    flag=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(flag)
        printf("Has duplicates\n");
    else
        printf("No duplicates\n");
    return 0;
}

