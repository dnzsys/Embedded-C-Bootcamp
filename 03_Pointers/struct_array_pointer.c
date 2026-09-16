#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t id;
    uint16_t sicaklik;
    uint8_t aktif_mi;
} Sensor_t;

int main()
{
    Sensor_t newObject[3] = {{'A', 30, 1}, {'B', 85, 1}, {'C', 45, 0}};
    
    Sensor_t *gezgin = newObject;
    
    for(int i = 0; i < 3; i++)
    {
        if(gezgin->sicaklik > 50)
        {
            printf("%c\n", gezgin->id);
        }
        
        gezgin++;
    }

    return 0;
}