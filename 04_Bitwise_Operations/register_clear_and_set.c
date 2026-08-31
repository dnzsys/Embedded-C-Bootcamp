#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t control_reg = 0xABCD1234;
    
    uint32_t *pControl = &control_reg;
    
    *pControl &= ~(0xF << 12);
    *pControl |= (0x9 << 12);
    
    printf("Result : %x", *pControl);
    
    return 0;
}