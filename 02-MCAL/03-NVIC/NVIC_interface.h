/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

/*Functions Prototype*/
void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_voidsetPendingFlag(u8 Copy_u8IntNumber);
void MNVIC_voidsetPendingFlag(u8 Copy_u8IntNumber);
u8 MNVIC_u8getActiveFlag(u8 Copy_u8IntNumber);

#endif
