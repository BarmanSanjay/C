#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countVowels(char *str, int index) {
    if (index == strlen(str)) {
        return 0;
    }
    char ch = tolower(str[index]);
    int count = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;
    return count + countVowels(str, index + 1);
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    // Remove newline character from the input
    input[strcspn(input, "\n")] = 0;
    int vowelCount = countVowels(input, 0);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}
