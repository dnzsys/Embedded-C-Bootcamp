#include <stdio.h>
#include <stdint.h>

void gps_oku(void);
void jiro_oku(void);
void basinc_oku(void);

int main()
{
    void (*sensor_dizisi[3])(void) = {gps_oku, jiro_oku, basinc_oku};
    
    for (int i = 0; i < 3; i++)
    {
        (*(sensor_dizisi + i))();
    }
    
    return 0;
}

void gps_oku(void)
{
    printf("gps_oku\n");
}

void jiro_oku(void)
{
    printf("jiro_oku\n");
}

void basinc_oku(void)
{
    printf("basinc_oku\n");
}