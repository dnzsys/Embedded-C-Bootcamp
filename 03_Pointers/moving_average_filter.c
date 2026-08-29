#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t radar_olcumleri[5] = {120, 125, 118, 122, 120};
    uint16_t toplam = 0;
    
    uint16_t *pRadar = radar_olcumleri;
    
    for(int i = 0; i < 5; i++)
    {
        toplam += *(pRadar + i);
    }
    
    printf("Ortalama mesafe : %d", toplam / 5);

    return 0;
}