#include <stdio.h>

int main()
{
	float valor_horas = 0;
	float horas_trabalhadas = 0;

	printf("Insira o total de horas trabalhadas: ");
	scanf("%f",&horas_trabalhadas);
	printf("Insira o valor de cada hora trabalhada: ");
	scanf("%f",&valor_horas);

	float salario_bruto = 0;
	float salario_liquido = 0;
	float imposto = 0;

	salario_bruto = valor_horas * horas_trabalhadas;
	salario_liquido = salario_bruto * (1 - 0.25 - 0.11);
	imposto = salario_bruto - salario_liquido;
	

	printf("\nCom %g horas trabalhadas e cada hora valendo %g, o salario bruto é de %g e o salario liquido é de %g, enquanto o imposto é de %g.\n", horas_trabalhadas, valor_horas, salario_bruto, salario_liquido, imposto);
	return 0;
}
