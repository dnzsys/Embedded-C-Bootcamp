#include <stdio.h>

int main()
{
    int ram_blogu[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    unsigned char *ptr = (unsigned char *)ram_blogu;
    
    for(int i = 0; i < sizeof(ram_blogu); i++)
    {
        *ptr = 0x00;
        ptr++;
    }
    
    printf("Last version:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d. value: %d\n", i + 1, ram_blogu[i]);
    }
    
    return 0;
}