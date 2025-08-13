#include<stdio.h>

float Average_Calculate(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum+= arr[i];
    }
    return (float)sum/size;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float average = Average_Calculate(numbers, size);
    printf("Average: %.2f\n", average);
    return 0;
}

 