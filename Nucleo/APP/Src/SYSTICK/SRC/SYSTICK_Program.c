/*
 * SYSTICK_Program.c
 *
 *  Created on: May 11, 2023
 *      Author: AhmedMaher
 */
#include <stdint.h>
#include "SYSTICK/INC/SYSTICK_Private.h"
#include "BIT_MATH.h"
#include "Std_types/ErrType.h"


#include "Memory_map/STM32F446xx.h"
#include "SYSTICK/INC/SYSTICK_Interface.h"



void SYSICK_VoidEnable(void)
{
	/* CLCK SRC AS AHB/8 */
	SYSTICK->CTRL.BIT.CLKSOURCE=ExternalClck;
	/*DISABLE SYSTEM EXCEPTION */
	SYSTICK->CTRL.BIT.TICKINT= 0 ;

}

void SYSTICK_voidDelaySec(uint32_t Copy_u32Sec)
{
	uint32_t Local_u32Value;
	/*Select ClK Source --> AHB/8 	--> 1000MHZ	*/
	/*1.Program reload value.*/
	Local_u32Value=(Copy_u32Sec*1000000)-1 ;
	SYSTICK->LOAD.Reg = Local_u32Value;
	/*2. Clear current value.*/
	SYSTICK->VALUE.Reg =0;
	/*3. Program Control and Status register*/
	SYSTICK->CTRL.BIT.ENABLE=1;
	/*Poling On CountFlag | Finish Delay*/
	while(SYSTICK->CTRL.BIT.COUNTFLAG==0);
	SYSTICK->CTRL.BIT.COUNTFLAG=0;
}
void SYSTICK_voidDelayMilleSec(uint32_t Copy_u32Delayms)
{
	uint32_t Local_u32Value;
	/*Select ClK Source --> AHB/8 --> 1000MHZ	 */
	/*1.Program reload value.*/
	Local_u32Value=(Copy_u32Delayms*1000)-1;
	SYSTICK->LOAD.Reg = Local_u32Value;
	/*2. Clear current value.*/
	SYSTICK->VALUE.Reg =0;
	/*3. Program Control and Status register*/
	SYSTICK->CTRL.BIT.ENABLE=1;
	/*Poling On CountFlag | Finish Delay*/
	while(SYSTICK->CTRL.BIT.COUNTFLAG==0);
	SYSTICK->CTRL.BIT.COUNTFLAG=0;
}

void SYSTICK_voidDelayMicroSec(uint32_t Copy_u32DelayUS)
{
	uint32_t Local_u32Value;
	/*Select ClK Source --> AHB/8 --> 1000MHZ	*/
	/*1.Program reload value.*/
	Local_u32Value=(Copy_u32DelayUS*1)-1;
	SYSTICK->LOAD.Reg = Local_u32Value;
	/*2. Clear current value.*/
	SYSTICK->VALUE.Reg =0;
	/*3. Program Control and Status register*/
	SYSTICK->CTRL.BIT.ENABLE=1;
	/*Poling On CountFlag | Finish Delay*/
	while(SYSTICK->CTRL.BIT.COUNTFLAG==0);
	SYSTICK->CTRL.BIT.COUNTFLAG=0;

}

