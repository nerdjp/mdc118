#include <stdio.h>

int main() {
	int num[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira o %dº número: ", i + 1);
		scanf("%d", &num[i]);
	}

	int menor = num[0];
	int maior = num[0];

	for(int i = 0; i < 10; i++) {
		if(num[i] < menor) {
			menor = num[i];
		}
		if(num[i] > maior) {
			maior = num[i];
		}
	}

	printf("O maior numero é %d, o menor numero é %d\n", maior, menor);
}
