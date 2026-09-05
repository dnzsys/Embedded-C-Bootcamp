#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t sensor_verisi = 0x12345678;
    
    uint32_t const volatile *const ptr = &sensor_verisi;
    
    printf("%x", *ptr);

    return 0;
}