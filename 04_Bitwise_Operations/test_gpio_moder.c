#include <stdio.h>
#include <stdint.h>

volatile uint32_t *pGpiodModer = (volatile uint32_t *)0x40020C00;

int main()
{
    *pGpiodModer &= ~(3 << 24);
    *pGpiodModer |= (1 << 24);

    return 0;
}