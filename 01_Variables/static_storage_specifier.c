#include <stdio.h>

void myFunction(void);

int main()
{
    myFunction();
    myFunction();
    myFunction();
    myFunction();

    return 0;
}

void myFunction(void)
{
    static int number = 0;
    
    number = number + 1;
    
    printf("Current number is : %d\n", number);
}