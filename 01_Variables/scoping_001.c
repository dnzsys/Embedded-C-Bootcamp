#include <stdio.h>

//Declaration for function
void extraFunc(void);

int score;

int main()
{
    score = 500;
    printf("001Value of the score = %d\n", score);

    extraFunc();

    return 0;
}

//Definition for function
void extraFunc(void)
{
    score = 200;
    printf("002Value of the score = %d\n", score);
}