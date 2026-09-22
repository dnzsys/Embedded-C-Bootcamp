#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t ring_buffer[5] = {0};
    uint8_t *pWrite = ring_buffer;
    
    for(uint8_t i = 0; i < 8; i++)
    {
        *pWrite = i;
        pWrite++;
        
        if(pWrite == ring_buffer + 5)
        {
            pWrite = ring_buffer;
        }
    }
    
    pWrite = ring_buffer;
    for(uint8_t i = 0; i < 5; i++)
    {
        printf("%d ", *pWrite);
        pWrite++;
    }

    return 0;
}
