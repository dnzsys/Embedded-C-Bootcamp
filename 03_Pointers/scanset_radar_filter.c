#include <stdio.h>
#include <stdint.h>

int main()
{
    char komut_buffer[50] = {0};
    
    scanf("%[A-Z0-9]", komut_buffer);
    
    char *pBuffer = komut_buffer;
    
    uint8_t uzunluk = 0;
    while(*pBuffer != '\0')
    {
        uzunluk++;
        pBuffer++;
    }
    
    printf("Komut : %s\nUzunluk : %d", komut_buffer, uzunluk);
    
    return 0;
}