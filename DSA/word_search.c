//Check if a word is present in a sentence only for word not substring
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool word_in_sentence(const char *sentence, const char *word) {
    // Copy the sentence to a local buffer (since strtok modifies it)
    char buffer[1024];
    strncpy(buffer, sentence, sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0';  // ensure null termination

    // Tokenize the sentence using common word delimiters
    const char *delimiters = " ,.;:\n\t";
    char *token = strtok(buffer, delimiters);

    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            return true;  // found the word
        }
        token = strtok(NULL, delimiters);
    }

    return false;  // not found
}

int main() {
    const char *sentence = "The quick brown fox jumps over the lazy dog.";
    const char *word = "fox";

    if (word_in_sentence(sentence, word)) {
        printf("Word '%s' is present in the sentence.\n", word);
    } else {
        printf("Word '%s' is NOT present in the sentence.\n", word);
    }

    return 0;
}

