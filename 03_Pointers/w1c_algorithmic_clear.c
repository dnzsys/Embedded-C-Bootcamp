#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t fault_reg = 0x00010044;
    
    uint32_t volatile *pFault = &fault_reg;
    
    for(int i = 0; i <= 31; i++)
    {
        if(((*pFault >> i) & 1) == 1)
        {
            printf("Hata tespit edildi %d. bit temizleniyor...\n", i);
            
            *pFault = (1 << i);
        }
    }

    return 0;
}
