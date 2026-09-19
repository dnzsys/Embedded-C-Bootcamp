#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t payload[] = {0x12, 0x34, 0x56, 0x78, 0x9A};
    
    uint8_t *pPayload = payload;
    
    uint8_t checksum = 0;
    
    for(uint8_t i = 0; i < 5; i++)
    {
        checksum ^= *pPayload;
        pPayload++;
    }
    
    printf("%02X", checksum);

    return 0;
}