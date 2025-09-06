#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool Armstrong(int n){
    int original = n, sum = 0, digits = 0;
    while(n !=0){
        digits++;
        n = n/10;
    }
    n = original;
    while(n != 0){
        int digit = n%10;
        sum = sum + pow(digit, digits);
        n = n/10;
    }
    return sum == original;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    if(Armstrong(n)){
        printf("%d is an Armstrong number\n", n);
    }
    else{
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}