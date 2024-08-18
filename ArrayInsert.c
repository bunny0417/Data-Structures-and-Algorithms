#include <stdio.h>
int main(){
    int i,num,index,size,value;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int elements[size];
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    printf("Current elements are:");
    for(i=0;i<size;i++){
        printf(" %d",elements[i]);
    }
    printf("\n");
    printf("Enter the value of element to be inserted:");
    scanf("%d",&value);
    printf("Enter the index position where to insert:");
    scanf("%d",&index);
    for(i=size;i>index;i--){
        elements[i] = elements[i-1];
    }
    elements[index] = value;
    size++;
    printf("Updated array elements are: ");
        for(i = 0; i < size; i++) {
            printf(" %d", elements[i]);
        }
    
}
