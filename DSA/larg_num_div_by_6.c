#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isDivisibleBy6(const char *number) {
    int sum = 0;
    int lastDigit;

    int len = strlen(number);
    for (int i = 0; i < len; i++) {
        if (!isdigit(number[i])) {
            return 0; // Not a valid number
        }
        sum += number[i] - '0';
    }

    lastDigit = number[len - 1] - '0';

    if ((lastDigit % 2 == 0) && (sum % 3 == 0)) {
        return true; // Divisible by 6
    } else {
        return false; // Not divisible by 6
    }
}

int main() {
    char number[1000]; // large enough to store big numbers

    printf("Enter a large number: ");
    scanf("%s", number);

    if (isDivisibleBy6(number)) {
        printf("The number is divisible by 6.\n");
    } else {
        printf("The number is not divisible by 6.\n");
    }

    return 0;
}
