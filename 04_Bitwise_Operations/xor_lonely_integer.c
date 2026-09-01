#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t id_listesi[5] = {10, 20, 10, 30, 20};
    
    uint8_t *ptr = id_listesi;
    
    uint8_t mix = *ptr;
    ptr++;
    
    for(int i = 0; i < 4; i++)
    {
        mix ^= *ptr;
        ptr++;
    }
    
    printf("Tek kalan sayi : %d", mix);

    return 0;
}
