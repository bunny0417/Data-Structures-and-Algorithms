#include <stdio.h>

int main() {
    int i, num, size;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements one by one:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   for(i=0;i<size;i++){
    if (num==arr[i]){
        printf("Number was found at index position %d",i);
        break;
    }
    }
        if(num!=arr[i]){
            printf("Numebr not found");

        }
    
    
   }

