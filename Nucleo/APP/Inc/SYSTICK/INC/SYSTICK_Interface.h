/*
 * SYSTICK_Interface.h
 *
 *  Created on: May 11, 2023
 *      Author: AhmedMaher
 */

#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_
void SYSICK_VoidEnable(void);

void SYSTICK_voidDelaySec(uint32_t Copy_u32Sec);

void SYSTICK_voidDelayMilleSec(uint32_t Copy_u32Delayms);

void SYSTICK_voidDelayMicroSec(uint32_t Copy_u32Delayms);


#endif /* SYSTICK_INTERFACE_H_ */
