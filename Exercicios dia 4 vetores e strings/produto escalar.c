//Escreva um programa que lê dois vetores de inteiros de tamanho 6 e calcule o
//produto escalar desses dois vetores. A fórmula para o produto escalar (𝐴 · 𝐵) de
//dois vetores, 𝐴 e 𝐵, está descrita abaixo:
//𝐴 = [𝑎1, 𝑎2, 𝑎3, .... , 𝑎𝑛]
//𝐵 = [𝑏1, 𝑏2, 𝑏3, .... , 𝑏𝑛]
//𝐴 · 𝐵 = 𝑎1𝑏1 + 𝑎2𝑏2 + 𝑎3𝑏3 + ... + 𝑎𝑛𝑏𝑛

#include <stdio.h>

int main() {
    int vetorA[6];
    int vetorB[6];
    int produtoEscalar = 0;

    // Leitura do primeiro vetor
    printf("Digite os 6 elementos do primeiro vetor (A):\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento A[%d]: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Leitura do segundo vetor
    printf("Digite os 6 elementos do segundo vetor (B):\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento B[%d]: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Cálculo do produto escalar
    for (int i = 0; i < 6; i++) {
        produtoEscalar += vetorA[i] * vetorB[i];
    }

    // Impressão do resultado
    printf("Produto escalar dos vetores A e B: %d\n", produtoEscalar);

    return 0;
}