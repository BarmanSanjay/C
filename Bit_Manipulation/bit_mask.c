#include<stdio.h>
#include<stdint.h>

int main(){
    uint8_t x = 0xAA;
    uint8_t mask = 1<<3;
    x ^=mask;
    printf("0x%02X\n", x);
    /*0x — A literal string, used to indicate hexadecimal. %02X — Format specifier: %X — Print the number in uppercase hexadecimal (e.g., A instead of a).
    2 — Minimum width of 2 digits.
    0 — Pad with zeros if the number is less than 2 digits.*/

    return 0;
}