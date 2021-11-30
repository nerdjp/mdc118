#include <stdio.h>

int main() {
	char letra;
	printf("Insira uma letra: ");
	scanf("%c", &letra);

	if((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)) {
		printf("%c é uma letra\n", letra);
	} else if (letra >= 48 && letra <= 57) {
		printf("%c é um numero\n", letra);
	} else {
		printf("%c é um caractere especial\n", letra);
	}
}
