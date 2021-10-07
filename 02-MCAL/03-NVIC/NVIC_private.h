/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

/***********************************
 **** 	NVIC Register Address	****
 **********************************/

#define NVIC_BASE_ADDRESS	0xE000E100

#define NVIC_ISER0	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x000)))		/*Enable External Interrupt from 0 to 31*/
#define NVIC_ISER1	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x004)))		/*Enable External Interrupt from 32 to 59*/

#define NVIC_ICER0	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x080)))
#define NVIC_ICER1	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x084)))

#define NVIC_ISPR0	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x200)))
#define NVIC_ISPR1	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x204)))

#define NVIC_ICPR0	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x280)))
#define NVIC_ICPR1	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x284)))

#define NVIC_IABR0	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x300)))
#define NVIC_IABR1	(*((volatile u32*) (NVIC_BASE_ADDRESS + 0x304)))

#endif
