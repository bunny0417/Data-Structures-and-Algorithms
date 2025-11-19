#include<stdio.h>
int a[100];
void swap(int i,int j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
int partition(int low,int high)
{
    int pivot=a[high],i=low-1,j;
    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(i,j);
        }
    }
    swap(i+1,high);
    return i+1;
}
void quicksort(int low,int high)
{
    if(low<high)
    {
        int pi=partition(low,high);
        quicksort(low,pi-1);
        quicksort(pi+1,high);
    }
}
int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(0,n-1);
    printf("Sorted: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

