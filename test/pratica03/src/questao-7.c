#include <stdio.h>

//Respondi assim pois fibonnaci é o exemplo classico de recursion em programação
int fibonnaci(int n) {
	switch(n) {
		case 0: return 0; break;
		case 1: return 1; break;
		default: return (fibonnaci(n - 1) + fibonnaci(n - 2));
	}
}

int main() {
	for (int i = 1; i <= 10; i++)
		printf("%d\n", fibonnaci(i));
}
