#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t a;
    uint32_t b;
    uint16_t c;
} struct1_t;

typedef struct
{
    uint32_t a;
    uint16_t b;
    uint8_t c;
} struct2_t;

int main()
{
    printf("Struct 1 Size : %d\n", sizeof(struct1_t));
    printf("Struct 2 Size : %d", sizeof(struct2_t));

    return 0;
}