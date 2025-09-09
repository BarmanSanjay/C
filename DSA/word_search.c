//Check if a word is present in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "You are stronger than you think.";
    char word[] = "stronger";

    // Use strstr to check for the word
    if (strstr(sentence, word) != NULL) {
        printf("The word '%s' is present in the sentence.\n", word);
    } else {
        printf("The word '%s' is NOT present in the sentence.\n", word);
    }

    return 0;
}
