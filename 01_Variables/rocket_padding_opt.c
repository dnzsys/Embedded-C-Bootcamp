#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint16_t irtifa;
    uint8_t durum;
    uint32_t zaman_damgasi;
    uint8_t checksum;
} RoketVeri_t;

typedef struct
{
    uint32_t zaman_damgasi;
    uint16_t irtifa;
    uint8_t checksum;
    uint8_t durum;
} OptimizeRoketVeri_t;

int main()
{
    printf("%d\n", sizeof(RoketVeri_t));
    printf("%d\n", sizeof(OptimizeRoketVeri_t));

    return 0;
}
