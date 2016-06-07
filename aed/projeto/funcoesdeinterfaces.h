//Exibir o menu na tela
int exibirMenu() {
	int op = 1;
	system("clear");
	printf("\t--------------------- LISTA DE INTEIROS -----------------------\n\n\n");
	printf("\t -------------------------------------------------------------\n");
	printf("\t|*Inicializar lista -------------------> Digite 2             |\n");
	printf("\t|*Verificar se a lista esta vazia -----> Digite 3             |\n");
	printf("\t|*Verificar se a lista esta cheia -----> Digite 4             |\n");
	printf("\t|*Verificar o tamanho da lista --------> Digite 5             |\n");
	printf("\t|*Carregar um elemento da lista -------> Digite 6             |\n");
	printf("\t|*Inserir elemento no fim da lista ----> Digite 7             |\n");
	printf("\t|*Inserir elemento na posicao ---------> Digite 8             |\n");
	printf("\t|*Remover elemento do fim da lista ----> Digite 9             |\n");
	printf("\t|*Remover elemento na posicao ---------> Digite 10            |\n");
	printf("\t|*Procurar elemento -------------------> Digite 11            |\n");
	printf("\t|*Exibir elementos da lista -----------> Digite 12            |\n");
	printf("\t|                                                             |\n");
	printf("\t|*Sair --------------------------------> Digite 0             |\n");
	printf("\t|                                                             |\n");
	printf("\t|                   [Tecle para continuar!]                   |\n");
	printf("\t -------------------------------------------------------------\n");
	printf("\t|Opcao:");
	scanf("%d", &op);
	getchar();
	return op;
}
void limparBuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF); 
}
