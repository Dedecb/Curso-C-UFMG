//Escreva um programa que lê uma matriz de inteiros quadrada de ordem 3 e
//imprima a sua matriz transposta na linha de comando. A matriz transposta de uma
//matriz 𝐴 corresponde à matriz que se obtém da troca de linhas por colunas de 𝐴.

#include <stdio.h>

int main() {
    int matriz[3][3];
    int transposta[3][3];

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3 (inteiros):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da matriz transposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    // Impressão da matriz transposta
    printf("Matriz transposta 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }   
        printf("\n");
    }
    return 0;