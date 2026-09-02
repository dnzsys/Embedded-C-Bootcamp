#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef struct {
        uint8_t sensor_id;
        uint8_t sicaklik;
    } MotorSicaklik;
    
    MotorSicaklik motor_verileri[4] = { {1, 40}, {2, 45}, {3, 42}, {4, 39} };
    
    MotorSicaklik *ptr = motor_verileri;
    
    uint16_t toplam = 0;
    
    for(int i = 0; i <4; i++)
    {
        toplam += ptr->sicaklik;
        ptr++;
    }
    
    printf("Ortalama : %d", toplam >> 2);

    return 0;
}