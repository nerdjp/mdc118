#include <stdio.h>

int main()
{
	int n;
	printf("Insira o número desejado: ");
	scanf("%d", &n);
	printf("\n");

	for(int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
