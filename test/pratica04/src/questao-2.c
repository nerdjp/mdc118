#include <stdio.h>

int main() {
	float nota[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira a nota do %dº aluno: ", i + 1);
		scanf("%f", &nota[i]);
	}

	float media;

	for(int i = 0; i < 10; i++) {
		media += nota[i];
	}
	media = media/10;

	printf("A media da turma é %g\n", media);

	for(int i = 0; i < 10; i++) {
		if(nota[i] > media) {
			printf("O aluno nº %d está acima da media.\n", i + 1);
		} else {
			printf("O aluno nº %d está abaixo da media.\n", i + 1);
		}
	}
	return 0;
}
