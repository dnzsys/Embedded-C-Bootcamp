#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t isr_reg = 0x00000028;
    
    uint32_t volatile *pIsr = &isr_reg;
    
    *pIsr = (1 << 5);

    printf("%08X", *pIsr);

    return 0;
}
