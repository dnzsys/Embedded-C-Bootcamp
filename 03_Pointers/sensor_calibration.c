#include <stdio.h>

void kalibreEt(int *s1, int *s2)
{
    int geciciDeger = *s1;
    
    *s1 = *s2;
    *s2 = geciciDeger;
}

int main()
{
    int sensor1 = 100;
    int sensor2 = 200;
    
    printf("Kalibrasyon öncesi : \n");
    printf("Sensör 1 : %d | Sensör 2 : %d\n", sensor1, sensor2);
    
    kalibreEt(&sensor1, &sensor2);
    
    printf("Kalibrasyon sonrası : \n");
    printf("Sensör 1 : %d | Sensör 2 : %d", sensor1, sensor2);

    return 0;
}
