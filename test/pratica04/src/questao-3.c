#include <stdio.h>

int main() {
	int quantidade[10];
	float preco[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira a quantidade do %dª item: ", i + 1);
		scanf("%d", &quantidade[i]);
		printf("Insira o preço do %dª item: ", i + 1);
		scanf("%f", &preco[i]);
	}
	float valor_total = 0;
	float valor_item = 0;
	for(int i = 0; i < 10; i++) {
		valor_item = preco[i] * quantidade[i];
		valor_total += valor_item;
		printf("O preço total do %d item é %g\n", i + 1, valor_item);
	}

	printf("O preço total da compra é %g\n", valor_total);
	return 0;
}
