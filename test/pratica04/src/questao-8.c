#include <stdio.h>

typedef struct Contato {
	char nome[256];
	long telefone;
} Contato;

int main() {
	Contato contatos[10];
	for(int i = 0; i < 10; i++) {
		printf("Insira o nome do %dº contato", i + 1);
		scanf("%255[^\n]s", contatos[i].nome);
		printf("Insira o telefone do %dº contato", i + 1);
		scanf("%ld", &contatos[i].telefone);
	}
	for(int i = 0; i < 10; i++) {
		printf("%s - (%ld)", contatos[i].nome, contatos[i].telefone);
	}
}
