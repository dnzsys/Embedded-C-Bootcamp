#include <stdio.h>
#include <stdint.h>

void kalkis_modu(void);
void seyir_modu(void);
void inis_modu(void);

int main()
{
    void (*functions[3])(void) = {kalkis_modu, seyir_modu, inis_modu};
    
    for(int i = 2; i >= 0; i--)
    {
        (*(functions + i))();
    }
    
    return 0;
}

void kalkis_modu(void)
{
    printf("kalkis_modu\n");
}

void seyir_modu(void)
{
    printf("seyir_modu\n");
}

void inis_modu(void)
{
    printf("inis_modu\n");
}