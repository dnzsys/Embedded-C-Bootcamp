#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t start, end;
    uint32_t evenNumbers = 0;
    
    printf("Enter start and end numbers : ");
    fflush(stdout);
    scanf("%d %d", &start, &end);
    printf("\n");
    
    while(start <= end)
    {
        printf("%d\t", start++);
        
        if(!(start % 2))
        {
            evenNumbers++;
        }
    }
    
    printf("\nEven Numbers Amount : %d", evenNumbers);

    return 0;
}