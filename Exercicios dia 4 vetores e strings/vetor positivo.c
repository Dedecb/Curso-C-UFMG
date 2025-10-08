//Leia um vetor de inteiros de tamanho 8. Em seguida, imprima apenas os valores
//positivos armazenados no vetor.

#include <stdio.h>

int main() {
    int vetor[8];

    // Leitura dos 8 números inteiros
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Impressão dos valores positivos
    printf("Os numeros positivos sao:\n");
    for (int i = 0; i < 8; i++) {
        if (vetor[i] > 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}