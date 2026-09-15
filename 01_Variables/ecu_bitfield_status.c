#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t motor_acik : 1;
    uint8_t vites : 3;
    uint8_t hararet_uyarisi : 1;
    uint8_t devir_kademesi : 3;
} MotorDurum_t;

int main()
{
    MotorDurum_t newObject = {1, 1, 1, 1};
    printf("%d", sizeof(newObject));

    return 0;
}
