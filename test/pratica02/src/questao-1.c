#include <stdio.h>

int main() 
{
	float n1, n2, n3;
	printf("Insira o primeiro número: ");
	scanf("%g", &n1);
	printf("Insira o segundo número: ");
	scanf("%g", &n2);
	printf("Insira o terceiro número: ");
	scanf("%g", &n3);

	printf("\nA media entre %g, %g e %g é %g\n", n1, n2, n3, (n1 + n2 + n3)/3);
	return 0;
}
