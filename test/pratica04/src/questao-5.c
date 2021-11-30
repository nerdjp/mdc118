#include <stdio.h>

int main() {
	char string[256];
	printf("Insira uma frase: ");
	scanf("%255[^\n]s", string);

	printf("A frase %s em maiusculo é: ", string);

	for(int i = 0; string[i] != '\0'; i++) {
		if(string[i] >= 97 && string[i] <= 122) {
			printf("%c", string[i] - 32);
		} else {
			printf("%c", string[i]);
		}
	}
	printf("\nE em minusculo é: ");
	for(int i = 0; string[i] != '\0'; i++) {
		if(string[i] >= 65 && string[i] <= 90) {
			printf("%c", string[i] + 32);
		} else {
			printf("%c", string[i]);
		}
	}
}
