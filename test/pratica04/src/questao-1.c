#include <stdio.h>

int main() {
	float num[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira o %dº número: ", i + 1);
		scanf("%f", &num[i]);
	}
	float num_to_find;
	printf("Insira o numero que deseja encontrar: ");
	scanf("%f", &num_to_find);
	int achou = 0;
	for(int i = 0; i < 10; i++) {
		if(num[i] == num_to_find) {
			printf("O numero %g é o %d na lista. (%d na matrix)\n", num_to_find, i + 1, i);
			achou = 1;
		}
	}
	if(achou == 0) printf("O numero %g não foi encontrado na lista\n", num_to_find);
	return 0;
}
