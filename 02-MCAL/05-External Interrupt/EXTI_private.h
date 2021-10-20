/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

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

#define EXTI	((volatile EXTI_TYPE*) 0x40010400)

static void (*EXTI_CallBack[16]) (void);

#endif /* 05_EXTERNAL_INTERRUPT_EXTI_PRIVATE_H_ */
