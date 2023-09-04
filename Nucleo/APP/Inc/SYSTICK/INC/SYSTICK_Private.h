/*
 * SYSTICK_Config.h
 *
 *  Created on: May 11, 2023
 *      Author: AhmedMaher
 */

#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_



#define LOADVALUE				1000


typedef enum
{
	ExternalClck,	/*	AHB/8	 */
	Processor_Clck	/*	AHB		 */

}CLCK_SRC_E;

#endif /* SYSTICK_PRIVATE_H_ */
