#include <stdio.h>
#include <stdlib.h>
#define POSICOES 10 //Define quantas posicoes ter� o vetor
int vetor[POSICOES];

//Recebe e valida a ocorr�ncia
void insereOcorrencia(int posicao) {
	int ocorrencias = 0;
	do{
		scanf("%d", &ocorrencias);
		if(ocorrencias >= 0) {
			vetor[posicao] = ocorrencias;
		} else {
			printf("N�mero inv�lido!\n%d: ", posicao);
		}
	} while (ocorrencias < 0);	
}

int main() {
	int i = 0; //for
	int j = 0; //for
	int ascii = 178; //Car�ctere da tabela ASCII pra representar a ocorr�ncia
	
	printf("Quantas vezes ocorreu cada n�mero?\n");
	
	for(i=0; i < POSICOES; i++){
		printf("\n%d: ", i);
		insereOcorrencia(i);
	}
	
	printf("\n\nHISTOGRAMA\n");
	for(i=0; i < POSICOES; i++){
		printf("%d |", i);
		for(j=0; j < vetor[i]; j++){
			printf("%c", ascii);
		};
		printf("\n");
	}

	return 0;	
}
