//sizeof() compare with -1 where in comparision -1 will be converetd to big unsigned value
/*Memory Allocation: num is assigned 4 bytes in the stack memory.

Storing the Value: The value -1 is stored as 0xFFFFFFFF (or 11111111 11111111 11111111 11111111 in binary) in those 4 bytes.

Fetching the Value: When you print num, the system fetches the value from memory and interprets it as -1 in decimal.*/

/*sizeof() is always return unsigned but in comparision -1 will be converted to big unsigned 0xFFFFF so condition will get failed*/

#include<stdio.h>

int main(){
    
    if(sizeof(int) > -1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}