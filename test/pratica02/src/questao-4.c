#include <stdio.h>

int main()
{
	float altura = 0;
	float largura = 0;
	printf("Insira a altura do lote em metros: ");
	scanf("%g", &altura);
	printf("Insira a largura do lote em metros: ");
	scanf("%g", &largura);
	printf("\nO tamanho do lote %gx%g em hectares é %g\n", altura, largura, altura * largura * 10000 );
	return 0;
}
