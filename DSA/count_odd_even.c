#include<stdio.h>

void count_odd_even(int arr[], int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5,11,15,31,21,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even_count, odd_count;
    count_odd_even(arr, n, &even_count, &odd_count);
    printf("Odd Count: %d\n", odd_count);
    printf("Even Count: %d\n", even_count);
    
    return 0;
}