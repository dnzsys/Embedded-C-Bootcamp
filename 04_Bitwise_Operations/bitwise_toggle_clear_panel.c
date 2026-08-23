#include <stdio.h>

int main()
{
    unsigned char radar_panel = 0x3F;
    
    unsigned char *ptr = &radar_panel;
    
    *ptr ^= 0x10;
    *ptr &= ~0x01;
    
    printf("Result : %x", *ptr);

    return 0;
}