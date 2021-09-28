#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

void printHelp()
{
	printf("Uso: bytes [valor].\nexemplo: bytes 4\n");
}

int main(int argc, char** argv)
{
	float gigabytes = 0;
	if (argc != 2)
	{
		printHelp();
		return 1;
	}
	gigabytes = atof(argv[1]);
	unsigned long int bytes = 0;

	bytes = gigabytes * pow(1024, 3);

	printf("%g gigabytes em bytes é %lu\n", gigabytes, bytes);
	return 0;
}
