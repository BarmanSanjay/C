/*sizeof(c = ++b + 1) is using the sizeof operator to evaluate the type of the expression c = ++b + 1.
Important point: sizeof does not evaluate the expression. It only checks the type of the result of the expression. 
So the ++b and c = ++b + 1 are not executed, and therefore, b and c remain unchanged.The result of the sizeof operator 
will be the size of the type of the result of c = ++b + 1, 
which is int (because both b and c are integers), and sizeof(int) typically gives 4 on most systems.*/
#include<stdio.h>
int main(){
    int a, b =1, c =1;
    a = sizeof(c = ++b + 1); /// sizeof doesn't evaluate the expression
    printf("a is %d\nb is %d\nc is %d\n", a,b,c);
}
/*here output will be a = 4, b =1, c = 1
sizeof does not evaluate the expression, so side effects like b++ or c = ... don't happen.

The result of sizeof(c = ++b + 1) is just the size of the int type, which is typically 4.*/