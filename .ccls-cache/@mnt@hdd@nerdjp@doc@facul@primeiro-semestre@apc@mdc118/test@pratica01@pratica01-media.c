#include <stdio.h>
#include <stdlib.h>

//1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

int main(int argc, char** argv)
{
	//if(argv[0] < 0 || argv[
	float a1;
	float a2;
	if (argc != 3)
	{
		printf("Uso: pratica01-media [nota 1] [nota 2]\n exemplo: pratica01-media 5.3 6.0\n");
		return 1;
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	if(a1 < 0 || a1 > 10 || a2 < 0 || a2 > 10)
	{
		printf("Uso: pratica01-media [nota 1] [nota 2]\n exemplo: pratica01-media 5.3 6.0\n");
		return 1;
	}
	float media = ((0.4 * a1) + (0.6 * a2));
	printf("Media: %g\n", media);
}
