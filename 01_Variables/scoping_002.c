#include <stdio.h>

int valueA = 3;

int main()
{
    {
        int valueA = 40;
    }

    printf("Value A = %d", valueA); //Prints 3

    return 0;
}
