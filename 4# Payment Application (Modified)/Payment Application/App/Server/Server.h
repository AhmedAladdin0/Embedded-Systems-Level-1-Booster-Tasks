#ifndef Server_H_
#define Server_H_

#include "../Utils/Defines.h"
#include "../Utils/Typedef.h"
#include "../Card/Card.h"
#include "../Terminal/Terminal.h"


/** server Database **/
ST_accountBalance_t server [serverSize] = {{100.0,"123456789"},{6000.0,"234567891"},\
                                           {3250.25,"567891234"},{1500.12,"456789123"},\
                                           {500.00,"258649173"},{2100.00,"654823719"},\
                                           {0.00,"971362485"},{1.00,"793148625"},\
                                           {10.12,"123123456"},{0.55,"456789321"}};



uint32_t Server_Decision (uint32_t Status);
#endif
