#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the array elements one by one:");
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("The reverse order is:");
    for(int i=size-1;i>=0;i--){
     printf("%d ", arr[i]);
    }
}
