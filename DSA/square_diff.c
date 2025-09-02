//Difference between sum of the squares of first n natural numbers and square of sum
#include<stdio.h>

int main() {
    int n, sum1 = 0, sum2 = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum1 += i * i;  // Sum of squares
        sum2 += i;      // Sum
    }

    sum2 *= sum2;      // Square of sum

    printf("Difference: %d\n", sum2 - sum1);
    return 0;
}