#include <stdio.h>

int main()
{
    float number1, number2, number3;
    
    printf("Enter number 1: ");
    fflush(stdout);
    scanf("%f", &number1);
    
    printf("\nEnter number 2: ");
    fflush(stdout);
    scanf("%f", &number2);

    printf("\nEnter number 3: ");
    fflush(stdout);
    scanf("%f", &number3);
    
    float result = (number1 + number2 + number3) / 3;
    printf("\nAverage of this numbers is : %0.1f\n", result);
    
    printf("Press enter key for exit the program\n");
    while(getchar() != '\n'); // used that because of the buffer
    getchar();
    
    return 0;
}