#include <stdio.h>

#pragma pack(1)

struct packdata{
    char a;
    int b;
};
 
int main()
{
    unsigned int x = 12;
    x = x & (x - 1);
    printf("%u\n", x);//8
    printf("%lu\n", sizeof(struct packdata));// 5,  because of use of pragma data will be packed as per data type size only

    return 0;
}