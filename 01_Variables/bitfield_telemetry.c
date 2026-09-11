#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint16_t motor_aktif : 1;
    uint16_t kamera_kayitta : 1;
    uint16_t hedef_kilitli : 1;
    uint16_t ucus_modu : 3;
    uint16_t batarya_yuzdesi : 7;
    uint16_t rezerv : 3;
} TelemetriPaketi_t;

int main()
{
    TelemetriPaketi_t newObject = {1, 1, 1, 1, 1, 1};
    
    printf("%zu", sizeof(newObject));

    return 0;
}