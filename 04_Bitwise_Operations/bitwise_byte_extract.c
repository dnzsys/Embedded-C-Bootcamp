#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t status_reg = 0x89AB00FF;
    
    uint8_t masked = (uint8_t)(status_reg >> 16) & 0xFF;
    
    printf("%x", masked);

    return 0;
}