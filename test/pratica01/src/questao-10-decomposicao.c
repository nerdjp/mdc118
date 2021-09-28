#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

void printHelp()
{
	printf("Uso: decomposicao [valor].\nO valor deve ser um numero inteiro.\n exemplo: decomposicao 5637\n");
}

int main(int argc, char** argv)
{

	int num_entrada = 0;
	if (argc != 2)
	{
		printHelp();
		return 1;
	}
	num_entrada = atoi(argv[1]);
	int num_inicial = num_entrada;

	int milhar = floor(num_entrada / 1000);
	num_entrada -= milhar * 1000;

	int centena = floor(num_entrada / 100);
	num_entrada -= centena * 100;

	int dezena = floor(num_entrada / 10);
	num_entrada -= dezena * 10;

	int unidade = num_entrada;

	printf("O numero %d é composto por %d milhares, %d centenas, %d dezenas e %d unidades\n", num_inicial, milhar, centena, dezena, unidade);
	return 0;
}
