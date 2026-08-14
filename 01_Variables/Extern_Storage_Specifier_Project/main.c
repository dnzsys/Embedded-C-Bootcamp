#include <stdio.h>

int number = 100;

void file1_changingNumber(void);

int main()
{
    printf("Value of number is : %d\n", number);
    
    file1_changingNumber();
    
    printf("Value of number is : %d", number);

    return 0;
}