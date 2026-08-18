#include <stdio.h>

int main()
{
    char value1, value2, value3, value4, value5, value6;
    
    printf("Enter 6 characters of your choice: ");
    fflush(stdout);
    scanf("%c %c %c %c %c %c", &value1, &value2, &value3, &value4, &value5, &value6);
    
    printf("\nASCII codes : %d, %d, %d, %d, %d, %d", value1, value2, value3, value4, value5, value6);
    
    printf("Press enter key to exit the application\n");
    while(getchar() != '\n');
    getchar();
    
    return 0;
}