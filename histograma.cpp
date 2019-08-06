#include <stdio.h>
#include <stdlib.h>
#define POSICOES 10 //Define quantas posicoes terá o vetor
int vetor[POSICOES];

//Recebe e valida a ocorrência
void insereOcorrencia(int posicao) {
	int ocorrencias = 0;
	do{
		scanf("%d", &ocorrencias);
		if(ocorrencias >= 0) {
			vetor[posicao] = ocorrencias;
		} else {
			printf("Número inválido!\n%d: ", posicao);
		}
	} while (ocorrencias < 0);	
}

int main() {
	int i = 0; //for
	int j = 0; //for
	int ascii = 178; //Caráctere da tabela ASCII pra representar a ocorrência
	
	printf("Quantas vezes ocorreu cada número?\n");
	
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
