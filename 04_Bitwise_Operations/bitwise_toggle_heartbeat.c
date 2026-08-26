#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t sys_status = 0xA5;
    
    uint8_t *pSys = &sys_status;
    
    *pSys ^= (1) | (1 << 7);
    
    printf("Result : %x", *pSys);
    
    return 0;
}