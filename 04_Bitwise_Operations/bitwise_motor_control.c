#include <stdio.h>

int main()
{
    unsigned char motor_register = 0x42;
    
    unsigned char *ptr = &motor_register;
    
    *ptr |= 0x41;
    *ptr &= ~0x02;
    
    printf("Result : %x", *ptr);

    return 0;
}