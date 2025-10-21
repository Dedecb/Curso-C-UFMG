//Escreva um programa que preencha um vetor de inteiros com os 20 primeiros
//números da Sequência de Fibonacci e, depois disso, imprima os valores na tela. O
//número n da Sequência de Fibonacci (𝐹 ) é dado pelas fórmulas abaixo:
//𝑛𝐹1 = 0
//𝐹2 = 1
//𝐹 com e 𝑛 = 𝐹𝑛−1 + 𝐹𝑛−2, 𝑛 ≠ 1 𝑛 ≠ 2

#include <stdio.h>

int main() {
    int fibonacci[20];

    // Inicializa os dois primeiros elementos da sequência
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // Preenche o vetor com os 20 primeiros números da Sequência de Fibonacci
    for (int i = 2; i < 20; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Imprime os valores da Sequência de Fibonacci
    printf("Os 20 primeiros numeros da Sequencia de Fibonacci sao:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}