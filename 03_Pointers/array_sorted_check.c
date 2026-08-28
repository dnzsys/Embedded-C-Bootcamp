#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t sicakliklar[5] = {12, 18, 22, 27, 35};
    int8_t *pSicakliklar = sicakliklar;
    
    uint8_t is_sorted = 1; 
    
    for(int i = 0; i < 4; i++) 
    {
        if( *(pSicakliklar + i) > *(pSicakliklar + i + 1) )
        {
            is_sorted = 0;
            break;
        }
    }
    
    printf("Result : %d\n", is_sorted);

    return 0;
}