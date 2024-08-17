#include <stdio.h>

int LinearSearch(int elements[],int size,int num){
    for(int i=0;i<size;i++){
        if(num==elements[i]){
            printf("Number %d found at index position:%d",num,i);
            return i;
        }

    }
    return -1;
}

int main(){
     int num,size,i;
    printf("Enter a number which you want to find:");
    scanf("%d",&num);
    printf("Enter the array size:");
    scanf("%d",&size);
    int elements[size];
    printf("Enter the array elements one by one:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    LinearSearch(elements, size, num);

}
