#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef struct {
        uint8_t id;
        uint8_t error_code; // 0 ise sorunsuz, 0'dan farklıysa arızalı
    } Sensor;

    Sensor sistem_sensorleri[3] = { {1, 0}, {2, 0}, {3, 5} }; // 3. sensör arızalı!
    
    Sensor *ptr = sistem_sensorleri;
    
    for(int i = 0; i < 3; i++)
    {
        if(ptr->error_code)
        {
            printf("Arizali sensor id : %d", ptr->id);
        }
        ptr++;
    }
    
    return 0;
}