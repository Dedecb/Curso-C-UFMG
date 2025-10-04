//Escreva um programa que lê um inteiro n da entrada que deve ser ímpar e
//positivo. Seu programa deve solicitar um novo número enquanto o usuário
//fornecer um valor inválido. 

#include <stdio.h>

int main() {
    int n, i, j;

    // Solicita um número ímpar e positivo
    do {
        printf("Digite um número inteiro ímpar e positivo: ");
        scanf("%d", &n);
    } while (n <= 0 || n % 2 == 0);

    // Imprime o padrão
    for (i = 1; i <= n; i += 2) {
        for (j = 1; j <= i; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}