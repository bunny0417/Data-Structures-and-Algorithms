#include <stdio.h>
int main(){
    int i,size,num,index;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int elements[size];
    printf("Enter the array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    printf("Current array elements are:");
    for(i=0;i<size;i++){
        printf(" %d",elements[i]);
    }
    printf("\n");
    printf("Enter a number to update the current array elements:");
    scanf("%d",&num);
    printf("Enter the index of the element to be updated:");
    scanf("%d",&index);
    elements[index]=num;
    printf("Updated array elements are:");
    for(i=0;i<size;i++){
        printf(" %d",elements[i]);
    }

    

}
