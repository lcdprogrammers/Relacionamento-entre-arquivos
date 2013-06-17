#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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

main()
{
	int reg = 0, option = 0;
	
	struct {
		char name[50];
		char address[50];
		int  age;
		char phone[20];
	} customer;
	
	clearScreen();
	reg = appMainMenu();
	
	clearScreen();
	option = appMenu();
	
	if (reg == CUSTOMER) {
		switch (option) {
			case INSERT:
				clearScreen();
				
				printf("CLIENTES - CADASTRO\n======================\n\n");
				
				printf("Nome: ");
				scanf(" %[^\n]s", &customer.name);
				//getchar();
				
				printf("Endereço: ");
				scanf(" %50[^\n]s", &customer.address);
				//getchar();
				
				printf("Idade: ");
				scanf(" %d", &customer.age);
				//getchar();
				
				printf("Telefone: ");
				scanf(" %20[^\n]s", &customer.phone);
				//getchar();
				
				FILE *fp;
				fp = fopen("files/customer.txt", "a+");
				
				char *record, *age;
				sprintf(age, "%d", customer.age);
				
				strcpy(record, "\n");
				strcat(record, "1\t\t\t\t");
				strcat(record, customer.name);
				strcat(record, "\t\t\t\t");
				strcat(record, customer.address);
				strcat(record, "\t\t\t\t");
				strcat(record, age);
				strcat(record, "\t\t\t\t");
				strcat(record, customer.phone);
				
				fprintf(fp, record);
				fclose(fp);
				
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