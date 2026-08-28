#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef enum { 
        IDLE = 0, 
        READY = 1, 
        TRANSMITTING = 2, 
        ERROR = 3 
    } SystemState;

    SystemState current_state = TRANSMITTING;
    
    switch(current_state)
    {
        case IDLE:
            printf("Sistem Beklemede");
            break;
        case READY:
            printf("Sistem Hazir");
            break;
        case TRANSMITTING:
            printf("Veri Aktariliyor...");
            break;
        case ERROR:
            printf("Kritik Hata!");
            break;
        default:
            printf("Bilinmeyen Durum");
            break;
    }

    return 0;
}