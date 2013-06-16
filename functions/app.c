// Escrever na tela sempre com um espaçamento antes e depois da linha.
void appPrintf(char *str)
{
	printf("\n%s\n\n", str);
}

void clearScreen()
{
	system("clear");
}
 
int appMainMenu()
{
	int option = 0;
	
	printf("MENU PRINCIPAL\n=============\n\n");
	printf("1) - Clientes.\n");
	printf("2) - Serviços.\n");
	printf("3) - Consultas.\n\n");
	
	printf("Opção: ");
	scanf("%d", &option);
	
	return option;
}

int appMenu()
{
	int option = 0;
	
	printf("MENU\n=============\n\n");
	printf("1) Cadastrar.\n");
	printf("2) Editar.\n");
	printf("3) Excluir.\n");
	printf("4) Consultar.\n");
	printf("5) Listar todos.\n\n");
	
	printf("Opção: ");
	scanf("%d", &option);
	
	return option;
}