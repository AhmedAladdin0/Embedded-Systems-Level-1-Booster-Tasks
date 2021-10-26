#ifndef Defines_H_
#define Defines_H_

#define name 25
#define cardNumber 20
#define cardDate 6
#define terminalData 11
#define databaseAccountNumber 20
#define serverSize 9
#define False 0
#define dataBaseStart 0
#define dataBaseEnd 9
#define checkStart 0
#define accountNumberFirstElement 0
#define accountNumberLastElement 9
#define maxTransactionAmount 5000.00
#define terminalFirstYearElement 8
#define terminalSecondYearElement 9
#define terminalFirstMonthElement 3
#define terminalSecondMonthElement 4
#define cardFirstYearElement 3
#define cardSecondYearElement 4
#define cardFirstMonthElement 0
#define cardSecondMonthElement 1

typedef enum EN_transStat_t           /**enum for terminal Data **/
{
	DECLINED,                          /** 0 **/
	APPROVED                           /** 1 **/
}EN_transStatt_t;
#endif

