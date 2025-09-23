//c code to add elements in the array by function call in recursion
#include <stdio.h>

// Recursive function to add elements to the array
void addElements(int arr[], int index, int size) {
    // Base condition: stop when index reaches size
    if (index == size) {
        return;
    }

    // Input element
    printf("Enter element %d: ", index + 1);
    scanf("%d", &arr[index]);

    // Recursive call for next index
    addElements(arr, index + 1, size);
}

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array

    // Call recursive function
    addElements(arr, 0, n);

    // Print array to verify
    printf("\nArray elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
