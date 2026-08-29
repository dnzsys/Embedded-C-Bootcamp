#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef struct {
        int16_t roll;
        int16_t pitch;
        int16_t yaw;
    } SensorData;
    
    SensorData ucak_jiro = {-10, -5, 0};
    
    SensorData *ptr = &ucak_jiro;
    
    ptr->pitch = -15;
    
    printf("Yeni Pitch: %d", ptr->pitch);

    return 0;
}