/*
 * EXTI_private.h
 *
 *  Created on: Oct 12, 2021
 *      Author: medoa
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_



typedef struct
{
	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;

}EXTI_TYPE;

#endif /* 05_EXTERNAL_INTERRUPT_EXTI_PRIVATE_H_ */
