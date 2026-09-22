#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t id;
    uint16_t sicaklik;
    char durum;
} Sensor_t;

int main()
{
    Sensor_t sensorler[3] = { {1, 35, 'O'}, {2, 85, 'E'}, {3, 34, 'O'} };
    
    Sensor_t *pSensor = sensorler;
    
    for(uint8_t i = 0; i < 3; i++)
    {
        if(pSensor->durum == 'E')
        {
            printf("Id: %d\nSicaklik: %d\n", pSensor->id, pSensor->sicaklik);   
        }
        pSensor++;
    }

    return 0;
}