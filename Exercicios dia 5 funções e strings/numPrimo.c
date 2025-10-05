//Escreva uma função que identifica se um número inteiro e positivo é primo.
//Caso seja primo, retorne 1, caso não seja, retorne 0. O menor número aceito
//no seu programa deve ser 2, caso seja qualquer outro número menor que
//este retorne -1.

#include <stdio.h>

int ehPrimo(int numero) {
    if (numero < 2) {
        return -1; // Números menores que 2 não são aceitos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo (maior ou igual a 2): ");
    scanf("%d", &numero);

    int resultado = ehPrimo(numero);
    if (resultado == 1) {
        printf("O numero %d e primo.\n", numero);
    } else if (resultado == 0) {
        printf("O numero %d nao e primo.\n", numero);
    } else {
        printf("Numero invalido. Por favor, digite um numero maior ou igual a 2.\n");
    }

    return 0;
}