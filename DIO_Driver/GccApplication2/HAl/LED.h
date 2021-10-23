/*
 * LED.h
 *
 * Created: 2021-10-15 12:40:54 AM
 *  Author: Ahmed Aladdin
 */ 


#ifndef LED_H_
#define LED_H_

void LED_init(DIO_Port_ID PORT, DIO_Pin_ID PIN);
void LedOn(DIO_Port_ID PORT, DIO_Pin_ID PIN);
void LedOff(DIO_Port_ID PORT, DIO_Pin_ID PIN);

#endif /* LED_H_ */