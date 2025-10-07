//Escreva um programa lê um número inteiro N. Para cada número de 1 até N, o
//seu programa deve imprimir:
//● “FizzBuzz”, se o número for múltiplo de 3 e 5
//● “Fizz”, se o número for múltiplo de 3
//● “Buzz”, se o número for múltiplo de 5
//● O próprio número, caso ele não se enquadre em nenhuma das condições
//anteriores.

#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}