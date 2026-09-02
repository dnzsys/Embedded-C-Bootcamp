#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t port_durumu = 0b11001100;
    
    port_durumu ^= 0x06;
    
    printf("Result : %x", port_durumu);

    return 0;
}