#include <stdio.h>
#include <stdlib.h>
#include "mainfunctions/functionsaux.h"

int main(int argc, char *argv[]) {
	system("clear");
	char local[] = "textforinterfaces/menumain.txt";
	FILE *textMenu;
	textMenu = fopen(local, "r");
	char linha[100];
	while(fgets(linha, 100, textMenu)!= NULL) {
		printf("%s", linha);
	}
	fclose(textMenu);
	printf("%s - %s", __DATE__ , __TIME__);
	getchar();
	system("clear");
}
