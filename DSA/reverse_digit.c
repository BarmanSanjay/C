//Write a program to reverse digits of a number
#include<stdio.h>
#include <math.h>

void reverse_digit(int num){
    int reverse_num = 0;
    while(num>0){
        reverse_num = reverse_num * 10 + (num%10) ;
        num = num/10;
    }
    printf("reverse number is = %d\n", reverse_num);//321
}

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    reverse_digit(num);//123

    return 0;
}
/*pow is declared in <math.h> but implemented in the math library (libm).

-lm tells the linker to include libm.
gcc reverse_digit.c -o d -lm*/