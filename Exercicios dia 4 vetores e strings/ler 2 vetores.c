//Escreva um programa que lê dois vetores de inteiros de tamanho 8. Calcule a
//média ponderada dos elementos do segundo vetor utilizando os valores do
//primeiro vetor como pesos. Considerando que o primeiro vetor se chama pesos e o
//segundo valores, o peso do elemento valores[i] é dado por pesos[i]. A
//saída deve ser impressa com duas casas decimais.

#include <stdio.h>

int main() {
    int pesos[8];
    int valores[8];
    int somaPesos = 0;
    int somaPonderada = 0;
    float mediaPonderada;

    // Leitura do vetor de pesos
    printf("Digite os 8 pesos (inteiros):\n");
    for (int i = 0; i < 8; i++) {
        printf("Peso %d: ", i + 1);
        scanf("%d", &pesos[i]);
    }

    // Leitura do vetor de valores
    printf("Digite os 8 valores (inteiros):\n");
    for (int i = 0; i < 8; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Cálculo da soma dos pesos e da soma ponderada
    for (int i = 0; i < 8; i++) {
        somaPesos += pesos[i];
        somaPonderada += pesos[i] * valores[i];
    }

    // Cálculo da média ponderada
    if (somaPesos != 0) {
        mediaPonderada = (float)somaPonderada / somaPesos;
    } else {
        mediaPonderada = 0.0; // Evita divisão por zero
    }

    // Impressão da média ponderada com duas casas decimais
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}