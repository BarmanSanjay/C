#include<stdio.h>
typedef int (*operation)(int,int);//defines a new type name operation for a pointer to a function.

int max(int a, int b) {
    return (a>b)?a:b;
}

int main(){
    operation op = max;//Create a function pointer op and point it to the function max.
    /*operation is a type alias for any function that takes two int arguments and returns an int.op is a function pointer.*/
    printf("%d\n", op(30,22));
    return 0;
}