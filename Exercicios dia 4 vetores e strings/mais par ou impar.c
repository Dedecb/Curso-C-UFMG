//Escreva um programa que lê um vetor de inteiros de tamanho 8 e determina se o
//vetor tem mais números pares ou ímpares. Se houver mais pares do que ímpares,
//imprima “Mais pares!”. Se houver mais ímpares, imprima “Mais impares!”. Se o
//número de pares e ímpares for o mesmo, imprima “Igual!”.

#include <stdio.h>

int main() {
    int vetor[8];
    int countPares = 0;
    int countImpares = 0;

    // Leitura dos 8 números inteiros
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Contagem de pares e ímpares
    for (int i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        } else {
            countImpares++;
        }
    }

    // Determinação e impressão do resultado
    if (countPares > countImpares) {
        printf("Mais pares!\n");
    } else if (countImpares > countPares) {
        printf("Mais impares!\n");
    } else {
        printf("Igual!\n");
    }

    return 0;
}