#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t const carpan_tablosu[5] = {10, 25, 50, 75, 100};
    
    uint16_t const *pTablo = carpan_tablosu + 2;
    
    printf("%d", *pTablo);
    
    return 0;
}