#include <stdio.h>
#include <stdint.h>

typedef enum { BEKLEME, ATESLEME, UCUS } Durum_e;

void bekleme_fonk();
void atesleme_fonk();
void ucus_fonk();

int main()
{
    void(*mod_dizisi[3])(void) = {bekleme_fonk, atesleme_fonk, ucus_fonk};
    
    Durum_e anlik_durum = BEKLEME;
    
    while(1)
    {
        if(anlik_durum > UCUS) break;
        
        (*(mod_dizisi + anlik_durum))();
        anlik_durum++;
    }
    
    return 0;
}

void bekleme_fonk()
{
    printf("bekleme\n");
}

void atesleme_fonk()
{
    printf("atesleme\n");
}

void ucus_fonk()
{
    printf("ucus\n");
}