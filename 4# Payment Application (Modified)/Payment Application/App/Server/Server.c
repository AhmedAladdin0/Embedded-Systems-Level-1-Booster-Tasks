
#include "Server.h"


uint32_t Server_Decision (uint32_t Status)
{
	if (Status == False)
	{
		printf("The Transaction is DECLINED\n");
	}
	else printf("The Transaction is APPROVED\n");
}
