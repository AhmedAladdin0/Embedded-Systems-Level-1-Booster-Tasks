#include <stdio.h>
#include<stdlib.h>
#include "typedef.h"

#define name 25
#define cardNumber 20
#define cardDate 6
#define terminalData 11
#define databaseAccountNumber 20
#define serverSize 9
#define false 0
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

typedef struct ST_cardData_t    /**struct for Card Data **/
{
    uint8_t cardHolderName[name];
    uint8_t primaryAccountNumber[cardNumber];
    uint8_t cardExpirationDate[cardDate];
}ST_cardData_t;

typedef struct ST_terminalData_t   /**struct for terminal Data **/
{
     float transAmount;
     float maxTransAmount ;
     uint8_t transactionDate[terminalData];
}ST_terminalData_t;


typedef enum EN_transStat_t           /**enum for terminal Data **/
{
    DECLINED,                          /** 0 **/
    APPROVED                           /** 1 **/
}EN_transStatt_t;

typedef struct ST_accountBalance_t          /**struct for server Database **/
{
    float balance;
    uint8_t primaryAccountNumber[databaseAccountNumber];
}ST_accountBalance_t;

/** server Database **/
ST_accountBalance_t server [serverSize] = {{100.0,"123456789"},{6000.0,"234567891"},\
                                           {3250.25,"567891234"},{1500.12,"456789123"},\
                                           {500.00,"258649173"},{2100.00,"654823719"},\
                                           {0.00,"971362485"},{1.00,"793148625"},\
                                           {10.12,"123123456"},{0.55,"456789321"}};


uint32_t Status;
uint8_t reset;

uint8_t cardData ();


int main()
{

cardData();

if (Status == false)
{
    printf("The Transaction is DECLINED\n");
}
else printf("The Transaction is APPROVED\n");



printf("Do you want to continue (y/n)?\n");
 scanf("%s",&reset);
 if ( (reset == 'y') || (reset == 'Y') )
 {
  system ("cls");
  return main();
 }
 else return(false);

}
/** function to interface with the user **/
uint8_t cardData ()
{
 printf ("Please Enter Card Data\n");
 ST_cardData_t cardUser;
 printf("Enter The Card Holder Name:\n");
 scanf("%s",&cardUser.cardHolderName);
 scanf("%s",cardUser.cardHolderName);

 printf("Enter The Primary Account Number:\n");
 scanf("%s" , &cardUser.primaryAccountNumber);

 printf("Enter The Card Expiry Data:\n");
 scanf("%s" , &cardUser.cardExpirationDate);



   int dataBase;
for (int dataBase=dataBaseStart;dataBase<dataBaseEnd;dataBase++)     /** to search into the database **/
{
  int checked = checkStart;
    for (int index=accountNumberFirstElement;index<accountNumberLastElement;index++)  /** to check if the card number with in the server database or not **/
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

}
