#include <stdio.h>

typedef struct Data {
	int dia;
	int mes;
	int ano;
} Data;

int main() {
	Data data;
	printf("Insira o dia: ");
	scanf("%d", &data.dia);
	printf("Insira o mês: ");
	scanf("%d", &data.mes);
	printf("Insira o ano: ");
	scanf("%d", &data.ano);

	printf("A data no formato brasileiro é: %d/%d/%d\n", data.dia, data.mes, data.ano);
	printf("A data no formato americano é: %d/%d/%d\n", data.mes, data.dia, data.ano);
}
