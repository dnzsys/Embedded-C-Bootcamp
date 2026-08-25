#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t sensor_paketi = 0xABCD1234;
    
    sensor_paketi = sensor_paketi >> 12;
    uint16_t irtifa = (uint16_t) (sensor_paketi & 0x0FFF);
    
    printf("%x", irtifa);

    return 0;
}