// Escreva um programa que lê um número inteiro e imprime na tela somente se
//ele for negativo.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    }

    return 0;
}