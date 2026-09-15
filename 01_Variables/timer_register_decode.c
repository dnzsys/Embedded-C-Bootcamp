#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint16_t tum_register;
    
    struct
    {
        uint16_t aktif : 1;
        uint16_t kesme_aktif : 1;
        uint16_t mod : 2;
        uint16_t bolucu_prescale : 12;
    } bitler;
} TimerReg_u;

int main()
{
    TimerReg_u newObject;
    
    newObject.tum_register = 0x1031;
    
    printf("aktif : %d\n", newObject.bitler.aktif);
    printf("kesme_aktif : %d\n", newObject.bitler.kesme_aktif);
    printf("mod : %d\n", newObject.bitler.mod);
    printf("bolucu_prescale : %d\n", newObject.bitler.bolucu_prescale);

    return 0;
}
