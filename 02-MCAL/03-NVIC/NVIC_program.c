/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "STD_Types.h"
#include "BIT_Math.h"
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void MNVIC_voidInit()
{
#define SCB_AIRCR	(*((volatile u32*) (0xE000ED0C)))
	SCB_AIRCR =MNVIC_GROUP_SUB_DISTRIBUTION;
}

void MNVIC_voidSetPriority(u8 Copy_u8PeripheralIdx, u8 Copy_u8Priority)
{
	if(Copy_u8PeripheralIdx < 60)
	{
		NVIC_IPR[Copy_u8PeripheralIdx] = Copy_u8Priority;
	}

	else
	{

	}
}

void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	{
		NVIC_ISER0 = (1 << Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		NVIC_ISER1 = (1 << Copy_u8IntNumber);
	}
	else
	{

	}
}

void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	{
		NVIC_ICER0 = (1 << Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		NVIC_ICER1 = (1 << Copy_u8IntNumber);
	}
	else
	{

	}
}

void MNVIC_voidsetPendingFlag(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	{
		NVIC_ISPR0 = (1 << Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		NVIC_ISPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{

	}
}

void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber <= 31)
	{
		NVIC_ICPR0 = (1 << Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		NVIC_ICPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{

	}
}

u8 MNVIC_u8getActiveFlag(u8 Copy_u8IntNumber)
{
	u8 Res;
	if(Copy_u8IntNumber <= 31)
	{
		Res = Get_Bit(NVIC_IABR0, Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber <= 59)
	{
		Copy_u8IntNumber -= 32;
		Res = Get_Bit(NVIC_IABR1, Copy_u8IntNumber);
	}
	else
	{

	}
	return Res;
}
