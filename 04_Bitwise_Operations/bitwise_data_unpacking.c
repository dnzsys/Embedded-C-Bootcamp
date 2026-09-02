#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t radar_paketi = 0xCAFE;
    
    uint8_t id = (uint8_t)(radar_paketi >> 12);
    uint16_t mesafe = (radar_paketi & 0xFFF);
    
    printf("Id : %x\nMesafe : %x", id, mesafe);

    return 0;
}