#include <stdio.h>

void waitForEnd();

int main()
{ 
    int input, output;
    
    printf("Enter a number : ");
    fflush(stdout);
    scanf("%d", &input);
    
    output = input & 0x8F;
    
    printf("[input] [output] : %x %x\n", input, output);
    
    waitForEnd();

    return 0;
}

void waitForEnd()
{
    printf("\nPress enter to exit the application");
    while(getchar() != '\n');
    getchar();
}