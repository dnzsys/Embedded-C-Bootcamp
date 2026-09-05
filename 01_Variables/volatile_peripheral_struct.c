#include <stdio.h>
#include <stdint.h>

typedef struct 
{
    uint32_t volatile status;
    uint32_t volatile data;
} UART_Regs;

int main()
{
    UART_Regs newObject = { 1, 1};
    
    printf("%d", sizeof(newObject));

    return 0;
}