#include <stdio.h>

int main()
{
    int age;
    
    printf("Please enter your age : ");
    fflush(stdout);
    scanf("%d", &age);
    
    if(age>=18)
    {
        printf("\nYou can vote!");
    }
    
    if(age<18)
    {
        printf("\nYou can't vote!");
    }

    while(getchar() != '\n');
    getchar();

    return 0;
}
