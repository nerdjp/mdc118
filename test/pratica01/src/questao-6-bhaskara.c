#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

void printHelp()
{
	printf("Uso: bhaskara [a] [b] [c].\nexemplo: bhaskara 4 10 6\n");
}

int main(int argc, char** argv)
{
	float a = 0;
	float b = 0;
	float c = 0;
	if (argc != 4)
	{
		printHelp();
		return 1;
	}
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	float delta = (b * b) - (4 * (a * c));

	if(delta < 0) {
		printf("A raiz da equação %gx² + %gx + %g é impossivel pois delta é negativo.\n", a, b, c);
		return 1;
	}

	float raiz_delta = sqrt(delta);

	float raiz_positiva = (-b + raiz_delta) / (2 * a);
	float raiz_negativa = (-b - raiz_delta) / (2 * a);

	printf("A raiz da equação %gx² + %gx + %g é:\nPositiva: %g\nNegativa: %g\n", a, b, c, raiz_positiva, raiz_negativa);
	return 0;
}
