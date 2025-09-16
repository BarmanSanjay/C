#include <stdio.h>
//copied
int isMatch(char *sentence, char *word, int start) {
    int i = 0;
    while (word[i] != '\0') {
        if (sentence[start + i] == '\0' || sentence[start + i] != word[i]) {
            return 0;  // Not a match
        }
        i++;
    }

    // Ensure the match is a whole word
    if ((start == 0 || sentence[start - 1] == ' ') && 
        (sentence[start + i] == ' ' || sentence[start + i] == '\0')) {
        return 1;
    }

    return 0;
}

int main() {
    char sentence[100], word[20];
    int found = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the word to search: ");
    scanf("%s", word);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isMatch(sentence, word, i)) {
            found = 1;
            printf("Word found at position: %d\n", i);
            break;
        }
    }

    if (!found) {
        printf("Word not found in the sentence.\n");
    }

    return 0;
}
