#include <stdio.h>
#include <stdint.h>

#define DONANIM_VER 2

#if DONANIM_VER == 1
    #define MOTOR_BIT 4
#elif DONANIM_VER == 2
    #define MOTOR_BIT 7
#endif

#define MOTOR_CALISTIR(register_adresi)  (*(register_adresi) |= (1 << MOTOR_BIT))

int main()
{
    uint32_t gpiod_odr = 0x00000000;
    MOTOR_CALISTIR(&gpiod_odr);
    
    printf("Result: %08X", gpiod_odr);

    return 0;
}