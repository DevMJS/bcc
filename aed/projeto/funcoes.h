#define TOTALFUNCIONARIOS 100
#define TOTALCLIENTES 1000
#define TOTALPRONTUARIOS 1000000
void inicializarFunc(listafunc *l) {
	l->n = 0;
}
void inicializarCliente(listacliente *l) {
	l->n = 0;
}
void inicializarPront(listapront *l) {
	l->n = 0;
}
/****************************************************/
int vaziaFunc(listafunc *l) {
	return (l->n == 0);
}
int vaziaCliente(listacliente *l) {
	return (l->n == 0);
}
int vaziaPront(listapront *l) {
	return (l->n == 0);
}
/****************************************************/
int cheiaFunc(listafunc *l) {
	return (l->n == TOTALFUNCIONARIOS);
}
int cheiaCliente(listacliente *l) {
	return (l->n == TOTALCLIENTES);
}
int cheiaPront(listapront *l) {
	return (l->n == TOTALPRONTUARIOS);
}
/****************************************************/
int tamanhoFunc(listafunc *l) {
	return l->n;
}int tamanhoCliente(listacliente *l) {
	return l->n;
}
int tamanhoPront(listapront *l) {
	return l->n;
}
/****************************************************/
//Copia para o parâmetro dado, as informações armazenadas 
//na posição pos e retorna 1
//Se a posicção for inválida, retorna 0
int carregarFunc(listafunc *l, int pos, funcionario *dado){
	int sucesso = 0;
	if(pos > 0 && pos < l->n) {
		*dado = l->dados[pos - 1];
		sucesso = 1;
	}
	return sucesso;
}
int carregarCliente(listacliente *l, int pos, cliente *dado){
	int sucesso = 0;
	if(pos > 0 && pos < l->n) {
		*dado = l->dados[pos - 1];
		sucesso = 1;
	}
	return sucesso;
}
int carregarPront(listapront *l, int pos, prontuario *dado){
	int sucesso = 0;
	if(pos > 0 && pos < l->n) {
		*dado = l->dados[pos - 1];
		sucesso = 1;
	}
	return sucesso;
}
/****************************************************/
//Insere o elemento dado no fim da lista e retorna 1
//Caso a lista esteja cheia, retorna 0
int inserirFimFunc(listafunc *l, funcionario dado){
	int sucesso = 0;
	if(l->n < TOTALFUNCIONARIOS) {
		l->dados[l->n] = dado;
		l->n++; //atualiza a quantidade de elementos
		sucesso = 1;
	}
	return sucesso;
}
int inserirFimCliente(listacliente *l, cliente dado){
	int sucesso = 0;
	if(l->n < TOTALCLIENTES) {
		l->dados[l->n] = dado;
		l->n++; //atualiza a quantidade de elementos
		sucesso = 1;
	}
	return sucesso;
}
int inserirFimPront(listapront *l, prontuario dado){
	int sucesso = 0;
	if(l->n < TOTALPRONTUARIOS) {
		l->dados[l->n] = dado;
		l->n++; //atualiza a quantidade de elementos
		sucesso = 1;
	}
	return sucesso;
}
/****************************************************/
//Insere o elemento dado na posição pos e retorna 1
//Caso a lista esteja cheia ou a posição seja inválida, retorna 0
int inserirPosicaoFunc(listafunc *l, funcionario dado, int pos) {
	int sucesso = 0;
	int i;
	if(l->n < TOTALFUNCIONARIOS && pos > 0 && pos <= l->n) {
		for(i = l->n; i > pos; i--) {
			l->dados[i] = l->dados[i - 1];
		}
		l->dados[pos - 1] = dado;
		l->n++;
		sucesso = 1;
	}
	return sucesso;
}
int inserirPosicaoCliente(listacliente *l, cliente dado, int pos) {
	int sucesso = 0;
	int i;
	if(l->n < TOTALCLIENTES && pos > 0 && pos <= l->n) {
		for(i = l->n; i > pos; i--) {
			l->dados[i] = l->dados[i - 1];
		}
		l->dados[pos - 1] = dado;
		l->n++;
		sucesso = 1;
	}
	return sucesso;
}
int inserirPosicaoPront(listapront *l, prontuario dado, int pos) {
	int sucesso = 0;
	int i;
	if(l->n < TOTALPRONTUARIOS && pos > 0 && pos <= l->n) {
		for(i = l->n; i > pos; i--) {
			l->dados[i] = l->dados[i - 1];
		}
		l->dados[pos - 1] = dado;
		l->n++;
		sucesso = 1;
	}
	return sucesso;
}
/****************************************************/
int removerFimFunc(listafunc *l) {
	int sucesso = 0;
	if(l->n > 0) {
		l->n--;
		sucesso = 1;
	}
	return sucesso;
}
int removerFimCliente(listacliente *l) {
	int sucesso = 0;
	if(l->n > 0) {
		l->n--;
		sucesso = 1;
	}
	return sucesso;
}
int removerFimPront(listapront *l) {
	int sucesso = 0;
	if(l->n > 0) {
		l->n--;
		sucesso = 1;
	}
	return sucesso;
}
/****************************************************/
int removerPosicaoFunc(listafunc *l, int pos){
	int sucesso = 0;
	int i;
	if(l->n > 0 && pos > 0 && pos <= l->n) {
		for(i = pos - 1; i <= pos; i++) {
			l->dados[i] = l->dados[i + 1];
		}
		sucesso = 1;
		l->n--;
	} 
	return sucesso;
}
int removerPosicaoCliente(listacliente *l, int pos){
	int sucesso = 0;
	int i;
	if(l->n > 0 && pos > 0 && pos <= l->n) {
		for(i = pos - 1; i <= pos; i++) {
			l->dados[i] = l->dados[i + 1];
		}
		sucesso = 1;
		l->n--;
	} 
	return sucesso;
}
int removerPosicaoPront(listapront *l, int pos){
	int sucesso = 0;
	int i;
	if(l->n > 0 && pos > 0 && pos <= l->n) {
		for(i = pos - 1; i <= pos; i++) {
			l->dados[i] = l->dados[i + 1];
		}
		sucesso = 1;
		l->n--;
	} 
	return sucesso;
}
/****************************************************/
int procurarElementoFunc(listafunc *l, funcionario dado) {
	int resultado = -1;
	int i;
	if(l->n > 0) {
		for(i = 0; i < l->n; i++) {
			int j;
			int igual = 0;
			for(j = 0; j < 11; j++){
				if(l->dados[i].cpf[j] == dado.cpf[j]) {
					//resultado = i + 1;//Não existe posicão zero, pois não se pede o indice da matriz como paramentro, mas a posição do elemento na matriz
					igual++;
					//break;
				}
			}
			if(igual == 12) {
					resultado = i + 1;
					break;
			}
		}
	}
	return resultado;
}
int procurarElementoCliente(listacliente *l, cliente dado) {
	int resultado = -1;
	int i;
	if(l->n > 0) {
		for(i = 0; i < l->n; i++) {
			int j;
			int igual = 0;
			for(j = 0; j < 11; j++){
				if(l->dados[i].cpf[j] == dado.cpf[j]) {
					//resultado = i + 1;//Não existe posicão zero, pois não se pede o indice da matriz como paramentro, mas a posição do elemento na matriz
					igual++;
					//break;
				}
			}
			if(igual == 12) {
					resultado = i + 1;
					break;
			}
		}
	}
	return resultado;
}
int procurarElementoPront(listapront *l, prontuario dado) {
	int resultado = -1;
	int i;
	if(l->n > 0) {
		for(i = 0; i < l->n; i++) {
			int j;
			int igual = 0;
			for(j = 0; j < 11; j++){
				if(l->dados[i].cpf[j] == dado.cpf[j]) {
					//resultado = i + 1;//Não existe posicão zero, pois não se pede o indice da matriz como paramentro, mas a posição do elemento na matriz
					igual++;
					//break;
				}
			}
			if(igual == 12) {
					resultado = i + 1;
					break;
			}
		}
	}
	return resultado;
}
/****************************************************/
void exibirElementosFunc(listafunc *l) {
	int i;
	if(l->n > 0) {
		printf("\t|                     POSICAO | ELEMENTO                      |\n");
		for(i = 0; i < l->n; i++) {
			if(i < 9){
				//printf("\t|                           %d | %d\n", (i + 1), l->dados[i]);
				printf("\t|%-27d | %d\n", (i + 1), l->dados[i].nivelAcesso);
			} else {
				//printf("\t|                          %d | %d\n", (i + 1), l->dados[i]);
				printf("\t|%-27d | %d\n", (i + 1), l->dados[i].nivelAcesso);
			}
		}
	} else {
		printf("\t|           NAO EXITEM ELEMENTOS PARA SEREM EXIBIDOS          |\n");
	}
}
void exibirElementosCliente(listacliente *l) {
	int i;
	if(l->n > 0) {
		printf("\t|                     POSICAO | ELEMENTO                      |\n");
		for(i = 0; i < l->n; i++) {
			if(i < 9){
				printf("\t|                           %d | %d\n", (i + 1), l->dados[i].tipoPlano);
			} else {
				printf("\t|                          %d | %d\n", (i + 1), l->dados[i].tipoPlano);
			}
		}
	} else {
		printf("\t|           NAO EXITEM ELEMENTOS PARA SEREM EXIBIDOS          |\n");
	}
}
void exibirElementosPront(listapront *l) {
	int i;
	if(l->n > 0) {
		printf("\t|                     POSICAO | ELEMENTO                      |\n");
		for(i = 0; i < l->n; i++) {
			if(i < 9){
				printf("\t|                           %d | %d\n", (i + 1), l->dados[i].estadoAtual);
			} else {
				printf("\t|                          %d | %d\n", (i + 1), l->dados[i].estadoAtual);
			}
		}
	} else {
		printf("\t|           NAO EXITEM ELEMENTOS PARA SEREM EXIBIDOS          |\n");
	}
}
