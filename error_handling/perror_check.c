#include <stdio.h>

int main() {
  FILE *f = fopen("nothing.txt", "r");

  if (f == NULL) {
    perror("Error opening file"); // It prints a custom error message followed by a description of the last error that occurred:
    return 1;
  }

  fclose(f);
  return 0;
}