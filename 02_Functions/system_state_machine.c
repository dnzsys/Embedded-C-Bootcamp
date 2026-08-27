#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t system_state = 2;
    
    switch(system_state)
    {
        case 0:
            printf("Durum: BEKLEME (IDLE)");
            break;
        case 1:
            printf("Durum: BASLATILIYOR (INIT)");
            break;
        case 2:
            printf("Durum: SEYRUSEFER (RUNNING)");
            break;
        case 3:
            printf("Durum: HATA (FAULT)");
            break;
        default:
            printf("Bilinmeyen Durum!");
            break;
    }

    return 0;
}