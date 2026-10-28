#include <stdint.h>

#define RCC_AHB1ENR         0x40023830UL
#define GPIOA_BASE_ADDR     0x40020000UL
#define GPIOD_BASE_ADDR     0x40020C00UL

#define GPIO_MODER_OFF      0x00UL
#define GPIO_IDR_OFF        0x10UL
#define GPIO_ODR_OFF        0x14UL

volatile uint32_t *pRCC_AHB1ENR = (volatile uint32_t *)RCC_AHB1ENR;

volatile uint32_t *pGPIOA_MODER = (volatile uint32_t *)(GPIOA_BASE_ADDR + GPIO_MODER_OFF);
volatile uint32_t *pGPIOA_IDR   = (volatile uint32_t *)(GPIOA_BASE_ADDR + GPIO_IDR_OFF);

volatile uint32_t *pGPIOD_MODER = (volatile uint32_t *)(GPIOD_BASE_ADDR + GPIO_MODER_OFF);
volatile uint32_t *pGPIOD_ODR   = (volatile uint32_t *)(GPIOD_BASE_ADDR + GPIO_ODR_OFF);

void delay(volatile uint32_t count)
{
    while(count--);
}

int main(void)
{
    *pRCC_AHB1ENR |= (1UL << 0) | (1UL << 3);

    *pGPIOA_MODER &= ~(3UL << 0);

    *pGPIOD_MODER &= ~(0xFFUL << 24);
    *pGPIOD_MODER |=  (0x55UL << 24);

    uint8_t current_led = 12;

    while(1)
    {
        if (*pGPIOA_IDR & (1UL << 0))
        {
            delay(300000);

            if (*pGPIOA_IDR & (1UL << 0))
            {
                *pGPIOD_ODR ^= (1UL << current_led);

                current_led++;
                if (current_led > 15)
                {
                    current_led = 12;
                }

                while (*pGPIOA_IDR & (1UL << 0));
                delay(300000);
            }
        }
    }

    return 0;
}