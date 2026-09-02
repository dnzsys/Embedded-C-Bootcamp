#include <stdio.h>
#include <stdint.h>

uint8_t sistem_kontrol(uint16_t const *ptr1, uint16_t const *ptr2, uint8_t boyut);

int main()
{
    uint16_t sensor1_verileri[3] = {100, 105, 110};
    uint16_t sensor2_verileri[3] = {100, 105, 110};
    
    printf("Result : %d", sistem_kontrol(sensor1_verileri, sensor2_verileri, 3));

    return 0;
}

uint8_t sistem_kontrol(uint16_t const *ptr1, uint16_t const *ptr2, uint8_t boyut)
{
    for(int i = 0; i < boyut; i++)
    {
        if(*ptr1 != *ptr2) return 0;
        
        ptr1++;
        ptr2++;
    }
    
    return 1;
}