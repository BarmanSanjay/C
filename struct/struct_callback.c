#include<stdio.h>
//This function prints a message. It's intended to be used as a callback.
void onRx(){
    printf("Data Received\n");
}

typedef struct{
    void (*callback)();
}UART;

void registerCallback(UART *uart, void (*cb)()){
    uart->callback = cb;//Assigns the function pointer cb to the callback member of the UART instance.
}

int main(){
    UART uart1;
    registerCallback(&uart1, onRx);
    if (uart1.callback)//or if (uart1.callback != NULL)
    {
        uart1.callback(); // only calls if it's not NULL
    }

    return 0;
}