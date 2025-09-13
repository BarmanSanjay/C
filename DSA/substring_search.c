//Check if a substring is present in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];// = "You are stronger than you think.";
    char word[20];// = "stron";
    printf("Enter a sentence: ");
    /*fgets() reads up to and including the newline character \n.So sentence actually contains: "hello world\n\0"*/
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';//remove \n character
    
    printf("Enter a word: ");
    scanf("%s", word);

    // Use strstr to check for the substring
    if (strstr(sentence, word) != NULL) {
        printf("The word '%s' is present in the sentence.\n", word);
    } else {
        printf("The word '%s' is NOT present in the sentence.\n", word);
    }

    return 0;
}
