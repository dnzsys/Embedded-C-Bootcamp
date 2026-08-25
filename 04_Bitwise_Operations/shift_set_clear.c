#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t atesleme_register = 0x00;
    
    uint8_t *ptr = &atesleme_register;
    *ptr |= (1 << 5);
    
    printf("%x\n", *ptr);
    
    *ptr &= ~(1 << 5);
    
    printf("%x\n", *ptr);

    return 0;
}