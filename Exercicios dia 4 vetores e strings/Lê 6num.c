//Escreva um programa que lê 6 números inteiros, preencha um vetor de tamanho
//6 com os valores lidos e imprima o conteúdo do vetor.

#include <stdio.h>

int main() {
    int numeros[6];

    // Leitura dos 6 números inteiros
    printf("Digite 6 numeros inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Impressão do conteúdo do vetor
    printf("Os numeros digitados foram:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}