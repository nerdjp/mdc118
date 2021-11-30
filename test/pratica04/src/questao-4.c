#include <stdio.h>

int main() {
	char matrix[6][5];
	char string[31];

	for(int i = 0; i < 32; i++) {
		string[i] = '\0';
	}

	int g = 0;
	printf("Insira a frase de até 30 caracteres: ");
	scanf("%30[^\n]s", string);
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 5; j++) {
			matrix[i][j] = string[g];
			g++;
		}
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 6; j++) {
			printf("%c ", matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
