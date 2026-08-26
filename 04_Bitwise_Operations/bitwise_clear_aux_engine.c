#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t engine_control = 0x8F73;
    
    uint16_t *pEngine = &engine_control;
    
    *pEngine &= ~(7 << 4);
    
    printf("Result : %x", *pEngine);

    return 0;
}