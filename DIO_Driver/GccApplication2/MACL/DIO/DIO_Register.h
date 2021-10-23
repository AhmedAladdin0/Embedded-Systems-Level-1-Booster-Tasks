/*
 * DIO_Rigister.h
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */

#ifndef REPO_MACL_DIO_DIO_RIGISTER_H_
#define REPO_MACL_DIO_DIO_RIGISTER_H_

#define PORTA_Reg 	*((volatile uint8_t*) 0x3B)
#define DDRA_Reg 	*((volatile uint8_t*) 0x3A)
#define PINA_Reg 	*((volatile uint8_t*) 0x39)

#define PORTB_Reg 	*((volatile uint8_t*) 0x38)
#define DDRB_Reg 	*((volatile uint8_t*) 0x37)
#define PINB_Reg 	*((volatile uint8_t*) 0x36)

#define PORTC_Reg 	*((volatile uint8_t*) 0x35)
#define DDRC_Reg 	*((volatile uint8_t*) 0x34)
#define PINC_Reg 	*((volatile uint8_t*) 0x33)

#define PORTD_Reg 	*((volatile uint8_t*) 0x32)
#define DDRD_Reg 	*((volatile uint8_t*) 0x31)
#define PIND_Reg 	*((volatile uint8_t*) 0x30)

#endif /* REPO_MACL_DIO_DIO_RIGISTER_H_ */
