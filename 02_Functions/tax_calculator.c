#include <stdio.h>

void waitForEnd();

int main()
{
    double income, tax;
    
    printf("Please enter your income : ");
    fflush(stdout);
    scanf("%lf", &income);
    
    if(income <= 9525)
    {
        tax = 0;
    }
    else if(income <= 38700)
    {
        tax = income * 0.12;
    }
    else if(income <= 82500)
    {
        tax = income * 0.22;
    }
    else
    {
        tax = (income * 0.32) + 1000;
    }
    
    printf("\nTax payable : $%0.0lf", tax);
    
    waitForEnd();
    return 0;
}

void waitForEnd()
{
    printf("\nPress enter to exit the application");
    while(getchar() != '\n');
    getchar();
}
