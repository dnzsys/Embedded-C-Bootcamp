#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t volatile status_reg = 0x00;
    
    uint8_t volatile *ptr = &status_reg;
    
    while(((*ptr >> 3) & 1) == 0);

    return 0;
}