#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t sicakliklar[6] = {22, 25, 21, 28, 24, 29};
    
    int8_t *pSicakliklar = sicakliklar;
    int8_t highestNumber = *pSicakliklar;
    
    for(int i = 0; i < 6; i++)
    {
        if(*(pSicakliklar + i) > highestNumber)
        {
            highestNumber = *(pSicakliklar + i);
        }
    }
    
    printf("Highest Number is : %d", highestNumber);

    return 0;
}