#include <stdio.h>
#include <stdint.h>

uint16_t max_bul(uint16_t const *ptr, uint8_t boyut);

int main()
{
    uint16_t sensor_degerleri[4] = {450, 890, 120, 760};
    
    printf("Highest value : %d", max_bul((uint16_t const *)sensor_degerleri, 4));

    return 0;
}

uint16_t max_bul(uint16_t const *ptr, uint8_t boyut)
{
    uint16_t highest = 0;
    
    for(int i = 0; i < boyut; i++)
    {
        if(*ptr > highest)
        {
            highest = *ptr;
        }
        
        ptr++;
    }
    
    return highest;
}