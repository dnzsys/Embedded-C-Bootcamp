#include <stdio.h>

int main()
{
    unsigned int paket_veri = 0x1A2B3C4D;
    
    unsigned char *ptr = (unsigned char*)&paket_veri;
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d. Data : %x\n", i + 1, *ptr);
        ptr++;
    }
    
    return 0;
}