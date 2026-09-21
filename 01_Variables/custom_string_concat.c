#include <stdio.h>
#include <stdint.h>

int main()
{
    char mesaj[30] = "TEKNOFEST ";
    char yil[] = "2026";
    
    char *pMesaj = mesaj;
    char *pYil = yil;
    
    while(*pMesaj != '\0')
    {
        pMesaj++;
    }
    
    while(*pYil != '\0')
    {
        *pMesaj = *pYil;
        pMesaj++;
        pYil++;
    }
    *pMesaj = '\0';
    
    printf("Result : %s", mesaj);
    
    return 0;
}