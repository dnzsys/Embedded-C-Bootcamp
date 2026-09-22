#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t rx_buffer[8] = {0x11, 0x22, 0x33, 0x44, 0xAA, 0xBB, 0xCC, 0xDD};
    
    uint8_t *pBuffer = rx_buffer + 4;
    
    uint32_t payload = *((uint32_t *)pBuffer);
    
    printf("%X", payload);

    return 0;
}
