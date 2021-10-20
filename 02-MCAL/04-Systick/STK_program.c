/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "STD_Types.h"
#include "BIT_Math.h"
#include "STK_Config.h"
#include "STK_interface.h"
#include "STK_private.h"


void STK_voidInit()
{
	/*Enable Systick*/
	SET_Bit(STK_CTRL, ENABLE);
	STK_CTRL = ((STK_CTRL & 0x00000008) | STK_CLK);
#ifdef	STK_ENABLE_INTERRUPT
	SET_Bit(STK_CTRL, TICKINT);
#endif
	CLR_Bit(STK_CTRL, COUNTFLAG);
}

void STK_voidSetBusyWait(u32 Copy_u32Val)
{
	STK_Load = Copy_u32Val;
	while(isCLR(STK_CTRL,COUNTFLAG));
}

void STK_voidSetIntervalSingle(u32 Copy_u32Val, void (*ptr_to_func) (void))
{
	STK_Load = Copy_u32Val;
	CallBack_Systick = ptr_to_func;
}

void SysTick_Handler(void)
{
	CallBack_Systick();
}

void STK_voidStopInterval(void)
{
	SET_Bit(STK_CTRL, COUNTFLAG);
}
u32 STK_u32GetElapsedTime(void)
{
	return STK_VAL;
}
u32 STK_u32GetReaminingTime(void)
{
	return (STK_Load - STK_VAL);
}
