#include <stm32f429xx.h>
#include "stm32f429_gpio.h"

void gpio_init (unsigned char port, unsigned char pin, unsigned char mode, unsigned char type, unsigned char speed, unsigned char pull, unsigned char alt_func)
{
	GPIO_TypeDef * base = (GPIO_TypeDef *)(AHB1PERIPH_BASE + (port * 0x400));
	
	RCC->AHB1ENR   |= (0x1UL << port); // clear 
	
	base->MODER   &= ~(MODE_RESET << (pin * 2)); // clear
	base->MODER   |= (unsigned long)mode << (pin * 2); // set
	
	base->OTYPER  &= ~(TYPE_RESET << pin); // clear
	base->OTYPER  |= (unsigned long)type << pin; // set
	
	base->OSPEEDR &= ~(SPEED_RESET << (pin * 2)); // clear
	base->OSPEEDR |= (unsigned long)speed << (pin * 2); // set
	
	base->PUPDR   &= ~(PULL_RESET << (pin * 2)); // reset
	base->PUPDR   |= (unsigned long)pull << (pin * 2); // set
	
	if (pin <= 7)
	{
		base->AFR[0] &= ~(0x0000000F << (pin * 4)); // reset
		base->AFR[0] |= (unsigned long)alt_func << (pin * 4); // set
	}
	else
	{
		base->AFR[1] &= ~(0x0000000F << ((pin - 8) * 4)); // reset
		base->AFR[1] |= (unsigned long)alt_func << ((pin - 8) * 4);
	}
}

