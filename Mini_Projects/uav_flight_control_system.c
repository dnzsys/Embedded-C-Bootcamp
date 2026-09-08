#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t irtifa;
    uint16_t hiz;
    uint8_t motor_id;
} Telemetri_t;

int main()
{
    Telemetri_t data[3] = { {10, 20, 5}, {15, 25, 6}, {20, 30, 7} };
Telemetri_t *pData = data;
    
    uint64_t toplam = 0;
    
    for(uint8_t i = 0; i < 3; i++)
    {
        toplam += (uint64_t)pData->irtifa;
        pData++;
    }
    
    uint32_t ortalama = toplam / 3;
    uint8_t *pOrtalama = (uint8_t *)&ortalama;
    
    uint32_t checksum = 0;
    
    for(uint8_t i = 0; i < 4; i++)
    {
        checksum += *pOrtalama;
        pOrtalama++;
    }
    
    printf("Checksum : %d\n", checksum);
    
    uint32_t dummy_status = 0x80;
    
    uint32_t volatile *const pDummy = &dummy_status;
    
    *pDummy = (1 << 7);
    
    printf("Result : %x", *pDummy);

    return 0;
}