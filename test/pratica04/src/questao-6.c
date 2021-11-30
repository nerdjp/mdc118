#include <stdio.h>
#include <string.h>

int main() {
	char verbo[32];
	printf("Insira um verbo: ");
	scanf("%28[^\n]s", verbo);
	int final_verbo = strlen(verbo) - 1;

	if(verbo[final_verbo - 1] != 'a' && verbo[final_verbo - 1] != 'r') {
		printf("Verbo não é regular!\n");
		return 0;
	}

	for(int i = final_verbo - 1; i < final_verbo + 1; i++) {
		verbo[i] = '\0';
	}

	char resposta[32];
	
	strcpy(resposta, verbo);
	strcat(resposta, "o");
	printf("Eu %s\n", resposta);

	strcpy(resposta, verbo);
	strcat(resposta, "as");
	printf("Tu %s\n", resposta);
	
	strcpy(resposta, verbo);
	strcat(resposta, "a");
	printf("Ele %s\n", resposta);

	strcpy(resposta, verbo);
	strcat(resposta, "amos");
	printf("Nós %s\n", resposta);

	strcpy(resposta, verbo);
	strcat(resposta, "ais");
	printf("Vós %s\n", resposta);

	strcpy(resposta, verbo);
	strcat(resposta, "am");
	printf("Eles %s\n", resposta);

}
