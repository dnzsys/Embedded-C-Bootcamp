#include <stdio.h>

int main()
{
    char komut[] = "TEKOR";
    
    printf("First version of word : %s\n", komut);
    
    char *pFirst = komut;
    char *pLast = komut + 4;
    
    while (pFirst < pLast)
    {
        char temp = *pFirst;
        *pFirst = *pLast;
        *pLast = temp;
        
        pFirst++;
        pLast--;
    }
    
    printf("Last version of word : %s", komut);

    return 0;
}