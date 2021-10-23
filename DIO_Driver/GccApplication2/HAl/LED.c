/*
 * LED.c
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */
#include "../MACL/DIO/DIO.h"

void LED_init(DIO_Port_ID PORT, DIO_Pin_ID PIN)
{
	DIO_PinDirection(PORT ,PIN, Output);
}


void LedOn(DIO_Port_ID PORT, DIO_Pin_ID PIN)
{
	
	DIO_PinValue(PORT, PIN, HIGH);
}

void LedOff(DIO_Port_ID PORT, DIO_Pin_ID PIN)
{
	
	DIO_PinValue(PORT, PIN, LOW);
}




