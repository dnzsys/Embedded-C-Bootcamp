#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t adc_veri[6] = {10, 20, 30, 40, 50, 60};
    
    uint8_t *pBas = adc_veri;
    uint8_t *pSon = adc_veri + 5;
    
    while(pBas < pSon)
    {
        uint8_t temp = *pBas;
        *pBas = *pSon;
        *pSon = temp;
        
        pBas++;
        pSon--;
    }
    
    for(uint8_t i = 0; i < 6; i++)
    {
        printf("%d ", adc_veri[i]);
    }
    
    return 0;
}