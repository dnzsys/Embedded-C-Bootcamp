#ifndef SENSOR_CONFIG_H
#define SENSOR_CONFIG_H

typedef struct
{
    uint8_t kamera_aktif    : 1;
    uint8_t jiro_aktif      : 1;
    uint8_t ivme_aktif      : 1;
    uint8_t guc_modu        : 2;
    uint8_t rezerv          : 3;
} ImuAyar_t;

#endif