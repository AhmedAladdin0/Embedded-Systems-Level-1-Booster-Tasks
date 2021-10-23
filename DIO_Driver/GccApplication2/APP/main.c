/*
 * main.c
 *
 * Created: 2021-10-14 11:10:59 PM
 * Author : Ahmed Aladdin
 */ 

#include "../MACL/DIO/DIO.h"
#include "../HAL/LED.h"
#include "../HAL/Switch.h"


void main(void)
{
	Switchinit(PORTC, Pin0);	/* Switch Initialized */
	DIO_Value prev_button_state = LOW,button_state, LED_state;
	LED_init(PORTA, Pin0);		/* Led Initialized */
	
	while(1)
	{
		button_state = GetPinValue(PORTC,Pin0);
		if(button_state == HIGH && prev_button_state == LOW)
		{	
			LED_state = GetPinValue(PORTA,Pin0);  /*PortA Pin0 = LED_state = 0 (at first time) */
			if(LED_state == HIGH)
			{
				LedOff(PORTA, Pin0);   
			}
			else
			{
				LedOn(PORTA, Pin0);
			}
			
			prev_button_state = button_state;
		}
		if(button_state == LOW && prev_button_state == HIGH)
		{
			prev_button_state = button_state;
		}
	}
	
}

