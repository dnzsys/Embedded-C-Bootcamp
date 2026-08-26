#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t uart_paket = 0x48FA3500;
    
    uint16_t koordinat = (uint16_t)((uart_paket >> 8) & (0x3FF));
    
    printf("Result : %x", koordinat);
    
    return 0;
}