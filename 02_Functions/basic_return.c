#include <stdio.h>

int sumFunction(int a, int b, int c);

int main()
{
    printf("Result is : %d", sumFunction(1,2,3));
    
    return 0;
}

int sumFunction(int a, int b, int c)
{
    int sum = a + b + c;
    
    return sum;
}