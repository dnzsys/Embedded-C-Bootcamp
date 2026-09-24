#include <stdio.h>
#include <stdint.h>

#define DRONE_TIPI 1

#if DRONE_TIPI == 1
    #define LED_PIN 12
    #define HEDEF_KARAKTER 'K'
#elif DRONE_TIPI == 2
    #define LED_PIN 14
    #define HEDEF_KARAKTER 'G'
#else
    #error "Gecersiz Drone Tipi! Sadece 1 veya 2 giriniz." 
#endif

int main()
{
    char ucus_kodu[] = "X-RAY-K-99";
    char *pKod = ucus_kodu;
    
    while(*pKod != '\0')
    {
        if(*pKod == HEDEF_KARAKTER)
        {
            printf("Hedef bulundu! Ateslenen Pin: %d\n", LED_PIN);
            break;
        }
        
        pKod++;
    }

    return 0;
}