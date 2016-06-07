#include <stdio.h>
#include <stdlib.h>
#include "estruturaseconstantes.h"
#include "funcoes.h"

int main(int argc, char* argv[]) {
	int opcao = 1;
	listafunc matriz;
	funcionario elemento;
	int posicao;
	
	while(opcao != 0) {
		switch(opcao) {
			case 1:
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
				scanf("%d", &opcao);
				getchar();
				break;
			case 2:
				inicializarFunc(&matriz);
				system("clear");
				printf("\n\n\t|                     Lista inicializada!                     |");
				opcao = 1;
				getchar();
				break;
	
			case 3:
				system("clear");
				if(vaziaFunc(&matriz)) {
					printf("\n\n\t|                         Lista vazia!                        |");
				} else {
					printf("\n\n\t|                   A lista nao esta vazia!                   |");
				}
				opcao = 1;
				getchar();
				break;
			case 4:
				system("clear");
				if(cheiaFunc(&matriz)) {
					printf("\n\n\t|                         Lista cheia!                        |");
				} else {
					printf("\n\n\t|                   A lista nao esta cheia!                   |");
				}
					opcao = 1;
				getchar();
				break;
			case 5:
				system("clear");
				printf("\n\n\t|                         Tamanho = %d                        |", tamanhoFunc(&matriz));
				opcao = 1;
				getchar();
				break;
			case 6:
				system("clear");
				printf("\n\n\t|     Selecione a posicao do elemento para carregar: ");
				scanf("%d", &posicao);
				getchar();
				if(carregarFunc(&matriz, posicao, &elemento)) {
					printf("\n\n\t|                  O elemento carregado e: %s.                |", elemento.nome);
				} else {
					printf("\n\n\t|                     Posicao invalida!                       |");
					printf("\n\t|   A lista esta vazia ou nao entrou com valores de 1 a 50.   |");
					printf("\n\t|    Confira o tamanho da lista antes de tentar esta opcao!   |");
				}
				opcao = 1;
				getchar();
				break;
			case 7:
				system("clear");
				printf("\n\n\t|     Informe o elemento que sera inserido no fim da lista: ");
				scanf("%c", &elemento.cpf);
				getchar();
				if(inserirFimFunc(&matriz, elemento)) {
					printf("\n\n\t|                     Elemento inserido!                      |");
				} else {
					printf("\n\n\t|                        Lista cheia!                         |");
				}
				opcao = 1;
				getchar();
				break;
			case 8:
				system("clear");
				printf("\n\n\t|     Informe o elemento a ser inserido: ");
				scanf("%d", &elemento.cpf);
				getchar();
				printf("\t|     Informe a posicao em que o elemento sera inserido: ");
				scanf("%d", &posicao);
				getchar();
				if(posicao == 1 && tamanhoFunc(&matriz) == 0) {
					inserirFimFunc(&matriz, elemento);
					printf("\n\n\t|                     Elemento inserido!                      |");
				} else {
					if(inserirPosicaoFunc(&matriz, elemento, posicao)) {
						printf("\n\n\t|                     Elemento inserido!                      |");
					} else {
						printf("\n\n\n\n\n\n\t|  Lista cheia ou nao esta sendo incrementada sequecialmente! |");
						printf("\n\t|    Confira o tamanho da lista antes de tentar esta opcao!   |");
					}
				}
				opcao = 1;
				getchar();
				break;
			case 9:
				system("clear");
				if(removerFimFunc(&matriz)) {
					printf("\n\n\t|                     Elemento removido!                      |");
				} else {
					printf("\n\n\t|                     A lista esta vazia!                     |");
				}
				opcao = 1;
				getchar();
				break;
			case 10:
				system("clear");
				printf("\n\n\t|     Informe a posicao do elemento a ser removido: ");
				scanf("%d", &posicao);
				getchar();
				if(removerPosicaoFunc(&matriz, posicao)) {
					printf("\n\n\t|                     Elemento removido!                      |");
				} else {
					printf("\n\n\t|Lista esta vazia ou tentou remover de posicoes inexistentes! |");
					printf("\n\t|    Confira o tamanho da lista antes de tentar esta opcao!   |");
				}
				opcao = 1;
				getchar();
				break;
			case 11:
				system("clear");
				printf("\n\n\t|     Informe o elemento a ser encontrado: ");
				scanf("%d", &elemento.cpf);
				getchar();
				if(procurarElementoFunc(&matriz, elemento) == -1) {
					printf("\n\n\t|                   Elemento nao encontrado!                  |");
				} else {
					printf("\n\n\t|               O elemento esta na posicao:%d            |", procurarElementoFunc(&matriz, elemento));
				}
				opcao = 1;
				getchar();
				break;
			case 12:
				system("clear");
				exibirElementosFunc(&matriz);
				opcao = 1;
				getchar();
				break;
			default:
				system("clear");
				printf("\n\n\t|                       Opcao invalida!                       |");
				opcao = 1;
				getchar();
				break;
		}
	}
	system("clear");
	return 0;
}
