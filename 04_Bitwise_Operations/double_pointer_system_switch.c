#include <stdio.h>

int main()
{
    unsigned char ana_sensor = 0x15;
    unsigned char yedek_sensor = 0x00;
    
    unsigned char *aktif_sensor = &ana_sensor;
    unsigned char **dp = &aktif_sensor;
    
    **dp ^= 0x84;
    *dp = &yedek_sensor;
    
    printf("%x", *aktif_sensor);

    return 0;
}