/*errno is a global variable that stores the error code from the last failed operation. You can include <errno.h> to access it, 
and strerror(errno) will convert the error code into a readable message:*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
  FILE *f = fopen("nothing.txt", "r");

  if (f == NULL) {
    printf("Error: %s\n", strerror(errno));
    return 1;
  }

  fclose(f);
  return 0;
}