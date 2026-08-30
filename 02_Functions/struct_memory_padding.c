#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t sensor_id;  // 1 byte
    uint32_t timestamp; // 4 byte
    uint8_t status;     // 1 byte
} DataPacket;

int main()
{
    DataPacket newData = {1, 1, 1};
    
    printf("%d", sizeof(newData));

    return 0;
}