#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t status_reg = 0b11011000;
    
    uint8_t volatile *pStatus = &status_reg;
    
    *pStatus = (1 << 4) | (1 << 3);
    
    printf("Result : %02X", *pStatus);

    return 0;
}