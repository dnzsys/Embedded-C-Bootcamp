#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t gpio_port = 0x10;
    
    uint8_t *pGpio = &gpio_port;
    
    *pGpio |= (0x11 << 3);
    
    printf("Result : %x", *pGpio);

    return 0;
}
