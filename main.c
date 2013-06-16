#include <stdio.h>
#include <stdlib.h>

#include "headers/app.h"
#include "headers/customer.h"
#include "headers/service.h"
#include "headers/customer_service.h"

int main()
{
	int option = 0;
	
	system("clear");
	
	option = appMainMenu();
	
	switch (option) {
		case 1:  appPrintf("Clientes");  break;
		case 2:  appPrintf("Serviços");  break;
		default: appPrintf("Consultas");
	}
}