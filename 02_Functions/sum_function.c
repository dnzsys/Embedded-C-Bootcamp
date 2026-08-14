#include <stdio.h>

void sumFunction(int a, int b, int c);

int main()
{
    sumFunction(1,2,3);
    
    return 0;
}

void sumFunction(int a, int b, int c)
{
    int sum = a + b + c;
    
    printf("Result is : %d", sum);
}