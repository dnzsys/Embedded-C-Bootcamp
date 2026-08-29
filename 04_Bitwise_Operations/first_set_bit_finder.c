#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t interrupt_reg = 0x28;
    
    uint8_t *pInterrupt = &interrupt_reg;
    uint8_t index = 0;
    
    while((*pInterrupt & 1) != 1)
    {
        index += 1;
        *pInterrupt = *pInterrupt >> 1;
    }
    
    printf("Tetiklenen ilk kesme: %d. bit", index);

    return 0;
}