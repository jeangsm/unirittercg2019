#include <stdio.h>
#include <stdlib.h>
#define POSICOES 10
int vetor[POSICOES];

void insereOcorrencia(int posicao) {
	int numero = 0;
	do{
		scanf("%d", &numero);
		if(numero >= 0) {
			vetor[posicao] = numero;
		} else {
			printf("Número inválido!\n%d: ", posicao);
		}
	} while (numero < 0);	
}

int main() {
	int i = 0;
	int j = 0;
	int ascii = 178;
	printf("Quantas vezes ocorreu cada número?\n");
	for(i=0; i < POSICOES; i++){
		printf("\n%d: ", i);
		insereOcorrencia(i);
	}
	printf("\n\nHISTOGRAMA DE %d POSICOES\n", POSICOES);
	for(i=0; i < POSICOES; i++){
		printf("%d |", i);
		for(j=0; j < vetor[i]; j++){
			printf("%c", ascii);
		};
		printf("\n");
	}
	//printf("\nOcorrências:\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8], vetor[9]);
	//printf("\nVetor:\n0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9");
	return 0;	
}
