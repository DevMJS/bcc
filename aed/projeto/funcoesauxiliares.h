//Retorna um se as strings forem iguais
int compararStrings(char *string1, char *string2, int nElementos) {
	int resultado = 0;	
	int i;
	int nIguais = 0;
	for(i = 0; i < nElementos; i++){
		if(string1[i] == string2[i]) {
			nIguais++;
		}
	}
	if(nIguais == nElementos) {
		resultado = 1;
	}
	return resultado;
}
/****************************************************/

