#include <stdio.h>
#include <stdint.h>

void sicaklik_oku(void);

typedef struct
{
    uint8_t id;
    void (*oku)(void);
} Sensor_t;

int main()
{
    Sensor_t newObject = {1, sicaklik_oku};
    
    newObject.oku();
    
    return 0;
}

void sicaklik_oku(void)
{
    printf("Sicaklik okundu!");
}