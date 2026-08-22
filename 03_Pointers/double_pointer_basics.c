#include <stdio.h>

int main()
{
    int hata_kod1 = 101;
    int hata_kod2 = 404;
    int *p = &hata_kod1;
    
    int **dp = &p;
    *dp = &hata_kod2;
    
    printf("%d", *p);
    
    return 0;
}