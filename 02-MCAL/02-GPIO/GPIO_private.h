/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/* Register Definitions */

/***********************************
 **** 	PORTA Register Address	****
 **********************************/
#define GPIOA_BASE_ADDRESS	0x40010800
#define GPIOA_CRL	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x00)))
#define GPIOA_CRH	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x04)))
#define GPIOA_IDR	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x08)))
#define GPIOA_ODR	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x0C)))
#define GPIOA_BSSR	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x10)))
#define GPIOA_BRR	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x14)))
#define GPIOA_LCKR	(*((volatile u32*) (GPIOA_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTB Register Address	****
 **********************************/
#define GPIOB_BASE_ADDRESS	0x40010C00
#define GPIOB_CRL	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x00)))
#define GPIOB_CRH	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x04)))
#define GPIOB_IDR	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x08)))
#define GPIOB_ODR	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x0C)))
#define GPIOB_BSSR	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x10)))
#define GPIOB_BRR	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x14)))
#define GPIOB_LCKR	(*((volatile u32*) (GPIOB_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTC Register Address	****
 **********************************/
#define GPIOC_BASE_ADDRESS	0x40011000
#define GPIOC_CRL	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x00)))
#define GPIOC_CRH	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x04)))
#define GPIOC_IDR	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x08)))
#define GPIOC_ODR	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x0C)))
#define GPIOC_BSSR	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x10)))
#define GPIOC_BRR	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x14)))
#define GPIOC_LCKR	(*((volatile u32*) (GPIOC_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTD Register Address	****
 **********************************/
#define GPIOD_BASE_ADDRESS	0x40011400
#define GPIOD_CRL	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x00)))
#define GPIOD_CRH	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x04)))
#define GPIOD_IDR	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x08)))
#define GPIOD_ODR	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x0C)))
#define GPIOD_BSSR	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x10)))
#define GPIOD_BRR	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x14)))
#define GPIOD_LCKR	(*((volatile u32*) (GPIOD_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTE Register Address	****
 **********************************/
#define GPIOE_BASE_ADDRESS	0x40011800
#define GPIOE_CRL	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x00)))
#define GPIOE_CRH	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x04)))
#define GPIOE_IDR	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x08)))
#define GPIOE_ODR	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x0C)))
#define GPIOE_BSSR	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x10)))
#define GPIOE_BRR	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x14)))
#define GPIOE_LCKR	(*((volatile u32*) (GPIOE_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTF Register Address	****
 **********************************/
#define GPIOF_BASE_ADDRESS	0x40011C00
#define GPIOF_CRL	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x00)))
#define GPIOF_CRH	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x04)))
#define GPIOF_IDR	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x08)))
#define GPIOF_ODR	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x0C)))
#define GPIOF_BSSR	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x10)))
#define GPIOF_BRR	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x14)))
#define GPIOF_LCKR	(*((volatile u32*) (GPIOF_BASE_ADDRESS + 0x18)))

/***********************************
 **** 	PORTG Register Address	****
 **********************************/
#define GPIOG_BASE_ADDRESS	0x40012000
#define GPIOG_CRL	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x00)))
#define GPIOG_CRH	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x04)))
#define GPIOG_IDR	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x08)))
#define GPIOG_ODR	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x0C)))
#define GPIOG_BSSR	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x10)))
#define GPIOG_BRR	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x14)))
#define GPIOG_LCKR	(*((volatile u32*) (GPIOG_BASE_ADDRESS + 0x18)))

#endif
