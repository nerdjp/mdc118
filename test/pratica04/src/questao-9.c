#include <stdio.h>

typedef struct Aluno {
	long matricula;
	char email[256];
} Aluno;

int main() {
	Aluno alunos[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira a matricula do %dº aluno: ", i + 1);
		scanf(" %ld", &alunos[i].matricula);
		printf("Insira o email do %dº aluno: ", i + 1);
		scanf(" %255[^\n]s", alunos[i].email);
	}
	long matricula = 0;
	printf("Insira a matricula do ajudo cujo email deseja procurar: ");
	scanf("%ld", &matricula);
	for(int i = 0; i < 10; i++) {
		if (alunos[i].matricula == matricula) {
			printf("O email do aluno com a matricula %ld é %s\n", alunos[i].matricula, alunos[i].email);
		}
	}
}
