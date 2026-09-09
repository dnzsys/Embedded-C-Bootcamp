#include <stdio.h>
#include <stdint.h>

void intikal();
void taarruz();
void kacis();

int main()
{
    void (*mod_dizisi[3])(void) = {intikal, taarruz, kacis};
    
    uint8_t mod = 1;
    
    (*(mod_dizisi + mod))();
    
    return 0;
}

void intikal()
{
    printf("intikal");
}

void taarruz()
{
    printf("taarruz");
}

void kacis()
{
    printf("kacis");
}