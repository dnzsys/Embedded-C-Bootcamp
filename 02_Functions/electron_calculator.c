#include <stdio.h>

int main()
{
    double charge, chargeE, electrons;
    
    printf("Enter the charge : ");
    fflush(stdout);
    scanf("%lf", &charge);
    
    printf("Enter the charge an electron : ")
    fflush(stdout);
    scanf("%lf", &chargeE);
    
    electrons = charge / chargeE;
    
    printf("\nTotal numbers of electrons : %lf\n", electrons);
    
    printf("Press enter key to exit the application")
    while(getchar() != '\n');
    getchar();
    
    return 0;
}