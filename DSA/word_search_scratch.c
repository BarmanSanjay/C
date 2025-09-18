#include <stdio.h>
//copied from chatgpt
// Function to check if the word matches from a given index
int isWordMatch(char sentence[], char word[], int index) {
    int i = 0;

    // Match character by character
    while (word[i] != '\0') {
        if (sentence[index + i] == '\0' || sentence[index + i] != word[i]) {
            return 0; // Mismatch
        }
        i++;
    }

    // Check for word boundaries
    char before = (index == 0) ? ' ' : sentence[index - 1];
    char after = sentence[index + i];

    if ((before == ' ' || before == '\n') &&
        (after == ' ' || after == '\0' || after == '\n' || after == '.' || after == ',')) {
        return 1; // Whole word matched
    }

    return 0; // It's part of another word
}

int main() {
    char sentence[100], word[20];
    int i, found = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the word to search: ");
    scanf("%s", word);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == word[0]) {
            if (isWordMatch(sentence, word, i)) {
                printf("Word found at position: %d\n", i);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Word not found.\n");
    }

    return 0;
}
