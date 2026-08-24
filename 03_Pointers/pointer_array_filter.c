#include <stdio.h>

int main()
{
    unsigned char sicakliklar[5] = {85, 92, 120, 78, 105};
    
    unsigned char *ptr = sicakliklar;
    
    for(int i = 0; i < 5; i++)
    {
        if(*(ptr + i) > 100)
        {
            *(ptr + i) = 100;
        }
    }
    
    printf("Dizinin son hali : \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}