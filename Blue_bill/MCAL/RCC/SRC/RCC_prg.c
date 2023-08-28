
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "STM32F103Cx.h"
#include "RCC_prv.h"
#include "RCC_int.h"


void RCC_AHBEnableCLK(PeripheralAHB_t peripheral)
{
	SET_BIT(RCC->AHBENR,peripheral);
}
void RCC_AHBDisableCLK(PeripheralAHB_t peripheral)
{
	CLEAR_BIT(RCC->AHBENR,peripheral);

}

void RCC_APB1EnableCLK(PeripheralAPB1_t peripheral)
{
	SET_BIT(RCC->APB1ENR,peripheral);

}
void RCC_APB1DisableCLK(PeripheralAPB1_t peripheral)
{
	CLEAR_BIT(RCC->APB1ENR,peripheral);

}

void RCC_APB2EnableCLK(PeripheralAPB2_t peripheral)
{
	SET_BIT(RCC->APB2ENR,peripheral);

}
void RCC_APB2DisableCLK(PeripheralAPB2_t peripheral)
{
	CLEAR_BIT(RCC->APB2ENR,peripheral);

}

