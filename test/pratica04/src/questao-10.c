#include <stdio.h>

enum mes {
	janeiro = 1,
	fevereiro,
	março,
	abril,
	maio,
	junho,
	julho,
	agosto,
	setembro,
	outubro,
	novembro,
	dezembro
};
int main() {
	int nMes = 0;

	printf("Insira o numero do mês: ");
	scanf("%d", &nMes);

	enum mes meses = nMes;

	if(nMes < 1 || nMes > 12) {
		printf("Numero de mês invalido\n");
		return 0;
	}

	switch(meses) {
		case 1:
			printf("O mês é Janeiro\n");
			break;
		case 2:
			printf("O mês é Fevereiro\n");
			break;
		case 3:
			printf("O mês é Março\n");
			break;
		case 4:
			printf("O mês é Abril\n");
			break;
		case 5:
			printf("O mês é Maio\n");
			break;
		case 6:
			printf("O mês é Junho\n");
			break;
		case 7:
			printf("O mês é Julho\n");
			break;
		case 8:
			printf("O mês é Agosto\n");
			break;
		case 9:
			printf("O mês é Setembro\n");
			break;
		case 10:
			printf("O mês é Outubro\n");
			break;
		case 11:
			printf("O mês é Novembro\n");
			break;
		case 12:
			printf("O mês é Dezembro\n");
			break;
		default:
			printf("Numero de mês invalido\n");
			break;
	}
	
	return 0;
}
