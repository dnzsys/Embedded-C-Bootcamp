#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t payload = 0x0A0B0C0D;
    
    uint8_t *ptr = (uint8_t *)&payload;
    
    uint16_t toplam = 0;
    
    for(int i = 0; i < 4; i++)
    {
        toplam += *ptr;
        ptr++;
    }
    
    printf("Toplam : %d", toplam);

    return 0;
}