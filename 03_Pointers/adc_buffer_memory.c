#include <stdio.h>

int main()
{
    int adc_buffer[5] = {102, 255, 340, 410, 500};
    int total = 0;

    int *ptr = adc_buffer;
    
    printf("--- ADC Okumalari ---\n");
    
    for(int i = 0; i<5; i++)
    {
        int current = *(ptr + i);
        total += current;
        
        printf("%d. Okuma : %d\n", i+1, current);
    }
    
    printf("\nADC Ortalama Değeri: %d", total / 5);
    

    return 0;
}
