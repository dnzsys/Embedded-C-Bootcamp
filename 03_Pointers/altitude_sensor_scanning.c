#include <stdio.h>

int main()
{
    int irtifalar[5] = {1200, 1350, 1420, 1380, 1050};
    
    int max = 0;
    int *ptr = irtifalar;
    
    for(int i = 0; i<5; i++)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    
    printf("Highest value is : %d", max);

    return 0;
}