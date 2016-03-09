#include <stdio.h>
#include <stdlib.h>

int* funcao(int *vetor1, int tamanho1, int *vetor2, int tamanho2){
	int *vetor3;
	int i, j;

	vetor3 = (int *) malloc((tamanho1 + tamanho2) * sizeof(int));

	for(i = 0; i < tamanho1; i++)
		vetor3[i] = vetor1[i];

	for(i; i < tamanho2 + tamanho1; i++)
		vetor3[i] = vetor2[i - tamanho2];

	return vetor3;
}

int main(){
	int vet1[3] = {12, 24, 36};
	int vet2[3] = {14, 28, 42}, i;
	int *vet3 = funcao(vet1, 3, vet2, 3);

	for(i = 0; i < 3 + 3; i++)
		printf("v3[%d] == %d\n", i, vet3[i]);
}