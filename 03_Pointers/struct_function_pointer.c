#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t lat;
    uint16_t lon;
} GPSData;

void update_gps(GPSData *p, uint16_t new_lat, uint16_t new_lon);

int main()
{
    GPSData newData = {0, 0};
    
    update_gps(&newData, 40, 32);
    
    printf("Lat : %d\nLon : %d", newData.lat, newData.lon);

    return 0;
}

void update_gps(GPSData *p, uint16_t new_lat, uint16_t new_lon)
{
    p->lat = new_lat;
    p->lon = new_lon;
}