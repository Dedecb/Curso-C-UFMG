// Escreva um programa que leia um inteiro N da entrada. Ele deve então ler os
//próximos N valores de ponto flutuante digitados pelo usuário e calcular a média de
//aproveitamento, que é dada pela fórmula:
//MA = (N1 * 1 + N2 * 2 + N3 * 3 + N4 * 4 … Nn * N) / Somatório dos pesos
//Seu programa deve, então, informar o valor da média (com 2 casas decimais) e o
//conceito final de acordo com a relação:
//● Média maior ou igual a 9: A
//● Média maior ou igual a 7.5 e menor que 9: B
//● Média maior ou igual a 6 e menor que 7.5: C
//● Média maior ou igual a 4 e menor que 6: D
//● Média menor que 4: E

#include <stdio.h>

int main() {
    int N;
    float nota, somaNotas = 0.0, mediaAproveitamento;
    int somaPesos = 0;

    printf("Digite o numero de notas (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        somaNotas += nota * i; // Multiplica a nota pelo peso (i)
        somaPesos += i; // Soma os pesos
    }

    if (somaPesos == 0) {
        printf("Nao e possivel calcular a media.\n");
        return 1;
    }

    mediaAproveitamento = somaNotas / somaPesos;

    printf("Media de aproveitamento: %.2f\n", mediaAproveitamento);

    if (mediaAproveitamento >= 9.0) {
        printf("Conceito: A\n");
    } else if (mediaAproveitamento >= 7.5) {
        printf("Conceito: B\n");
    } else if (mediaAproveitamento >= 6.0) {
        printf("Conceito: C\n");
    } else if (mediaAproveitamento >= 4.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}