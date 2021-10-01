/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "STD_Types.h"
#include "BIT_Math.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidEnableClock(u8 Copy_u8Bus, u8 Copy_u8PerID)
{
    if(Copy_u8PerID <= 31)
    {
        switch(Copy_u8Bus)
        {
            case RCC_AHB  : SET_Bit(RCC_AHBENR , Copy_u8PerID); break;
            case RCC_APB1 : SET_Bit(RCC_APB1ENR, Copy_u8PerID); break;
            case RCC_APB2 : SET_Bit(RCC_APB2ENR, Copy_u8PerID); break;
            default       : return; 			   				break;
        }
    }
    else
    {
        return;
    }
}

void RCC_voidDisableClock(u8 Copy_u8Bus, u8 Copy_u8PerID)
{
    if(Copy_u8PerID <= 31)
    {
        switch(Copy_u8Bus)
        {
            case RCC_AHB  : CLR_Bit(RCC_AHBENR , Copy_u8PerID); break;
            case RCC_APB1 : CLR_Bit(RCC_APB1ENR, Copy_u8PerID); break;
            case RCC_APB2 : CLR_Bit(RCC_APB2ENR, Copy_u8PerID); break;
            default       : return;				 			    break;
        }
    }
    else
    {
        return;
    }
}

void RCC_voidIniteClock(void)
{
	 #if 	RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		RCC_CR   = 0x00010000;	/*Enable HSE with no bypass*/
		RCC_CFGR = 0x00000001;
	 #elif  RCC_CLOCK_Type == RCC_HSE_RC
		RCC_CR = 0x00500000;	/*Enable HSE with bypass*/
		RCC_CFGR = 0x00000001;
	 #elif  RCC_CLOCK_Type == RCC_HSI
		RCC_CR   = 0x00000081;	/*Enable HSI*/
		RCC_CFGR = 0x00000000;
	 #elif  RCC_CLOCK_Type == RCC_PLL
		#if RCC_PLL_INPUT = RCC_PLL_IN_HSI_DIV_2
			RCC_CFGR = 0x05 ;
		#elif RCC_PLL_INPUT = RCC_PLL_IN_HSE_DIV_2
		
		#elif RCC_PLL_INPUT = RCC_PLL_IN_DIV_2
		RCC_CR = 0x01000000;	/*Enable PLL*/
	 #else
		#error("You chosed Wrong Clock")
	 #endif	 
}
