#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t network_packet = 0xAABBCCDD;
    
    uint32_t host_packet = 
        ((network_packet & 0xFF000000) >> 24) |  // AA'yı al, 3 oda sağa kaydır
        ((network_packet & 0x00FF0000) >> 8)  |  // BB'yi al, 1 oda sağa kaydır
        ((network_packet & 0x0000FF00) << 8)  |  // CC'yi al, 1 oda sola kaydır
        ((network_packet & 0x000000FF) << 24);   // DD'yi al, 3 oda sola kaydır
    
    printf("Result : %x", host_packet); // Çıktı: ddccbbaa
    
    return 0;
}