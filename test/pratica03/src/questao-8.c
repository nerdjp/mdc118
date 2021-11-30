#include <stdio.h>

//Factorial também acontece de ser um grande exemplo pra recusion em programação :P
int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	int num;
	printf("Insira o número: ");
	scanf("%d", &num);
	 printf("O numero em factorial é %d", factorial(num));
}
