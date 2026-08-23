#include <stdio.h>

int main()
{
    unsigned char iha_sensor = 0xAD;
    
    unsigned char *ptr = &iha_sensor;
    
    if(*ptr & 0x08)
    {
        printf("Buzlanma uyarısı aktif!");
    }
    else
    {
        printf("Buzlanma uyarısı aktif değil!");
    }

    return 0;
}