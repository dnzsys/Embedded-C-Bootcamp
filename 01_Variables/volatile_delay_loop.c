#include <stdio.h>
#include <stdint.h>

void gecikme_yap(uint32_t tekrar_sayisi);

int main()
{
    gecikme_yap(1000000);

    return 0;
}

void gecikme_yap(uint32_t tekrar_sayisi)
{
    for(uint32_t volatile i = 0; i < tekrar_sayisi; i++);
}