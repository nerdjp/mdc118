#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

void printHelp()
{
	printf("Uso: altura [distancia] [ângulo].\n O ângulo deve ser menor ou igual a 45º.\n exemplo: altura \n");
}

int main(int argc, char** argv)
{
	float distancia = 0;
	float angulo = 0;
	const float pi = 3.14;
	if (argc != 3)
	{
		printHelp();
		return 1;
	}
	distancia = atof(argv[1]);
	angulo = atof(argv[2]);
	if(angulo > 45 || angulo < 0)
	{
		printHelp();
		return 1;
	}
	double altura = sin(angulo * (180 / pi)) * distancia;

	printf("A altura alcançada depois de %g metros percorridos com ângulo %g é de %g metros\n", distancia, angulo, altura);
	return 0;
}
