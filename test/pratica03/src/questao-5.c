#include <stdio.h>

int main() {
	int ano;
	printf("Insira um ano: ");
	scanf("%d", &ano);

	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("%d ano é bissexto\n", ano);
	} else {
		printf("%d ano não é bissexto\n", ano);
	}
}
