#include <stdio.h>

int main()
{
    char number = 100;
    printf("Address of the number variable is : %p\n", number);
    
    char* pNumber = &number;
    
    char value = *pNumber;
    printf("Read value is : %d\n", value);
    
    *pNumber = 65;
    printf("Number is : %d", number);

    return 0;
}