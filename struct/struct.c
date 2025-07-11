#include<stdio.h>

int inc(int x) {
    return x+1;
}
int dec(int x){
    return x-1;
}

typedef struct{
    int (*handlers[2])(int);//handlers is an array of 2 function pointers. Each pointer points to a function that takes an int argument and returns an int
}Processor;

int main(){
    Processor p = { .handlers = {inc, dec}};//initialization, Create a variable p of type Processor, and initialize its handlers array with the functions inc and dec.
    int val = 5;
    // Call each handler through the struct
    printf("%d\n", p.handlers[0](val));
    printf("%d\n", p.handlers[1](val));

    return 0;
}