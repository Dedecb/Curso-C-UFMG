//Escreva um programa que lê dois inteiros, 𝐴 e 𝐵, e imprima no terminal 𝐴^B.
//Obs.: Você não pode usar a função pow do math.h.

#include <stdio.h>

int main() {
    int A, B;
    long long resultado = 1; // Usar long long para evitar overflow em potências grandes

    printf("Digite dois inteiros (A e B): ");
    scanf("%d %d", &A, &B);

    if (B < 0) {
        printf("O expoente B deve ser um inteiro nao negativo.\n");
        return 1;
    }

    for (int i = 0; i < B; i++) {
        resultado *= A;
    }

    printf("%d^%d = %lld\n", A, B, resultado);
    return 0;
}