#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t gpio_port = 0x00000000;
    uint8_t aktif_edilecek_pin = 13;
    
    uint32_t *pGpio = &gpio_port;
    
    *pGpio |= (1 << aktif_edilecek_pin);
    
    printf("Result : %x", *pGpio);

    return 0;
}