#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t radar_status = 0x4F92;
    uint8_t kilit_uyarisi;
    
    kilit_uyarisi = (uint8_t)((radar_status >> 9) & 1);
    
    printf("Kilit Durumu: %d\n", kilit_uyarisi);

    return 0;
}