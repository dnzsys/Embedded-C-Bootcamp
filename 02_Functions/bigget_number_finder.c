#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Please enter first number : ");
    fflush(stdout);
    scanf("%d", &n1);
    
    printf("\nPlease enter second number : ");
    fflush(stdout);
    scanf("%d", &n2);
    
    
    
    if(n1==n2)
    {
        printf("\nNumbers are equal!");
    }
    else
    {
        int biggestNumber;
        
        if(n1>n2)
        {
        biggestNumber = n1;
        }
    
        if(n2>n1)
        {
            biggestNumber = n2;
        }
        
        printf("\nBiggest number is : %d", biggestNumber);
    }
    
    printf("Press enter to exit the application");
    while(getchar() != '\n');
    getchar();
    
    return 0;
}
