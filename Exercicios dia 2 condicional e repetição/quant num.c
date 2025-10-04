//Escreva um programa que lê um valor inteiro n. Depois, ele deve ler da
//entrada do usuário n outros valores inteiros e imprimir na tela qual o maior e
//qual o menor.

#include <stdio.h>

int main() {
    int n, i;
    int numero, maior, menor;

    printf("Digite a quantidade de numeros que voce vai inserir: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade deve ser um numero positivo.\n");
        return 1;
    }

    printf("Digite o numero 1: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for (i = 2; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}