#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t gps_packet = 0xB487;
    
    uint8_t uydu_id = (uint8_t)(gps_packet >> 4) & 0xFF;
    
    printf("Result : %x", uydu_id);

    return 0;
}