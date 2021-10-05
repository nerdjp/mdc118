#include <stdio.h>

int main()
{
	float tempC = 0;
	printf("Insira o valor em graus Celsius: ");
	scanf("%g", &tempC);
	printf("\nO valor de %gºC em ºF é %gºF\n", tempC, tempC * 9/5 + 32);
	return 0;
}
