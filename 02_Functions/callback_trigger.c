#include <stdio.h>
#include <stdint.h>

void sistem_test( void (*test_fonksiyonu)(void) );
void sensor_kalibre_et(void);

int main()
{
    sistem_test(sensor_kalibre_et);
    return 0;
}

void sensor_kalibre_et(void)
{
    printf("Worked");
}

void sistem_test( void (*test_fonksiyonu)(void) )
{
    test_fonksiyonu();
}