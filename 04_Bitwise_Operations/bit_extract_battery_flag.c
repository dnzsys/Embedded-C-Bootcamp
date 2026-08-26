#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t status_register = 0x50C40000;
    
    uint8_t batarya_uyarisi = (status_register >> 22) & 1;
    
    printf("Batarya Uyarısı : %d", batarya_uyarisi);
    
    return 0;
}