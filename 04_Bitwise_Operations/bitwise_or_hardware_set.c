#include <stdio.h>

int main()
{
    unsigned char port_c = 0x50;
    
    unsigned char *ptr = &port_c;
    
    *ptr |= 0x03;
    
    printf("Result : %x", *ptr);

    return 0;
}