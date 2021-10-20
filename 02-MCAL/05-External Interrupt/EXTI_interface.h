/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

void EXTI_voidInit(void);
void EXTI_voidSetSignalLatch(u8 Copy_u8EXTILine, u8 Copy_u8EXTISenseMode);
void EXTI_voidEnableEXTI(u8 Copy_u8EXTILine);
void EXTI_voidDisableEXTI(u8 Copy_u8EXTILine);
void EXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine);
void EXTI_voidSetCallBack(void (*ptr) (void));

#define FALLING_EDGE	1
#define RISING_EDGE		3
#define ON_CHANGE		5

#define EXTI_LINE0		0
#define EXTI_LINE1		1
#define EXTI_LINE2		2

#endif /* 05_EXTERNAL_INTERRUPT_EXTI_INTERFACE_H_ */
