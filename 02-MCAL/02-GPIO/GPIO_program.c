/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "STD_Types.h"
#include "BIT_Math.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void MGPIO_voidSetPinDirection(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Mode)
{
	switch(copy_u8PORT)
	{
	case GPIOA:
		if(copy_u8PIN <= 7)
		{
			GPIOA_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOA_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOA_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOA_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOB:
		if(copy_u8PIN <= 7)
		{
			GPIOB_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOB_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOB_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOB_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOC:
		if(copy_u8PIN <= 7)
		{
			GPIOC_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOC_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOC_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOC_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOD:
		if(copy_u8PIN <= 7)
		{
			GPIOD_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOD_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOD_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOD_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOE:
		if(copy_u8PIN <= 7)
		{
			GPIOE_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOE_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOE_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOE_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOF:
		if(copy_u8PIN <= 7)
		{
			GPIOF_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOF_CRL |= ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOF_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOF_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	case GPIOG:
		if(copy_u8PIN <= 7)
		{
			GPIOG_CRL &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOG_CRL |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		else if(copy_u8PIN <= 15)
		{
			copy_u8PIN -= 8;
			GPIOG_CRH &= ~((0b1111) << (copy_u8PIN * 4));
			GPIOG_CRH |=  ((copy_u8Mode) << (copy_u8PIN * 4));
		}
		break;

	default: break;
	}

}

void MGPIO_voidSetPinValue(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Value)
{
	switch(copy_u8PORT)
		{
		case GPIOA:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOA_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOA_ODR, copy_u8PIN);
			}
			break;

		case GPIOB:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOB_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOB_ODR, copy_u8PIN);
			}
			break;

		case GPIOC:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOC_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOC_ODR, copy_u8PIN);
			}
			break;

		case GPIOD:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOD_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOD_ODR, copy_u8PIN);
			}
			break;

		case GPIOE:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOE_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOE_ODR, copy_u8PIN);
			}
			break;

		case GPIOF:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOF_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOF_ODR, copy_u8PIN);
			}
			break;

		case GPIOG:
			if(copy_u8Value == High)
			{
				SET_Bit(GPIOG_ODR, copy_u8PIN);
			}
			else if(copy_u8Value == Low)
			{
				CLR_Bit(GPIOG_ODR, copy_u8PIN);
			}
			break;

		default: break;
		}
}

u8 MGPIO_u8GetPinValue(u8 copy_u8PORT, u8 copy_u8PIN)
{
	u8 LOC_u8Result;
	switch(copy_u8PORT)
	{
	case GPIOA:
		LOC_u8Result = GET_Bit(GPIOA_IDR, copy_u8PIN);
		break;

	case GPIOB:
		LOC_u8Result = GET_Bit(GPIOB_IDR, copy_u8PIN);
		break;

	case GPIOC:
		LOC_u8Result = GET_Bit(GPIOC_IDR, copy_u8PIN);
		break;

	case GPIOD:
		LOC_u8Result = GET_Bit(GPIOD_IDR, copy_u8PIN);
		break;

	case GPIOE:
		LOC_u8Result = GET_Bit(GPIOE_IDR, copy_u8PIN);
		break;

	case GPIOF:
		LOC_u8Result = GET_Bit(GPIOF_IDR, copy_u8PIN);
		break;

	case GPIOG:
		LOC_u8Result = GET_Bit(GPIOG_IDR, copy_u8PIN);
		break;

		default: break;
	}
	return LOC_u8Result;
}

