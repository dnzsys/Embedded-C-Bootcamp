#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t buffer_size = 8;
    uint8_t head = 7; // Şu an son indeksteyiz
    
    head = (head + 1) & 7;
    
    printf("Head : %d", head);

    return 0;
}