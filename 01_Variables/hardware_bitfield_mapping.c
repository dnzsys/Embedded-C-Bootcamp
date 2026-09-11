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
    uint16_t donanim_registeri = 0x0000;
    
    volatile TelemetriPaketi_t *ptr = (volatile TelemetriPaketi_t *)&donanim_registeri;
    
    ptr->kamera_kayitta = 1;
    ptr->ucus_modu = 5;
    
    printf("%04X", donanim_registeri);

    return 0;
}