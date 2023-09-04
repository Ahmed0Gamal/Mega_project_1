/*
 * SCB_Program.c
 *
 *  Created on: Jul 7, 2023
 *      Author: AhmedMaher
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "Std_types/ErrType.h"
#include "Memory_map/STM32F446xx.h"
#include "SCB/inc/SCB_Private.h"
#include "SCB/inc/SCB_Interface.h"



/**
 * @brief : Function To Set Group Priority
 * @pre :
 * @post :
 * @param   GroupPriority
 * @return: LocalErrorStatus
 */
uint8_t SCB_U8SetPriorityGroup(PRIORTY_E GroupPriority)
{

	uint8_t LocalErrorState = OK;

	SCB_AIRCR=GroupPriority;


	return LocalErrorState ;

}

