/*
 * DIO_Type.h
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */

#ifndef REPO_MACL_DIO_DIO_TYPE_H_
#define REPO_MACL_DIO_DIO_TYPE_H_

typedef enum {
	Input,
	Output
}DIO_Direction;

typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD
}DIO_Port_ID;

typedef enum {
	Pin0,
	Pin1,
	Pin2,
	Pin3,
	Pin4,
	Pin5,
	Pin6,
	Pin7
}DIO_Pin_ID;

typedef enum {
	LOW,
	HIGH
}DIO_Value;



#endif /* REPO_MACL_DIO_DIO_TYPE_H_ */
