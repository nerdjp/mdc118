#include <stdio.h>

int main()
{
	float peso = 0;
	float altura = 0;
	printf("Insira o peso, em kilogramas, da pessoa a calcular: ");
	scanf("%g", &peso);
	printf("Insira altura, em metros, da pessoa a calcular: ");
	scanf("%g", &altura);
	printf("\nO IMC da pessoa com %gkg e %gm é %g\n", peso, altura, peso / (altura * altura));
	return 0;
}
