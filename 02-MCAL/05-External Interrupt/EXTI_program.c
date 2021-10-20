/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "STD_Types.h"
#include "BIT_Math.h"
#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "EXTI_private.h"

void EXTI_voidInit(void)
{
#if		EXTILINE == EXTI_LINE0
	SET_Bit(EXTI->IMR, 0);

#elif	EXTILINE == EXTI_LINE1
	SET_Bit(EXTI->IMR, 1);

#elif	EXTILINE == EXTI_LINE2
	SET_Bit(EXTI->IMR, 2);

#else
	#error("Wrong External Interrupt Line")
#endif

#if		EXTI_SENSE_MODE == FALLING_EDGE
	SET_Bit(EXTI->FTSR, EXTI_LINE1);

#elif	EXTI_SENSE_MODE == RISING_EDGE
	SET_Bit(EXTI->RTSR, EXTI_LINE);

#elif	EXTI_SENSE_MODE == ON_CHANGE
	SET_Bit(EXTI->RTSR, EXTI_LINE);
	SET_Bit(EXTI->FTSR, EXTI_LINE1);

#else
	#error("Wrong External Interrupt Line")
#endif
}

void EXTI_voidSetSignalLatch(u8 Copy_u8EXTILine, u8 Copy_u8EXTISenseMode)
{
	switch(Copy_u8EXTISenseMode)
	{
	case RISING_EDGE 	: SET_Bit(EXTI->RTSR, EXTI_LINE); break;
	case FALLING_EDGE 	: SET_Bit(EXTI->FTSR, EXTI_LINE); break;
	case ON_CHANGE 		: SET_Bit(EXTI->RTSR, EXTI_LINE);
						  SET_Bit(EXTI->FTSR, EXTI_LINE); break;
	}
	SET_Bit(EXTI->IMR, Copy_u8EXTILine);
}

void EXTI_voidEnableEXTI(u8 Copy_u8EXTILine)
{
	SET_Bit(EXTI->IMR, Copy_u8EXTILine);
}

void EXTI_voidDisableEXTI(u8 Copy_u8EXTILine)
{
	CLR_Bit(EXTI->IMR, Copy_u8EXTILine);
}

void EXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine)
{
	if(isSET(EXTI->PR, Copy_u8EXTILine))
	{
		if(isSET(EXTI->IMR, Copy_u8EXTILine))
		{
			SET_Bit(EXTI->SWIER, Copy_u8EXTILine);
		}
	}
}

void EXTI_voidSetCallBack(void (*ptr) (void))
{
	EXTI_CallBack[0] = ptr;
}

void EXTI0_IRQHandler(void)
{
	EXTI_CallBack[0]();
	/*Clear Flag*/
	SET_Bit(EXTI -> PR, 0);
}
