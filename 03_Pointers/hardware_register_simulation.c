#include <stdio.h>

int main()
{
    unsigned int portA_register = 0x00000000;
    
    unsigned int *ptr = &portA_register;
    
    printf("Port Value : %x\n", portA_register);
    
    *ptr = 0x000000FF;
    
    printf("Port Value : %x\n", portA_register);
    
    *ptr = 0x00000000;
    
    printf("Port Value : %x\n", portA_register);

    return 0;
}
