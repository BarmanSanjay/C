#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num){

    if(num <= 1)
        return false;
    if(num == 2)
        return true;

    for(int i = 2; i*i<=num; i++){
        if(num%i == 0)
            return false;
    }
    return  true;
}

int main(){
    int num;
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}