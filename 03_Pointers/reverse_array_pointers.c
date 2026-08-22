#include <stdio.h>

int main()
{
    int sensor_verileri[5] = {50, 60, 70, 80, 90};
    
    int *ptr = sensor_verileri + 4;
    
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", *(ptr - i));
    }

    return 0;
}