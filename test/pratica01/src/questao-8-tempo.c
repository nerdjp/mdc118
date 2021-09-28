#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

void printHelp()
{
	printf("Uso: tempo [segundos].\n exemplo: tempo 6000\n");
}

int main(int argc, char** argv)
{
	int segundos = 0;
	if (argc != 2)
	{
		printHelp();
		return 1;
	}
	segundos = atof(argv[1]);

	int segundos_em_horas = 60 * 60;
	int segundos_em_minutos = 60;
	int segundos_inicial = segundos;
	int horas = floor(segundos / segundos_em_horas);
	segundos -= horas * segundos_em_horas;
	int minutos = floor(segundos / segundos_em_minutos);
	segundos -= minutos * segundos_em_minutos;

	printf("%d segundos são %d horas, %d minutos, %d segundos.\n", segundos_inicial, horas, minutos, segundos);
	return 0;
}
