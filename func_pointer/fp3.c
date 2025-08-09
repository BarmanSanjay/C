
/*retF1() — a function with no parameters.

(*retF1()) — it returns a pointer.

(*retF1())(int) — the pointer points to a function taking an int.

int (*retF1())(int) — that inner function returns an int.*/

/*To simplify the syntax, use a typedef:

c
Copy
Edit
typedef int (*IntFunc)(int);

IntFunc retF1() {
    return square;
}
Now retF1() is clearly a function that returns a function pointer.*/

#include<stdio.h>

int f1(int x) { return x+1;}
int f2(int x) {return x*2;}

int (*retF1())(int) { return f1;}
int (*retF2())(int) {return f2;}

/*funcs is an array of 2 function pointers, each returning a 
function pointer that takes int and returns int.*/
int (*(*funcs[2])())(int) = {retF1, retF2};


int main(){
    int val = 4;
    printf("%d\n", funcs[1]()(val));

    return 0;
}