#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t gimbal_register = 0x1024;
    
    uint16_t *pGimbal = &gimbal_register;
    
    *pGimbal |= (3 << 1);
    *pGimbal &= ~(1 << 12);
    
    printf("Result : %x", *pGimbal);

    return 0;
}