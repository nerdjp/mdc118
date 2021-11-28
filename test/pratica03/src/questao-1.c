#include <stdio.h>

int main() {
	int num;
	printf("Insira o número: ");
	scanf("%d", &num);

	if(num % 2 == 0)
		printf("É par\n");
	else
		printf("É impar\n");
}
