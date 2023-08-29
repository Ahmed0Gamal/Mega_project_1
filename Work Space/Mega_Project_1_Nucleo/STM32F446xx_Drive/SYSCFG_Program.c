#include "ErrType.h"
#include <stdint.h>
#include "BIT_MATH.h"
#include <stdlib.h>
#include <stdio.h>

#include "STM32F446xx.h"
#include "SYSCFG_Private.h"
#include "SYSCFG_Config.h"
#include "SYSCFG_Interface.h"


/**
 * @brief   SYSCFG_VoidSetEXTIPORT For External Interrupt Configuration Register
 * @pre
 * @post
 * @param 	EXTI_LINE_NUMBER
 * @param 	GPIO_PORT
 * @return  LocalErrorStatue
 */
uint8_t SYSCFG_VoidSetEXTIPORT(SYSCFG_LINE_E SYSCFG_LINE_NUMBER , SYSCFG_PORT_E GPIO_PORT)
{
	uint8_t LocalErrorStatue = OK ;

	/*Enable external interrupt configuration register*/
	if(SYSCFG_LINE_NUMBER < SYSCFG_UNVALID && GPIO_PORT < SYSCFG_INVALIED_PORT)
	{
		uint8_t LocalBitNum=((SYSCFG_LINE_NUMBER % EXTI_PIN_ACCESS_BITS)*EXTI_PIN_ACCESS_BITS);
		uint8_t LocalRegNum=(SYSCFG_LINE_NUMBER/EXTI_PIN_ACCESS_BITS);

		(SYSCFG->SYSCFG_EXTICR[LocalRegNum] ) &= (~(SYSCFG_MASK)<< LocalBitNum) ;
		(SYSCFG->SYSCFG_EXTICR[LocalRegNum] ) |= GPIO_PORT<< LocalBitNum ;
	}
	else
	{
		LocalErrorStatue = NOK;
	}


	return LocalErrorStatue ;
}
