 #include <stdio.h>
#include <string.h>

void maxlength(char str[4][15]) {
    int max_len = 0;
    int index = 0;

    for (int i = 0; i < 4; i++) {
        int len = strlen(str[i]);
        if (len > max_len) {
            max_len = len;
            index = i;
        }
    }

    printf("Longest string: %s\n", str[index]);
}

int main() {
    char str[4][15];

    for (int i = 0; i < 4; i++) {
        scanf("%14s", str[i]); // Prevents buffer overflow
    }

    maxlength(str);

    return 0;
}
