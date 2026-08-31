#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t irtifa;
    uint8_t hiz;
} TelemetryData;

void veriyi_yazdir(TelemetryData const *ptr);

int main()
{
    TelemetryData object = {1000, 250};
    
    veriyi_yazdir(&object);
    
    return 0;
}

void veriyi_yazdir(TelemetryData const *ptr)
{
    printf("Irtifa : %d\nHiz : %d", ptr->irtifa, ptr->hiz);
}