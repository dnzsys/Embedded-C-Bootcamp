#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef struct {
        uint16_t a;
        uint32_t b;
        uint16_t c;
    } KotuStruct;
    
    printf("Size : %d\n", sizeof(KotuStruct));
    
    typedef struct {
        uint32_t b;
        uint16_t a;
        uint16_t c;
    } IyiStruct;
    
    printf("Size : %d", sizeof(IyiStruct));

    return 0;
}
