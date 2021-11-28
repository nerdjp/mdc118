#include <stdio.h>

int main() {
	float valorLido;
	printf("Insira o valor bruto: ");
	scanf("%f", &valorLido);

	if(valorLido <= 100.00)
		printf("O valor com imposto é %g\n", valorLido - (valorLido / 100));
	else if (valorLido > 100.00 && valorLido <= 500.00)
		printf("O valor com imposto é %g\n", valorLido - ((valorLido / 100) * 5));
	else 
		printf("O valor com imposto é %g\n", valorLido - ((valorLido / 100) * 10));
}
