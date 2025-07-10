#include <stdio.h>

int greet(){
    printf("hi\n");
    return 0;
}
int (*getFn())(){
   return greet; 
}

int main()
{
    //int (*fp)() = getFn;//getFn is a function that returns a pointer to a function.

    int (*fp)() = getFn(); //getFn() is a call to that function — it returns a function pointer (in this case, pointing to greet).
    fp();
    return 0;
}