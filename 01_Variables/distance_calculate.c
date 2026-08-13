#include <stdio.h>

int main()
{
    unsigned char distanceA2B = 160;
    unsigned char distanceB2C = 40;
    
    unsigned char distanceA2C = distanceA2B + distanceB2C;
    
    printf("Total distance from A2C is : %u", distanceA2C);

    return 0;
}