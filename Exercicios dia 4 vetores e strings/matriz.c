//Escreva um programa que lê uma matriz de inteiros quadrada de ordem 3 (ou
//seja, 3 linhas e 3 colunas) e a imprima na linha de comando.

#include <stdio.h>

int main() {
    int matriz[3][3];

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3 (inteiros):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão da matriz
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}