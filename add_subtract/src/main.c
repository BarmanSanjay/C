// main.c
#include <stdio.h>
#include "add.h"
#include "subtract.h"

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter two integers: ");
    
    scanf("%d %d", &a, &b);

    int sum = add(a, b);
    int difference = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}