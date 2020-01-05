#include "stm32f4xx.h"
#include "stm32f429_gpio.h"

void fmc_init (void)
{

	// *********************************
	// BASE TIMINGS FOR FMC
	// *********************************
	unsigned long ADDSET  = 0;
	unsigned long ADDHLD  = 1;
	unsigned long DATAST  = 5;
	unsigned long BUSTURN = 0;
	unsigned long CLKDIV  = 1;
	unsigned long DATLAT  = 0;
	unsigned long ACCMOD  = 0;
	
	
	gpio_init (PORT_D,  6, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_UP, ALTF_12); // WAIT
	gpio_init (PORT_B, 13, MODE_OUTPUT, TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_0); // RESET
	gpio_init (PORT_B, 10, MODE_OUTPUT, TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_0); // BACKLIGHT
	
	// HARDWARE FMC 8080 BUS
	gpio_init (PORT_D,  4, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_UP, ALTF_12); // #RD
	gpio_init (PORT_D,  5, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_UP, ALTF_12); // #WR
	gpio_init (PORT_D,  7, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_UP, ALTF_12); // #CS
	gpio_init (PORT_D, 11, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_UP, ALTF_12); // #RS A16
	
	gpio_init (PORT_D, 14, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB0
	gpio_init (PORT_D, 15, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB1
	gpio_init (PORT_D,  0, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB2
	gpio_init (PORT_D,  1, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB3
	gpio_init (PORT_E,  7, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB4
	gpio_init (PORT_E,  8, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB5
	gpio_init (PORT_E,  9, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB6
	gpio_init (PORT_E, 10, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB7
	gpio_init (PORT_E, 11, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB8
	gpio_init (PORT_E, 12, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB9
	gpio_init (PORT_E, 13, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB10
	gpio_init (PORT_E, 14, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB11
	gpio_init (PORT_E, 15, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB12
	gpio_init (PORT_D,  8, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB13
	gpio_init (PORT_D,  9, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB14
	gpio_init (PORT_D, 10, MODE_ALT_F,  TYPE_PUSH_PULL, SPEED_MAX, PULL_NO, ALTF_12); // DB15	

	
	// *********************************
	// ENABLE FMC
	// *********************************
	RCC->AHB3ENR |= RCC_AHB3ENR_FMCEN;
	
	// *********************************
	// CLEAR FMC BCR1 for BANK1
	// *********************************
	//FMC_Bank1->BTCR[0] &= ((unsigned long)~(FMC_BCR1_MBKEN | FMC_BCR1_MUXEN | FMC_BCR1_MTYP | FMC_BCR1_MWID | FMC_BCR1_FACCEN | FMC_BCR1_BURSTEN | FMC_BCR1_WAITPOL | FMC_BCR1_WRAPMOD | FMC_BCR1_WAITCFG | FMC_BCR1_WREN | FMC_BCR1_WAITEN | FMC_BCR1_EXTMOD | FMC_BCR1_ASYNCWAIT | FMC_BCR1_CPSIZE | FMC_BCR1_CBURSTRW | FMC_BCR1_CCLKEN));
	FMC_Bank1->BTCR[0] = 0;
	// *********************************
	// SET FMC BCR1 for BANK1
	// *********************************
	FMC_Bank1->BTCR[0] |= FMC_BCR1_MWID_0;    // 16 bit bus width
	FMC_Bank1->BTCR[0] |= FMC_BCR1_WREN;      // write operation enable
	FMC_Bank1->BTCR[0] |= FMC_BCR1_WAITEN;    // wait enable
	FMC_Bank1->BTCR[0] |= FMC_BCR1_ASYNCWAIT; // enable async wait
	FMC_Bank1->BTCR[0] |= FMC_BCR1_WAITCFG;
	
	//FMC_NORSRAM_BANK1;
	//FMC_DATA_ADDRESS_MUX_DISABLE; // 0 ++
	//FMC_MEMORY_TYPE_SRAM; // 0 ++
	//FMC_NORSRAM_MEM_BUS_WIDTH_16; // 1 ++
	//FMC_BURST_ACCESS_MODE_DISABLE; // 0 ++
	//FMC_WAIT_SIGNAL_POLARITY_LOW; // 0 ++
	//FMC_WRAP_MODE_DISABLE; // 0 ++
	//FMC_WAIT_TIMING_BEFORE_WS; // 0 ++
	//FMC_WRITE_OPERATION_ENABLE; // 1 ++
	//FMC_WAIT_SIGNAL_DISABLE; // 0 ++
	//FMC_EXTENDED_MODE_DISABLE; // 0 ++ 
	//FMC_ASYNCHRONOUS_WAIT_DISABLE; // 0 ++
	//FMC_WRITE_BURST_DISABLE; // 0 ++
	//FMC_CONTINUOUS_CLOCK_SYNC_ONLY; // 0 ++
	//FMC_PAGE_SIZE_NONE; // 0 ++
	
	// *********************************
	// CLEAR FMC BTR1 for BANK1
	// *********************************
	//FMC_Bank1->BTCR[1] &= ((uint32_t)~(FMC_BTR1_ADDSET | FMC_BTR1_ADDHLD | FMC_BTR1_DATAST | FMC_BTR1_BUSTURN | FMC_BTR1_CLKDIV | FMC_BTR1_DATLAT | FMC_BTR1_ACCMOD));
	FMC_Bank1->BTCR[1] = 0;
	// *********************************
	// SET FMC BTR1 for BANK1
	// *********************************
	FMC_Bank1->BTCR[1] |= (ADDSET << 0) | (ADDHLD << 4) | (DATAST << 8) | (BUSTURN << 16) | (CLKDIV << 20) | (DATLAT << 24) | (ACCMOD << 28);
	
	// *********************************
	// ENABLE FMC SRAM BANK1
	// *********************************
	FMC_Bank1->BTCR[0] |= 1;
	
}

