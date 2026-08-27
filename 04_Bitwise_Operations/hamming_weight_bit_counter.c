#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t payload = 0x00000F1A;
    uint8_t birlerin_sayisi = 0;
    
    while(payload > 0)
    {
        if(payload & 1) 
        {
            birlerin_sayisi++;
        }
        
        payload = payload >> 1; 
    }
    
    printf("Toplam 1 biti sayısı : %d", birlerin_sayisi);

    return 0;
}