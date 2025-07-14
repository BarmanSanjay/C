#include<stdio.h>

int doubleIt(int x){
    return x * 2;
}
/*passThrough is a function that:
takes one parameter: a pointer to a function that takes an int and returns an int — int (*fn)(int)
returns a pointer to a function that takes an int and returns an int — int (*)(int)*/
int (*passThrough(int (*fn)(int)))(int){
    return fn;
}

int main(){
    int (*func)(int) = passThrough(doubleIt);
    printf("%d\n", func(7));

    return 0;
}