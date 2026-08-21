#include <stdio.h>

void waitForEnd();

int main()
{
    char userInput;
    int base, height, base1, base2, radius, side1, side2;
    
    printf("Enter the code for area (triangle: t, trapezoid: z, circle: c, square: s, rectangle: r) : ");
    fflush(stdout);
    scanf("%c", &userInput);
    
    switch(userInput)
    {
        case 't':
            printf("Triangle Area Calculation\n");
        
            printf("\nEnter the base of triangle : ");
            fflush(stdout);
            scanf("%d", &base);
            
            if(base < 0)
            {
                printf("Radius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nEnter the height of triangle : ");
            fflush(stdout);
            scanf("%d", &height);
            
            if(height < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nTriangle Area : %d", height * base / 2);
            break;
        case 'z':
            printf("\nTrapezoid Area Calculation\n");
            
            printf("\nEnter the base 1 of trapezoid : ");
            fflush(stdout);
            scanf("%d", &base1);
            
            if(base1 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nEnter the base 2 of trapezoid : ");
            fflush(stdout);
            scanf("%d", &base2);
            
            if(base2 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nEnter the height of trapezoid : ");
            fflush(stdout);
            scanf("%d", &height);
            
            if(height < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nTrapezoid Area : %d", (base1 + base2) * height / 2);
            break;
        case 'c':
            printf("\nCircle Area Calculation\n");
            
            printf("\nEnter the radius of circle : ");
            fflush(stdout);
            scanf("%d", &radius);
            
            printf("\nCircle Area : %d", radius * 3);
            break;
        case 's':
            printf("\nSquare Area Calculation\n");
        
            printf("\nEnter the side 1 of square : ");
            fflush(stdout);
            scanf("%d", &side1);
            
            if(side1 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nEnter the side 2 of square : ");
            fflush(stdout);
            scanf("%d", &side2);
            
            if(side2 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nSquare Area : %d", side1 *side2);
            break;
        case 'r':
            printf("\nRectangle Area Calculation\n");
        
            printf("\nEnter the side 1 of rectangle : ");
            fflush(stdout);
            scanf("%d", &side1);
            
            if(side1 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nEnter the side 2 of rectangle : ");
            fflush(stdout);
            scanf("%d", &side2);
            
            if(side2 < 0)
            {
                printf("\nRadius cannot be negative");
                waitForEnd();
                return -1;
            }
            
            printf("\nRectangle Area : %d", side1 *side2);
            break;
        default:
            printf("Invalid input\n");
            break;
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
