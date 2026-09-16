#ifndef IHA_CORE_H
#define IHA_CORE_H

#include <stdint.h>

typedef struct
{
    uint32_t zaman_damgasi;
    uint16_t irtifa;
    uint8_t ucus_modu;
    uint8_t batarya_yuzdesi;
} TelemetriLog_t;

typedef union
{
    uint32_t raw_paket;
    
    struct
    {
        uint8_t komut_id;
        uint16_t parametre;
        uint8_t checksum;
    };
} CanBusKomut_u;

#endif