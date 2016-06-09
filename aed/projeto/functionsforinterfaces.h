#include <stdio.h>
#include <stdlib.h>
//Exibir o menu na tela
int showMenu(char * txtMenu) {
	int op = 1;
	system("clear");
	FILE *textMenu;
	textMenu = fopen(txtMenu, "r");
	char linha[100];
	while(fgets(linha, 100, textMenu) != NULL) {
		printf("%s", linha);
	}
	fclose(textMenu);
	printf("\t|Opcao:");
	scanf("%d", &op);
	getchar();
	return op;
}

void ShowMsgAlert(char *txtMsg) {
	system("clear");
	FILE *textMsg;
	textMsg = fopen(txtMsg, "r");
	char linha[100];
	while(fgets(linha, 100, textMsg) != NULL) {
		printf("%s", linha);
	}
	fclose(textMsg);
	getchar();
}

void clearBuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF); 
}

void leave(int *mod) {
	system("clear");
   	mod = 0;
}

void back(int *op) {
	system("clear");
   	op = 0;
}
