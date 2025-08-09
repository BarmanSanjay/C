#include<stdio.h>

int logic(int x){
    return x*2;
}

int (*choose())(int){
    return logic;
}

int main(){
    int (*(*fp)())(int) = choose;
    printf("%d\n", fp()(5));

    return 0;
}