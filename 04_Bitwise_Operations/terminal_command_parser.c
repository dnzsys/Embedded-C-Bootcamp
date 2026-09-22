#include <stdio.h>
#include <stdint.h>

uint8_t komut_esit_mi(char *gelen_komut, char *beklenen_komut)
{
    while (*gelen_komut != '\0' || *beklenen_komut != '\0')
    {
        if (*gelen_komut != *beklenen_komut)
        {
            return 0; 
        }
        
        gelen_komut++;
        beklenen_komut++;
    }
    
    return 1; 
}

int main()
{
    uint32_t gpiod_odr = 0x00000000;
    
    char komut[] = "LED_ON";
    
    if (komut_esit_mi(komut, "LED_ON") == 1)
    {
        gpiod_odr |= (1 << 12); 
    }
    else if (komut_esit_mi(komut, "LED_OFF") == 1)
    {
        gpiod_odr &= ~(1 << 12); 
    }

    printf("Gelen Komut: %s\n", komut);
    printf("ODR Register Son Durum: %08X\n", gpiod_odr);

    return 0;
}