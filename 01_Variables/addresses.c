#include <stdio.h>

int main()
{
    char a1 = 'S';
    char b1 = 'e';
    char c1 = 'l';
    
    printf("Address of variable a1 = %p\n", &a1);
    printf("Address of variable b1 = %p\n", &b1);
    printf("Address of variable c1 = %p", &c1);

    return 0;
}