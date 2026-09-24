#include <stdio.h>
#include <stdint.h>

#define DEBUG_MODU 1

#ifndef SENSOR_VERI_H
#define SENSOR_VERI_H

typedef struct
{
    uint8_t uydu_sayisi;
    uint16_t irtifa;
} GpsVeri_t;

#endif

int main()
{
    GpsVeri_t values[4] = { {1, 1}, {2, 2}, {3, 3}, {4, 4} };
    GpsVeri_t *pValues = values;
    
    GpsVeri_t maxValue = {0, 0};
    for(uint8_t i = 0; i < 4; i++)
    {
        if(pValues->irtifa > maxValue.irtifa)
        {
            maxValue = *pValues;
        }
        
        pValues++;
    }
    
    #ifdef DEBUG_MODU
    
        printf("En yuksek irtifa : %d", maxValue.irtifa);
    
    #endif
    
    return 0;
}