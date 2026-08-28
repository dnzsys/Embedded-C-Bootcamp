#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t header = 0xAA;
    uint16_t data_id = 0x0123;
    uint8_t checksum = 0x55;
    
    uint32_t paket = (uint32_t)(header << 24) | (uint32_t)(data_id << 8) | (uint32_t)(checksum);
    
    printf("Result : %x", paket);

    return 0;
}