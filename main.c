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
	
	printf("MENU\n=============\n\n");
	printf("( 1 ) - Clientes.\n");
	printf("( 2 ) - Serviços.\n");
	printf("( 3 ) - Consultas.\n\n");
	
	printf("Opção: ");
	scanf("%d", &option);
	
	switch (option) {
		case 1: appPrintf("Clientes"); break;
		case 2: appPrintf("Serviços"); break;
		default: appPrintf("Consultas");
	}
}