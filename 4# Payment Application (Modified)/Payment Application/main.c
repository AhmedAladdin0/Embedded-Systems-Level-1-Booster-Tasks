#include <stdio.h>
#include<stdlib.h>
#include "App/Utils/Defines.h"
#include "App/Utils/Typedef.h"
#include "App/Utils/Structs.h"
#include "App/Card/Card.h"
#include "App/Terminal/Terminal.h"
#include "App/Terminal/Terminal.c"
#include "App/Server/Server.h"
#include "App/Server/Server.c"



uint8_t reset;


int main()
{
   cardData();
   Terminal_Interface();
   Server_Decision(Status);

	printf("Do you want to continue (y/n)?\n");
	scanf("%s",&reset);
	if ( (reset == 'y') || (reset == 'Y') )
	{
		system ("cls");
		return main();
	}
	else return(False);
}
