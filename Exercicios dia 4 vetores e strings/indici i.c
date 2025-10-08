//Leia um vetor de inteiros de tamanho 12 e, em seguida, um valor inteiro qualquer.
//Você deve escrever um programa que busque pelo valor recebido no vetor. Se o
//valor estiver presente no índice i do vetor, imprima “Indice i”. Se o valor não estiver
//presente, imprima “Valor nao encontrado”

#include <stdio.h>

int main() {
    int vetor[12];
    int valor, encontrado = 0;

    // Leitura dos 12 números inteiros
    printf("Digite 12 numeros inteiros:\n");
    for (int i = 0; i < 12; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Leitura do valor a ser buscado
    printf("Digite um valor inteiro para buscar no vetor: ");
    scanf("%d", &valor);

    // Busca pelo valor no vetor
    for (int i = 0; i < 12; i++) {
        if (vetor[i] == valor) {
            printf("Indice %d\n", i);
            encontrado = 1;
            break; // Sai do loop após encontrar o valor
        }
    }

    // Se o valor não foi encontrado, imprime a mensagem correspondente
    if (!encontrado) {
        printf("Valor nao encontrado\n");
    }

    return 0;
}