#include "../Utils/Defines.h"
uint32_t Status;
uint8_t cardData()
{
	ST_cardData_t cardUser;
	printf ("Please Enter Card Data\n");
	printf("Enter The Card Holder Name:\n");
	scanf("%s",&cardUser.cardHolderName);
	scanf("%s",cardUser.cardHolderName);

	printf("Enter The Primary Account Number:\n");
	scanf("%s" , &cardUser.primaryAccountNumber);

	printf("Enter The Card Expiry Data:\n");
	scanf("%s" , &cardUser.cardExpirationDate);



	uint32_t dataBase;
	for (uint32_t dataBase=dataBaseStart;dataBase<dataBaseEnd;dataBase++)     /** to search into the database **/
	{
		uint32_t checked = checkStart;
		for (uint32_t index=accountNumberFirstElement;index<accountNumberLastElement;index++)  /** to check if the card number with in the server database or not **/
		{
			if ( (cardUser.primaryAccountNumber[index]) == (server[dataBase].primaryAccountNumber[index]) )
			{
				checked++;
			}
			else
			{
				continue;
			}
		}
		if (checked == accountNumberLastElement)
		{
			Status = APPROVED;
			break;
		}
		else (Status = DECLINED);
	}
}
