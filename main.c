#include <stdio.h>
#include <locale.h>

void copiarS(char destino[], const char origem[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}

int main() {
	setlocale (LC_ALL,"Portuguese");
    char stringA[] = "isso vai aparecer na string A e B.";
    char SvetorB[50]; 

    copiarS(SvetorB, stringA, sizeof(stringA));

    printf("String A: %s\n", stringA);
    printf("String / Vetor B: %s\n", SvetorB);

    return 0;
}

