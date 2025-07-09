#include<stdio.h>

typedef struct {
    int (*execute)(int);
}Command;

typedef struct {
    Command cmd;
    const char *label;
}Device;

int square(int x){
    return x*x;
}

int main(){
    //Device d = {.cmd.execute = square, .label = "Sensor"};//may it wokrs but it might not portable, Invalid in C, Compiler error
    //This kind of nested member initialization (.cmd.execute = square) is not valid C. You'll get a compiler error like:
    //error: field designator ‘.cmd.execute’ does not refer to any field in type ‘Device’
   
    //below one is portable 
    Device d = { .cmd = { .execute = square }, .label = "Sensor" }; // OR     Command c = { .execute = square };
                                                                    //        Device d = { .cmd = c, .label = "Sensor" };

    printf("%d\n", d.cmd.execute(5));
    return 0;
}