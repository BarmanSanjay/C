//Program to print the given numbers in words
/*This program uses string input to preserve leading zeros (unlike numeric input which drops them).

It handles each character and validates that it's a digit from '0' to '9'.*/
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter a number: ");
    scanf("%99s", input);

    printf("In words: ");
    for (int i = 0; i < strlen(input); i++) {
        switch (input[i]) {
            case '0':
                printf("Zero ");
                break;
            case '1':
                printf("One ");
                break;
            case '2':
                printf("Two ");
                break;
            case '3':
                printf("Three ");
                break;
            case '4':
                printf("Four ");
                break;
            case '5':
                printf("Five ");
                break;
            case '6':
                printf("Six ");
                break;
            case '7':
                printf("Seven ");
                break;
            case '8':
                printf("Eight ");
                break;
            case '9':
                printf("Nine ");
                break;
            default:
                printf("\nInvalid character '%c' in input.\n", input[i]);
                return 1;
        }
    }

    printf("\n");
    return 0;
}
