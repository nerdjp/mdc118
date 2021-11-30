#include <stdio.h>

int emBinario(int decimal) {
	if(decimal < 2)
		return decimal;
	return (emBinario(decimal / 2) * 10 + decimal % 2);
}

int main() {
	int num;
	printf("Insira o número decimal: ");
	scanf("%d", &num);

	if(num > 1024) {
		printf("Numero muito grande.\n");
		return 0;
	}

	printf("%d em binário é %d\n", num, emBinario(num));
}
