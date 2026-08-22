#include <stdio.h>

void waitForEnd();

int main()
{ 
    int number;
    
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%d", &number);
    
    if(number & 1)
    {
        printf("\nNumber is odd");
    }
    else
    {
        printf("\nNumber is even");
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