#include <stdio.h>
#include <stdlib.h>

//4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

void printHelp()
{
	printf("Uso: pizza [raio]. Onde raio é um número inteiro.\nexemplo: pizza 5\n");
}

int main(int argc, char** argv)
{
	//if(argv[0] < 0 || argv[
	int raio;
	const float pi = 3.1416;
	if (argc != 2)
	{
		printHelp();
		return 1;
	}
	raio = atoi(argv[1]);
	float perimetro = 2 * pi * raio;
	printf("o raio da pizza de raio %d é %g\n", raio, perimetro);
}
