#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a = 0x12;
    uint8_t b = 0x34;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("a : %x \nb : %x", a, b);

    return 0;
}