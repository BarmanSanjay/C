/*Since the largest member is 36 bytes, the entire union will also be 36 bytes.

If it was a struct instead, the size would be 44 bytes:
myNum (4 bytes) + myLetter (4 bytes) + myString (36 bytes) = 44 bytes total*/
#include<stdio.h>
union myUnion {
  int myNum;
  char myLetter;
  char myString[36];
};

int main() {
  union myUnion u1;
  printf("Size of union: %zu bytes\n", sizeof(u1));
  return 0;
}
/*When to Use Unions
Use unions when:

You need to store different types in the same location
You only use one type at a time
Saving memory is very important*/