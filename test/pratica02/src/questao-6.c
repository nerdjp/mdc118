#include <stdio.h>

int main()
{
	float valor_compra = 0;
	float ano_fab = 0;
	float ano_dep = 0;
	printf("Insira o valor de compra: ");
	scanf("%g", &valor_compra);
	printf("Insira o ano de fabricação: ");
	scanf("%g", &ano_fab);
	printf("Insira o ano de depreciação: ");
	scanf("%g", &ano_dep);
	printf("\n O valor de depreciação é %g\n", (ano_dep - ano_fab) * 0.01 * valor_compra );
	return 0;
}
