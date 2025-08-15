#include<stdio.h>

int recursive_sum(int arr[], int size){
    if(size == 0){
        return 0;
    } else {
        return arr[size - 1] + recursive_sum(arr, size - 1);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    float avg = (float)recursive_sum(arr, size) / size;
    printf("Average is : %.2f\n", avg);
    return 0;
}