//Escreva um programa que inicializa um vetor de inteiros de tamanho 15
//chamado fatorial, de tal forma que fatorial[n] = 𝑛!. Depois disso, imprima os
//valores do vetor. 

#include <stdio.h>

int main() {
    int fatorial[15];

    // Inicializa o vetor de fatoriais
    fatorial[0] = 1; // 0! = 1
    for (int n = 1; n < 15; n++) {
        fatorial[n] = fatorial[n - 1] * n; // n! = (n-1)! * n
    }

    // Imprime os valores do vetor de fatoriais
    printf("Fatoriais de 0 a 14:\n");
    for (int n = 0; n < 15; n++) {
        printf("%d! = %d\n", n, fatorial[n]);
    }

    return 0;
}