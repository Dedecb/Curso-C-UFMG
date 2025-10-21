//Escreva um programa que lê um vetor de inteiros de tamanho 10 e imprime o
//maior e o menor elemento neste vetor.

#include <stdio.h>

int main() {
    int vetor[10];
    int maior, menor;

    // Leitura dos 10 números inteiros
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    maior = menor = vetor[0];

    // Encontra o maior e o menor elemento no vetor
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Impressão do maior e do menor elemento
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}