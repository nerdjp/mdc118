#include <stdio.h>
#include <stdlib.h>

//2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

void printHelp()
{
	printf("Uso: triângulo [base] [altura], onde base e altura são numeros inteiros e positivos\n exemplo: triângulo 5 6\n");
}

int main(int argc, char** argv)
{
	//if(argv[0] < 0 || argv[
	int base;
	int altura;
	if (argc != 3)
	{
		printHelp();
		return 1;
	}
	base = atoi(argv[1]);
	altura = atoi(argv[2]);
	if(base < 0 || altura < 0)
	{
		printHelp();
		return 1;
	}
	int area = (base * altura) / 2;
	printf("Area do triângulo de base %d e altura %d é %d\n", base, altura, area);
}
