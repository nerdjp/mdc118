#include <stdio.h>
#include <stdlib.h>

//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

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
