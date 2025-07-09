#include<stdio.h>

typedef struct {
    int id;
    int (*action)(int);
}Device;

int square(int x){
    return x*2;
}

int main(){
    Device d = { .id = 101, .action = square };

    printf("%d\n", d.action(5));//10
    return 0;
}