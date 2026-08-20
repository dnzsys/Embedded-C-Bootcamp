#include <stdio.h>

int main()
{
    double number1, number2, number3;
    
    printf("Enter 3 numbers: ");
    fflush(stdout);
    scanf("%lf %lf %lf", &number1, &number2, &number3);
    
    double result = (number1 + number2 + number3) / 3;
    printf("\nAverage of this numbers is : %0.1lf\n", result);
    
    printf("Press enter key for exit the program\n");
    while(getchar() != '\n'); // used that because of the buffer
    getchar();
    
    return 0;
}