#include <stdio.h>

int main()
{
	int num;
	printf("Insira o número que deseja transformar em ASCII: ");
	scanf("%d", &num);

	printf("\nO valor de %d em ASCII é '%c'.\n", num, num);
	return 0;
}
