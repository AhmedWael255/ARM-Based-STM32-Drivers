/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef _RCC_INTERFACE_H
#define _RCC_INTERFACE_H

#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2

void RCC_voidEnableClock(u8 Copy_u8Bus, u8 Copy_u8PerID);
void RCC_voidDisableClock(u8 Copy_u8Bus, u8 Copy_u8PerID);
void RCC_voidInitClock(void);

#endif
