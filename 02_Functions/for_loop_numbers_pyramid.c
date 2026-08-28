#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t height;
    
    printf("Enter height of pyramid: ");
    fflush(stdout);
    scanf("%d", &height);
    
    for(uint16_t i = 1; i <= height; i++)
    {
        for(uint16_t j = i; j > 0; j--)
        {
            printf("%2d\t", j);
        }
        
        printf("\n");
    }
    
    return 0;
}