/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H

/*Options:	RCC_HSE_CRYSTAL
			RCC_HSE_RC
			RCC_HSI
			RCC_PLL 			*/
#define RCC_CLOCK_Type		RCC_HSE_CRYSTAL			//Set as default value

/*Options:  RCC_PLL_IN_HSI_DIV_2
			RCC_PLL_IN_HSE_DIV_2
			RCC_PLL_IN_HSE		*/
			
/*Select only if the PLL options is selected*/			
#if	RCC_CLOCK_Type == RCC_PLL
#define RCC_PLL_INPUT		RCC_PLL_IN_HSE_DIV_2	//Set as default value
#endif

/*Options:	MUL by 2 to 16*/
/*Select only if the PLL options is selected*/			
#if	RCC_CLOCK_Type == RCC_PLL
#define RCC_PLL_MUL_VAL		4						//Set as default value
#endif



#endif
