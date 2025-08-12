#include<stdio.h>

void count_odd_even(int arr[], int size, int *odd_count, int *even_count){
    *odd_count = 0;
    *even_count = 0;
    
    for(int i =0; i<size; i++){
        *odd_count += arr[i] & 1;
        *even_count += (arr[i] & 1) ^ 1;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9, 11, 12, 13, 16, 20, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int odd_count, even_count;
    count_odd_even(arr, size, &odd_count, &even_count);

    printf("Odd count: %d\n", odd_count);
    printf("Even count: %d\n", even_count);

    return 0;
}