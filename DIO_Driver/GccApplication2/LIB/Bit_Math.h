/*
 * Bit_Math.h
 *
 *  Created on: Oct 14, 2021
 *      Author: Ahmed Aladdin
 */

#ifndef REPO_LIB_BIT_MATH_H_
#define REPO_LIB_BIT_MATH_H_

#define SET_BIT(Port_ID , Pin_ID)  			(Port_ID) |= (1<< (Pin_ID) )
#define ClEAR_BIT(Port_ID , Pin_ID)			(Port_ID) &= !(1<< (Pin_ID) )
#define TOGGLE_BIT(Port_ID , Pin_ID)		(Port_ID) ^= (1<< (Pin_ID) )
#define GET_BIT(Port_ID , Pin_ID)			(((Port_ID) >> (Pin_ID)) & 0x01)

#endif /* REPO_LIB_BIT_MATH_H_ */
