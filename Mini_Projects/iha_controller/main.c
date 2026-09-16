#include <stdio.h>
#include <stdint.h>

#include "iha_core.h"

void bekleme_modu(void);
void kalkis_modu(void);
void inis_modu(void);

int main()
{
    void (*functions[3])(void) = {bekleme_modu, kalkis_modu, inis_modu};
    
    CanBusKomut_u newUnion = {.raw_paket = 0xAA03E801};
    
    if(newUnion.komut_id < 3)
    {
        (*(functions + newUnion.komut_id))();
        printf("parametre : %d\n", newUnion.parametre);
    }
    
    uint8_t volatile ariza_kaydi = 0b10001000;
    ariza_kaydi = (1 << 3);
    
    printf("ariza kaydi : %02X", ariza_kaydi);

    return 0;
}

void bekleme_modu(void)
{
    printf("bekleme_modu\n");
}

void kalkis_modu(void)
{
    printf("kalkis_modu\n");
}

void inis_modu(void)
{
    printf("inis_modu\n");
}