#include <stdio.h>
#include <stdint.h>

int main()
{
    char sicaklik_str[] = "407";
    
    char *pSicaklik = sicaklik_str;
    
    uint16_t gercek_deger = 0;
    while(*pSicaklik != '\0')
    {
        gercek_deger = (gercek_deger * 10 + (*pSicaklik - '0'));
        pSicaklik++;
    }
    
    printf("%d", gercek_deger);

    return 0;
}
