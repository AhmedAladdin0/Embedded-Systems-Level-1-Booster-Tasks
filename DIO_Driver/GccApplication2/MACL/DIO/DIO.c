/*
 * DIO.c
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */
#include "../../LIB/typedef.h"
#include "DIO_Register.h"
#include "DIO_Type.h"
#include "../../LIB/Bit_Math.h"


void DIO_PortDirection(DIO_Port_ID Port_ID ,DIO_Direction Direction)
{
	if(Output == Direction)
	{
		switch(Port_ID)
		{
			case PORTA: DDRA_Reg = 0xFF ; break;
			case PORTB: DDRB_Reg = 0xFF ; break;
			case PORTC: DDRC_Reg = 0xFF ; break;
			case PORTD: DDRD_Reg = 0xFF ; break;
		}
	}
	else if (Input == Direction)
	{
		switch(Port_ID)
		{
			case PORTA: DDRA_Reg = 0x00 ; break;
			case PORTB: DDRB_Reg = 0x00 ; break;
			case PORTC: DDRC_Reg = 0x00 ; break;
			case PORTD: DDRD_Reg = 0x00 ; break;
		}
	}
}
void DIO_PortValue(DIO_Port_ID Port_ID ,uint8_t Value)
{
	switch(Port_ID)
	{
		case PORTA: PORTA_Reg = Value; break;
		case PORTB: PORTB_Reg = Value; break;
		case PORTC: PORTC_Reg = Value; break;
		case PORTD: PORTD_Reg = Value; break;
	}
}

void DIO_PinDirection(DIO_Port_ID Port_ID,DIO_Pin_ID Pin_ID,DIO_Direction Direction)
{
	if(Port_ID <= PORTD && Pin_ID <= Pin7)
	{
		if(Output == Direction)
		{
			switch(Port_ID)
			{
				case PORTA: SET_BIT(DDRA_Reg, Pin_ID) ; break;
				case PORTB: SET_BIT(DDRB_Reg, Pin_ID) ; break;
				case PORTC: SET_BIT(DDRC_Reg, Pin_ID) ; break;
				case PORTD: SET_BIT(DDRD_Reg, Pin_ID) ; break;
			}
		}
		if(Input == Direction)
		{
			switch(Port_ID)
			{
				case PORTA: ClEAR_BIT(DDRA_Reg, Pin_ID) ; break;
				case PORTB: ClEAR_BIT(DDRB_Reg, Pin_ID) ; break;
				case PORTC: ClEAR_BIT(DDRC_Reg, Pin_ID) ; break;
				case PORTD: ClEAR_BIT(DDRD_Reg, Pin_ID) ; break;
			}
		}
	}
}
void DIO_PinValue(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID, DIO_Value Value)
{
	if(Port_ID <= PORTD && Pin_ID <= Pin7)
	{
		if(Value == HIGH)
		{
			switch(Port_ID)
			{
				case PORTA: SET_BIT(PORTA_Reg, Pin_ID) ; break;
				case PORTB: SET_BIT(PORTB_Reg, Pin_ID) ; break;
				case PORTC: SET_BIT(PORTC_Reg, Pin_ID) ; break;
				case PORTD: SET_BIT(PORTD_Reg, Pin_ID) ; break;

			}
		}
		else if (Value == LOW)
		{
			switch(Port_ID)
			{
				case PORTA: ClEAR_BIT(PORTA_Reg, Pin_ID) ; break;
				case PORTB: ClEAR_BIT(PORTB_Reg, Pin_ID) ; break;
				case PORTC: ClEAR_BIT(PORTC_Reg, Pin_ID) ; break;
				case PORTD: ClEAR_BIT(PORTD_Reg, Pin_ID) ; break;

			}
		}
	}
}
void DIO_PinToggle(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID)
{
	if(Port_ID <= PORTD && Pin_ID <= Pin7)
	{
		switch(Port_ID)
			{
				case PORTA: TOGGLE_BIT(PORTA_Reg, Pin_ID) ; break;
				case PORTB: TOGGLE_BIT(PORTB_Reg, Pin_ID) ; break;
				case PORTC: TOGGLE_BIT(PORTC_Reg, Pin_ID) ; break;
				case PORTD: TOGGLE_BIT(PORTD_Reg, Pin_ID) ; break;
			}
	}
}

DIO_Value GetPinValue(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID)
{
	DIO_Value PinValue;

	if (Port_ID <= PORTD && Pin_ID <= Pin7)
	{
		switch(Port_ID)
		{
			case PORTA:PinValue = GET_BIT(PINA_Reg, Pin_ID) ; break;
			case PORTB:PinValue = GET_BIT(PINB_Reg, Pin_ID) ; break;
			case PORTC:PinValue = GET_BIT(PINC_Reg, Pin_ID) ; break;
			case PORTD:PinValue = GET_BIT(PIND_Reg, Pin_ID) ; break;
		}

	}
	return PinValue;
}
