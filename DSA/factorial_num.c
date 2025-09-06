#include<stdio.h>
long long int factorial_num(long long int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial_num(n-1);
    }
}
int main(){
    long int num;
    printf("enter the number: ");
    scanf("%ld", &num);

    long long int result = factorial_num(num);
    printf("The factorial of %ld is %lld\n", num, result);
    return 0;
}