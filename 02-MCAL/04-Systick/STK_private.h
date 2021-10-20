/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef STK_PRIVATE_H_
#define STK_PRIVATE_H_

/***************************************
 **** 	Systick Register Address	****
 **************************************/

#define STK_BASE_ADDRESS	0xE000E010
#define STK_CTRL	(*((volatile u32*) (STK_BASE_ADDRESS + 0x00)))
#define STK_Load	(*((volatile u32*) (STK_BASE_ADDRESS + 0x04)))
#define STK_VAL		(*((volatile u32*) (STK_BASE_ADDRESS + 0x08)))
#define STK_CALIB	(*((volatile u32*) (STK_BASE_ADDRESS + 0x0C)))

static void (*CallBack_Systick) (void);

#endif
