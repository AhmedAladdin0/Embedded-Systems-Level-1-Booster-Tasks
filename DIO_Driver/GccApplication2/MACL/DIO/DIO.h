/*
 * DIO.h
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */
#include "../../LIB/typedef.h"
#include "DIO_Type.h"

#ifndef REPO_MACL_DIO_DIO_H_
#define REPO_MACL_DIO_DIO_H_

void DIO_PortDirection(DIO_Port_ID Port_ID ,DIO_Direction Direction);
void DIO_PortValue(DIO_Port_ID Port_ID ,uint8_t Value);

void DIO_PinDirection(DIO_Port_ID Port_ID,DIO_Pin_ID Pin_ID,DIO_Direction Direction);
void DIO_PinValue(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID, DIO_Value Value);
void DIO_PinToggle(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID);

DIO_Value GetPinValue(DIO_Port_ID Port_ID, DIO_Pin_ID Pin_ID);

#endif /* REPO_MACL_DIO_DIO_H_ */
