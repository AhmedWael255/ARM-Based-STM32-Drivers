/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "../04-Systick/STK_Config.h"
#include "../04-Systick/STK_interface.h"
#include "../04-Systick/STK_private.h"
#include "STD_Types.h"
#include "BIT_Math.h"

static void CallBack_Systick(void);

void STK_voidInit(const STK_Configure * STK_ptr)
{
	/*Enable Systick*/
	SET_Bit(STK_CTRL, ENABLE);
	STK_CTRL = ((STK_CTRL & 0x00000008) | (STK_ptr -> clk));
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
