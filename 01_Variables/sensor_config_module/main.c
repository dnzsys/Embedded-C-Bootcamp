#include <stdio.h>
#include <stdint.h>

#include "sensor_config.h"

int main()
{
    ImuAyar_t newObject = {1, 1, 1, 1, 1};
    printf("%d", sizeof(newObject));

    return 0;
}