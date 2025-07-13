#include<stdio.h>
int* getElement(int *arr, int index){
    return arr + index;
}  

int main(){
    int nums[] = {10, 20, 30, 40};
    int *p = getElement(nums, 2);// returns a pointer to the 3rd element (30)
    printf("%d\n", *p);

    return 0;
}