#include <stdio.h>
#include <stdint.h>

typedef union
{
    float sicaklik;
    uint32_t ham_veri;
} VeriPaketi_u;

int main()
{
    VeriPaketi_u newObject;
    newObject.sicaklik = 25.5;
    
    printf("Sicaklik: %f\n", newObject.sicaklik);
    printf("Ham veri: %x", newObject.ham_veri);

    return 0;
}