//an enum (short for enumeration) is a user-defined data type that consists of integral constants.
#include<stdio.h>

typedef enum {
    CMD_INIT,
    CMD_RUN,
    CMD_SHUTDOWN
}CommandType;

void init(){
    printf("Init\n");
}

void run(){
    printf("Run\n");
}

void shutdown(){
    printf("Shutdown\n");
}

int main(){
    void (*dispatcher[3])() = {init, run, shutdown};
    CommandType cmd = CMD_SHUTDOWN;
    dispatcher[cmd]();
    return 0;
}



 