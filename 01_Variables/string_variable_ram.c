#include <stdio.h>
#include <stdint.h>

int main()
{
    char mod_mesaji[] = "DRONE_MODE=0";
    
    char *pMesaj = mod_mesaji;
    printf("Ilk hali : %s\n", mod_mesaji);
    
    *(pMesaj + 11) = '1';
    
    printf("Son hali : %s\n", mod_mesaji);
    
    return 0;
}