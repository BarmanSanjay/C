#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    if (num < 0) return false;
    int root = (int)sqrt(num);
    return root * root == num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfectSquare(number))
        printf("%d is a perfect square.\n", number);
    else
        printf("%d is NOT a perfect square.\n", number);

    return 0;
}
