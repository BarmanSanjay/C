#include<stdio.h>

int isPerfectSquare(int num){
    int left = 1, right = num;
    if(num < 0)
        return 0;
    if(num <= 1)
        return 1;
    while(left <= right){
        int mid = left + (right - left)/2;

        if(mid * mid == num)
            return 1;
        if(mid * mid < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPerfectSquare(num))
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);
    return 0;
}