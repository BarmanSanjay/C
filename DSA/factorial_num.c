#include<stdio.h>
int factorial_num(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial_num(n-1);
    }
}
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    int result = factorial_num(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}