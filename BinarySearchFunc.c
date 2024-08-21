#include <stdio.h>

int binarySearch(int arr[], int low, int high, int num) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int i, num, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements one by one : ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find: ");
    scanf("%d", &num);
    int result = binarySearch(arr, 0, size - 1, num);
    if (result != -1) {
        printf("Number found at index %d.\n", result);
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}
