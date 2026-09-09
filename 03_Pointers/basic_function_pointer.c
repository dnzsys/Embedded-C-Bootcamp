#include <stdio.h>
#include <stdint.h>

void motor_guc_ver(uint8_t seviye);

int main()
{
    void (*motor_kontrol)(uint8_t) = motor_guc_ver;
    
    motor_kontrol(50);

    return 0;
}

void motor_guc_ver(uint8_t seviye)
{
    printf("Motor gucu : %d", seviye);
}