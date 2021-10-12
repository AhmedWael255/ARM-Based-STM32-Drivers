/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef STK_INTERFACE_H_
#define STK_INTERFACE_H_

void STK_voidInit(const STK_Configure * STK_ptr);
void STK_voidStopInterval(void);
u32 STK_u32GetElapsedTime(void);
u32 STK_u32GetReaminingTime(void);
void STK_voidSetIntervalSingle(u32 Copy_u32Val, void (*ptr_to_func) (void));
void STK_voidSetIntervalSingle(u32 Copy_u32Val, void (*ptr_to_func) (void));
void STK_voidSetBusyWait(u32 Copy_u32Val);


#endif /* 02_MCAL_SYSTICK_STK_INTERFACE_H_ */
