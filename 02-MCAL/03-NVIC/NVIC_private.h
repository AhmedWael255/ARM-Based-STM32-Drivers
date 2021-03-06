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

#define NVIC_ISER0	(*((volatile u32*) (0xE000E100)))		/*Enable External Interrupt from 0 to 31*/
#define NVIC_ISER1	(*((volatile u32*) (0xE000E104)))		/*Enable External Interrupt from 32 to 59*/

#define NVIC_ICER0	(*((volatile u32*) (0xE000E180)))
#define NVIC_ICER1	(*((volatile u32*) (0xE000E180)))

#define NVIC_ISPR0	(*((volatile u32*) (0xE000E200)))
#define NVIC_ISPR1	(*((volatile u32*) (0xE000E204)))

#define NVIC_ICPR0	(*((volatile u32*) (0xE000E280)))
#define NVIC_ICPR1	(*((volatile u32*) (0xE000E284)))

#define NVIC_IABR0	(*((volatile u32*) (0xE000E300)))
#define NVIC_IABR1	(*((volatile u32*) (0xE000E304)))

#define NVIC_IPR	((volatile u8*) (0xE000E400))		/*Pointer Register : NVIC_IPR[0], NVIC_IPR[1]*/

#define MNVIC_GROUP_4_SUB_0		0x05FA0300
#define MNVIC_GROUP_3_SUB_1		0x05FA0400
#define MNVIC_GROUP_2_SUB_2		0x05FA0500
#define MNVIC_GROUP_1_SUB_3		0x05FA0600
#define MNVIC_GROUP_0_SUB_4		0x05FA0700

#endif
