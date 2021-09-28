#include <stdio.h>
#include <stdlib.h>

// 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

void printHelp()
{
	printf("Uso: idade [anos] [meses] [dias] [.\n exemplo: idade 19 0 4\n");
}

int main(int argc, char** argv)
{
	int anos = 0;
	int meses = 0;
	int dias = 0;
	if (argc != 4)
	{
		printHelp();
		return 1;
	}
	anos = atof(argv[1]);
	meses = atof(argv[2]);
	dias = atof(argv[3]);

	int dias_final = 0;
	dias_final += anos * 365;
	dias_final += meses * 30;
	dias_final += dias;

	printf("Uma pessoa com a idade de %d anos, %d meses e %d dias, possui %d dias de vida\n", anos, meses, dias, dias_final);
	return 0;
}
