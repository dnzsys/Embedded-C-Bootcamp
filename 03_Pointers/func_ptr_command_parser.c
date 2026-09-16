#include <stdio.h>
#include <stdint.h>

void bekle(void);
void atesle(void);
void sogut(void);

int main()
{
    void (*functions[3])(void) = {bekle, atesle, sogut};
    
    uint8_t komutlar[] = {0, 1, 1, 2, 0};
    uint8_t *pKomutlar = komutlar;
    
    for(int i = 0; i < 5; i++)
    {
        (*(functions + *(pKomutlar + i)))();
    }

    return 0;
}

void bekle(void)
{
    printf("bekle\n");
}

void atesle(void)
{
    printf("atesle\n");
}

void sogut(void)
{
    printf("sogut\n");
}