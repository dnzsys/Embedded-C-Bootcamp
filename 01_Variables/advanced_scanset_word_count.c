#include <stdio.h>
#include <stdint.h>

int main()
{
    char acil_durum[100] = {0};
    
    scanf("%[^\n]", acil_durum);
    
    char *pAcil = acil_durum;
    uint8_t bosluk_sayisi = 0;
    
    while(*pAcil != '\0')
    {
        if(*pAcil == ' ') bosluk_sayisi++;
        pAcil++;
    }
    
    printf("Metin : %s\nKelime sayisi : %d", acil_durum, bosluk_sayisi + 1);
    
    return 0;
}