#include <stdio.h>

int main() {
    int i, num, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements one by one:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find: ");
    scanf("%d", &num);
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == num) {
            printf("Element was found at index: %d\n", mid);
            return 0; 
        }
        else if (arr[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found in the array.\n");

    return 0;
}
