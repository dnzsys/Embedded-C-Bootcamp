#include <stdio.h>
#include <stdint.h>

void bellek_temizle(uint8_t *baslangic_adresi, uint8_t uzunluk, uint8_t silme_degeri);

int main()
{
    uint8_t buffer[4] = {0xFF, 0xAA, 0xBB, 0xCC};
    
    uint8_t *pBuffer = buffer;
    
    printf("BASLANGIC DEGERLERI:\n\n");
    for(uint8_t i = 0; i < 4; i++)
    {
        printf("%02X\n", *(pBuffer + i));
    }
    
    bellek_temizle(pBuffer, 4, 0x00);
    
    printf("\nSONRAKI DEGERLERI:\n\n");
    for(uint8_t i = 0; i < 4; i++)
    {
        printf("%02X\n", *(pBuffer + i));
    }

    return 0;
}

void bellek_temizle(uint8_t *baslangic_adresi, uint8_t uzunluk, uint8_t silme_degeri)
{
    for(uint8_t i = 0; i < uzunluk; i++)
    {
        *(baslangic_adresi + i) = silme_degeri;
    }
}