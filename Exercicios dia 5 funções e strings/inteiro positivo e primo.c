//Escreva uma função que identifica se um número inteiro e positivo é primo.
//Caso seja primo, retorne 1, caso não seja, retorne 0. O menor número aceito
//no seu programa deve ser 2, caso seja qualquer outro número menor que
//este retorne -1.

#include <stdio.h>

// Função que verifica se um número é primo
int ehPrimo(int n) {
    if (n < 2) {
        return -1; // Números menores que 2 não são válidos
    }

    // Verifica divisores de 2 até n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    resultado = ehPrimo(numero);

    if (resultado == 1)
        printf("O numero %d eh primo.\n", numero);
    else if (resultado == 0)
        printf("O numero %d nao eh primo.\n", numero);
    else
        printf("Numero invalido! Deve ser maior ou igual a 2.\n");

    return 0;
}
