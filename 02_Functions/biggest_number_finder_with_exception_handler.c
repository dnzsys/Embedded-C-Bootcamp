#include <stdio.h>

void waitForEnd();

int main()
{
    int n1, n2;
    
    printf("Please enter first number : ");
    fflush(stdout);
    if(scanf("%d", &n1) == 0){
        printf("Invalid input! Exiting...");
        waitForEnd();
        
        return -1;
    }
    
    printf("\nPlease enter second number : ");
    fflush(stdout);
    if(scanf("%d", &n2) == 0){
        printf("Invalid input! Exiting...");
        waitForEnd();
        
        return -1;
    }
    
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
    
    waitForEnd();
    
    return 0;
}

void waitForEnd()
{
    printf("\nPress enter to exit the application");
    while(getchar() != '\n');
    getchar();
}
