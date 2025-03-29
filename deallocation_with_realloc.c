#include <stdio.h>
#include <stdlib.h>

int main(){
    // Dynamic memory allocation of 40 bytes (10 integers)
    int *ptr = (int*)malloc(10 * sizeof(int));
    if (ptr == NULL) {
        printf("MEMORY ALLOCATION FAILED\n");
        return 1;
    }

    // Reallocate memory to 0 bytes (this frees the memory), without using free(ptr) 
    ptr = realloc(ptr, 0);
    if (ptr == NULL) {
        printf("MEMORY FREED\n");
    }

    return 0;
}

