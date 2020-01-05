#ifndef _STM32F429_GPIO_H_
#define _STM32F429_GPIO_H_

#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3
#define PORT_E 4
#define PORT_F 5
#define PORT_G 6
#define PORT_H 7
#define PORT_I 8

#define ALTF_0  0x0
#define ALTF_1  0x1
#define ALTF_2  0x2
#define ALTF_3  0x3
#define ALTF_4  0x4
#define ALTF_5  0x5
#define ALTF_6  0x6
#define ALTF_7  0x7
#define ALTF_8  0x8
#define ALTF_9  0x9
#define ALTF_10 0xA
#define ALTF_11 0xB
#define ALTF_12 0xC
#define ALTF_13 0xD
#define ALTF_14 0xE
#define ALTF_15 0xF


#define MODE_INPUT  (0x0UL)
#define MODE_OUTPUT (0x1UL)
#define MODE_ALT_F  (0x2UL)
#define MODE_ANALOG (0x3UL)
#define MODE_RESET  (0x3UL)

#define TYPE_PUSH_PULL  (0x0UL)
#define TYPE_OPEN_DRAIN (0x1UL)
#define TYPE_RESET      (0x1UL)


#define SPEED_LOW   (0x0UL)
#define SPEED_MED   (0x1UL)
#define SPEED_HIGH  (0x2UL)
#define SPEED_MAX   (0x3UL)
#define SPEED_RESET (0x3UL)


#define PULL_NO    (0x0UL)
#define PULL_UP    (0x1UL)
#define PULL_DOWN  (0x2UL)
#define PULL_RESET (0x3UL)

void gpio_init (unsigned char port, unsigned char pin, unsigned char mode, unsigned char type, unsigned char speed, unsigned char pull, unsigned char alt_func);
#endif
