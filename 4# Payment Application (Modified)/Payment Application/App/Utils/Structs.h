#ifndef Structs_H_
#define Structs_H_
typedef struct ST_cardData_t    /**struct for Card Data **/
{
	uint8_t cardHolderName[name];
	uint8_t primaryAccountNumber[cardNumber];
	uint8_t cardExpirationDate[cardDate];
}ST_cardData_t;

typedef struct ST_accountBalance_t          /**struct for server Database **/
{
	float balance;
	uint8_t primaryAccountNumber[databaseAccountNumber];
}ST_accountBalance_t;

typedef struct ST_terminalData_t   /**struct for terminal Data **/
{
	float transAmount;
	float maxTransAmount ;
	uint8_t transactionDate[terminalData];
}ST_terminalData_t;
#endif
