/*
 * Switch.c
 *
 * Created: 2021-10-14 11:57:10 PM
 *  Author: Ahmed Aladdin
 */ 
#include "../MACL/DIO/DIO.h"


void Switchinit(DIO_Port_ID Port, DIO_Pin_ID Pin)
{
		DIO_PinDirection(Port, Pin, Input);
}


