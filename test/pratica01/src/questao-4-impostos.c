#include <stdio.h>
#include <stdlib.h>

//4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

void printHelp()
{
	printf("Uso: impostos [preço]. Decimal separado por um ponto.\nexemplo: impostos 19.99\n");
}

int main(int argc, char** argv)
{
	float preço = 0;
	const float ICMS = 0.17;
	const float COFINS = 0.076;
	const float PISPASEP = 0.0165;
	if (argc != 2)
	{
		printHelp();
		return 1;
	}
	preço = atoi(argv[1]);
	float imposto_final = (1 + ICMS + COFINS + PISPASEP) * preço;
	printf("O imposto sobre o produto de preço %g é %g\n", preço, imposto_final);
	return 0;
}
