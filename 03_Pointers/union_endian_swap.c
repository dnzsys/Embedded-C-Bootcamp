#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint32_t raw_data;
    uint8_t baytlar[4];
} EndianUnion_u;

int main()
{
    EndianUnion_u paket;
    paket.raw_data = 0xAABBCCDD;
    
    printf("Once : %08X\n", paket.raw_data);
    
    uint8_t *bas_ptr = paket.baytlar;        
    uint8_t *son_ptr = paket.baytlar + 3;      
    
    while (bas_ptr < son_ptr)
    {
        uint8_t temp = *bas_ptr;
        *bas_ptr = *son_ptr;  
        *son_ptr = temp;      
        
        bas_ptr++; 
        son_ptr--; 
    }
    
    printf("Sonra: %08X\n", paket.raw_data);

    return 0;
}