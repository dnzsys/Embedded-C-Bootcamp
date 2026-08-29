#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t sifreli_veri = 0x4A;
    
    uint8_t temp = sifreli_veri & 0x0F;
    
    uint8_t cozulmus_veri = ((sifreli_veri & 0xF0) >> 4) | (temp << 4);
    
    printf("Result : %x", cozulmus_veri);

    return 0;
}