#include "Terminal.h"

uint32_t Status;
uint32_t Terminal_Interface()
{

	ST_cardData_t cardUser;
	ST_terminalData_t terminal;
	terminal.maxTransAmount = maxTransactionAmount;      /** max Transaction available **/
	printf("Enter The Terminal Data:\n");
	printf("Enter The transaction Amount:\n");
	scanf("%f" , &terminal.transAmount);
	if (terminal.transAmount > terminal.maxTransAmount)      /** check max Transaction **/
	{
		Status = DECLINED;

	}
	else
	{

	}
	uint32_t dataBase;
	if ( (server[dataBase].balance) < (terminal.transAmount) )   /** check actual balance in the account with Transaction Amount  **/
	{
		Status = DECLINED;

	}
	else
	{

	}


	printf("Enter transaction Date:\n");
	scanf("%s" , &terminal.transactionDate);
	printf("Verifying Data from the server...\n");
	if  ((terminal.transactionDate[terminalFirstYearElement]) > (cardUser.cardExpirationDate[cardFirstYearElement]))                /** check terminal date with card date **/
	{
		Status = DECLINED;
	}
	else if ((terminal.transactionDate[terminalFirstYearElement]) == (cardUser.cardExpirationDate[cardFirstYearElement]))
	{
		if ((terminal.transactionDate[terminalSecondYearElement]) > (cardUser.cardExpirationDate[cardSecondYearElement]))
		{
			Status = DECLINED;
		}
	}

	if (((terminal.transactionDate[terminalFirstYearElement] == cardUser.cardExpirationDate[cardFirstYearElement])) && ((terminal.transactionDate[terminalSecondYearElement] == cardUser.cardExpirationDate[cardSecondYearElement])) )
	{
		if((terminal.transactionDate[terminalFirstMonthElement]) > (cardUser.cardExpirationDate[cardFirstMonthElement]))
		{
			Status = DECLINED;
		}
	}
	if (((terminal.transactionDate[terminalFirstYearElement] == cardUser.cardExpirationDate[cardFirstYearElement])) && ((terminal.transactionDate[terminalSecondYearElement ]) == (cardUser.cardExpirationDate[cardSecondYearElement])) && ((terminal.transactionDate[terminalFirstMonthElement]) == (cardUser.cardExpirationDate[cardFirstMonthElement])))
	{
		if((terminal.transactionDate[terminalSecondMonthElement]) > (cardUser.cardExpirationDate[cardSecondMonthElement]))
		{
			Status = DECLINED;
		}
	}
	else
	{

	}
	return(Status);
}
