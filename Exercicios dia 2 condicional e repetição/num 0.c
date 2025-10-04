//Escreva um programa que lê um número da entrada do usuário enquanto o
//valor digitado for diferente de 0. Ou seja, seu programa deve continuar
//executando e lendo números da entrada até que o usuário digite o número 0.

#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
    } while (numero != 0);

    printf("Programa encerrado.\n");
    return 0;
}