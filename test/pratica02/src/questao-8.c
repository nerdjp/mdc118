#include <stdio.h>
#include <math.h>

int main()
{
	printf("Insira o x do primeiro ponto: ");
	float x1 = 0;
	scanf("%g", &x1);

	printf("Insira o y do primeiro ponto: ");
	float y1 = 0;
	scanf("%g", &y1);

	printf("Insira o x do segundo ponto: ");
	float x2 = 0;
	scanf("%g", &x2);

	printf("Insira o y do segundo ponto: ");
	float y2 = 0;
	scanf("%g", &y2);

	printf("\nA distancia entre (%g, %g) e (%g, %g) é %g.\n", x1, y1, x2, y2, (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))));
	return 0;
}
