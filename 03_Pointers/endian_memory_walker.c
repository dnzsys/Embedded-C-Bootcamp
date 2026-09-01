#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t dev_veri = 0x11223344;
    
    uint8_t *ptr = (uint8_t *)&dev_veri;
    
    for(int i = 0; i < 4; i++)
    {
        printf("%x\n", *ptr);
        ptr++;
    }

    return 0;
}
