//Write a program to reverse digits of a number using recursive
#include <stdio.h>

int reverse_digit_recursive(int num, int rev) {
    if (num == 0)
        return rev;
    return reverse_digit_recursive(num / 10, rev * 10 + (num % 10));
}
int main() {
    int num, rev = 0;
    printf("enter number: ");
    scanf("%d", &num);
    
    int reverse_num = reverse_digit_recursive(num, rev);
    printf("reverse number is = %d\n", reverse_num);

    return 0;
}
