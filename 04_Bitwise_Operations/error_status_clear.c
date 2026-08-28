#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t error_status = 0x5F;
    
    uint8_t *pStatus = &error_status;
    
    *pStatus &= ~((1 << 1) | (1 << 5));
    
    printf("Result : %x", *pStatus);
    return 0;
}