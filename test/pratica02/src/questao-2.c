#include <stdio.h>

int main()
{
	int n1, n2;
	printf("Insira o primeiro número: ");
	scanf("%d", &n1);
	printf("Insira o segundo número: ");
	scanf("%d", &n2);

	printf("\nEntre os numeros %d e %d, o quociente da divisão é %d e o resto é %d\n", n1, n2, (n1/n2), (n1%n2));
	return 0;
}
