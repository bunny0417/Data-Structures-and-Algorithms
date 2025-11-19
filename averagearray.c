#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    float avg;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("No elements\n");
        return 0;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;
    printf("Average = %.2f\n",avg);
    return 0;
}

