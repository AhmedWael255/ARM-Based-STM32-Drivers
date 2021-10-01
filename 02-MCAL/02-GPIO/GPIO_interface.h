/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/


#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/*******************************
 **** 	Define Registers	****
 ******************************/

#define GPIOA	0
#define GPIOB	1
#define GPIOC	2
#define GPIOD	3
#define GPIOE	4
#define GPIOF	5
#define GPIOG	6

/***************************
 **** 	Define Pins		****
 **************************/

#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7
#define PIN8	8
#define PIN9	9
#define PIN10	10
#define PIN11	11
#define PIN12	12
#define PIN13	13
#define PIN14	14
#define PIN15	15

/***********************************************
 **** 	Define Input as 0 and Output as 1	****
 **********************************************/

enum{Input, Output};

/*******************************************
 **** 	Define Low as 0 and High as 1	****
 ******************************************/

enum{Low, High};

/*******************************************
 **** 	Define Output Type and Speed	****
 ******************************************/

#define OUTPUT_SPEED10MHZ_PP		0001
#define OUTPUT_SPEED10MHZ_OD		0101
#define OUTPUT_SPEED10MHZ_AFPP		1001
#define OUTPUT_SPEED10MHZ_AFOD		1101

#define OUTPUT_SPEED2MHZ_PP			0010
#define OUTPUT_SPEED2MHZ_OD			0110
#define OUTPUT_SPEED2MHZ_AFPP		1010
#define OUTPUT_SPEED2MHZ_AFOD		1110

#define OUTPUT_SPEED50MHZ_PP		0011
#define OUTPUT_SPEED50MHZ_OD		0111
#define OUTPUT_SPEED50MHZ_AFPP		1011
#define OUTPUT_SPEED50MHZ_AFOD		1111

/*Define Type Type*/
#define INPUT_ANALOG				0000
#define INPUT_FLOATING				0100
#define INPUT_PUP_PDOWN				1000

/***********************
 **** 	Functions	****
 **********************/

void MGPIO_voidSetPinDirection(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Mode);
void MGPIO_voidSetPinValue(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Mode);
u8 MGPIO_u8GetPinValue(u8 copy_u8PORT, u8 copy_u8PIN);
void MGPIO_voidLockPin(u8 copy_u8PORT, u8 copy_u8PIN,  u8 copy_u8Value);



#endif
