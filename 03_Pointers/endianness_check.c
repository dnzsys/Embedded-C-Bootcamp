#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t test_val = 0x1234;
    
    uint8_t *pIlkOda = (uint8_t *)&test_val;
    
    if(*pIlkOda == 0x34)
    {
        printf("Mimari: Little-Endian\n");
    }
    else if(*pIlkOda == 0x12)
    {
        printf("Mimari: Big-Endian\n");
    }

    return 0;
}