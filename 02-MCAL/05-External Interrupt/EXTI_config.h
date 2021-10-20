/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_

/* EXTILINE0
 * EXTILINE1
 * EXTILINE2
 * .
 * .
 * EXTILINE15*/
#define EXTI_LINE			EXTI_LINE0

/*FALLING_EDGE
 * RISING_EDGE
 * ON_CHANGE*/
#define EXTI_SENSE_MODE		FALLING_EDGE

#endif /* 05_EXTERNAL_INTERRUPT_EXTI_CONFIG_H_ */
