#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t autopilot_reg = 0x7A;
    
    uint8_t ucus_modu = (autopilot_reg >> 4) & 7;
    
    printf("Result : %d", ucus_modu);

    return 0;
}