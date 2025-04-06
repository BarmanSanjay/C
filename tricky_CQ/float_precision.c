/*A float is a single-precision floating-point number that typically uses 4 bytes (32 bits). It follows the IEEE 754 standard 
for floating-point arithmetic.*/
/*in below program output will be false because of precision f value will be 0.200000 and g will be 1.200000
Floating-point precision: Floating-point numbers like 0.2 and 1.2 cannot always be represented exactly in binary. The result of 
a calculation might be slightly off due to the internal representation. As a result, the condition if(f == 0.2) and if(g == 1.2) 
may fail because f and g might not exactly equal 0.2 and 1.2 even though they seem like they should.*/
#include <stdio.h>

int main(){
    float f = 0.2;
    float g = 1.2;

    if(f == 0.2)
        printf("f is 0.2\n");
    else
        printf("f is not 0.2\n");

    if(g == 1.2)
        printf("g is 1.2\n");
    else
        printf("g is not 1.2\n");

    printf("f is %f\n", f);
    printf("g is %f\n", g);
}
/*we can fabs function to nullyfy this problem like below
if(fabs(f - 0.2) < 1e^-6), where 1e^-6 is minimum tolerance
fabs(f - 0.2) < epsilon: This checks if f is within a small tolerance (epsilon) of 0.2. The fabs function computes 
the absolute difference between f and 0.2. If the difference is smaller than epsilon, you can consider the values equal.*/