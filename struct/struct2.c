#include<stdio.h>

typedef struct{
    void (*init)();
    void (*transmit)(const char *);
}SPI_Driver;

void spiInit(){
    printf("SPI Init\n");
}

void spiTransmit(const char *data){
    printf("TX: %s\n", data);
}

int main(){
    SPI_Driver spi = {.init = spiInit, .transmit = spiTransmit};

    spi.init();
    spi.transmit("Hello");

    return 0;
}