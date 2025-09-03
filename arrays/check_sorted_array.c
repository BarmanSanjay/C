//Write a function to check if the array is sorted or not sorted(ascending order)
#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            return 0;  // Array is not sorted
        }
    }
    return 1;  // Array is sorted
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is not sorted in ascending order.\n");
    }

    return 0;
}