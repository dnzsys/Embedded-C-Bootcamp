#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint32_t tum_port;
    
    struct
    {
        uint32_t tx_aktif : 1;
        uint32_t rx_aktif : 1;
        uint32_t hata_kodu : 6;
        uint32_t baud_rate : 24;
    } bitler;
} UartRegister_u;

int main()
{
    UartRegister_u newObject;
    newObject.tum_port = 0x00B71B03;
    
    printf("tx_aktif : %d\n", newObject.bitler.tx_aktif);
    printf("rx_aktif : %d\n", newObject.bitler.rx_aktif);
    printf("hata_kodu : %d\n", newObject.bitler.hata_kodu);
    printf("baud_rate : %d\n", newObject.bitler.baud_rate);

    return 0;
}