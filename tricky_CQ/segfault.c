/*memory is not allocated but you are dereferencing a pointer which is a kind of segmentation fault and your program will crash
p is essentially pointing to nowhere or an invalid memory location.*/
#include<stdio.h>
int main(){

    char *p = 0;//same as NULL means there is no valid memory address
    *p ='A';  // Dereferencing a null pointer: undefined behavior
    printf("value of *p is %c\n", *p);// This line might not be reached if the program crashes

    return 0;
}
/*it will not print any output since program got crashed
can be solved by assigning by valid memory location like 
p = &c, where is some char variable*/