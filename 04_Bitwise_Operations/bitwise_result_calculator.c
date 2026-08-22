#include <stdio.h>

int main()
{ 
    int n1, n2;
    
    printf("Enter 2 integer : ");
    fflush(stdout);
    scanf("%d %d", &n1, &n2);
    
    printf("\nAND bitwise result : %d\n", n1 & n2);
    printf("OR bitwise result : %d\n", n1 | n2);
    printf("NOT bitwise result of n1 : %d\n", ~n1);
    printf("XOR bitwise result : %d\n", n1 ^ n2);

    return 0;
}