#include <stdio.h>
#include <stdlib.h>

#include "headers/app.h"
#include "headers/customer.h"
#include "headers/service.h"
#include "headers/customer_service.h"

#define CUSTOMER     1
#define SERVICE      2
#define CONSULTATION 3
#define INSERT       1
#define EDIT         2
#define DELETE       3
#define SELECT       4
#define LIST         5

int main()
{
	int reg = 0, option = 0;
	
	struct {
		char name[50];
		char address[50];
		int  age;
		char phone[10];
	} customer;
	
	clearScreen();
	reg = appMainMenu();
	
	clearScreen();
	option = appMenu();
	
	if (reg == CUSTOMER) {
		switch (option) {
			case INSERT:
				appPrintf("INSERIR CLIENTE");
				break;
			case EDIT:
				appPrintf("EDITAR CLIENTE");
				break;
			case DELETE:
				appPrintf("APAGAR CLIENTE");
				break;
			case SELECT:
				appPrintf("SELECIONAR UM CLIENTE");
				break;
			default:
				appPrintf("LISTAR TODOS");
		}
	}
	
}