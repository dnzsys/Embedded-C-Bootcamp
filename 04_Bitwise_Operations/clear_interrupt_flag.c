#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t dummy = 0x80; 
    uint32_t volatile *timer_status = &dummy;
    
    *timer_status |= (1<<7);
    
    printf("%x", *timer_status);

    return 0;
}