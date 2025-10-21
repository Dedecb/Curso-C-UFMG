//Escreva um programa que lê as temperaturas dos últimos 10 dias e as armazene
//em um vetor de números reais. O programa deve calcular a média das temperaturas
//no vetor. A saída deve ser impressa com duas casas decimais e com o símbolo de
//graus Celsius (ºC).

#include <stdio.h>

int main() {
    float temperaturas[10];
    float soma = 0.0;
    float media;

    // Leitura das temperaturas dos últimos 10 dias
    printf("Digite as temperaturas dos ultimos 10 dias:\n");
    for (int i = 0; i < 10; i++) {
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    // Cálculo da média das temperaturas
    media = soma / 10.0;

    // Impressão da média com duas casas decimais e símbolo de graus Celsius
    printf("Media das temperaturas: %.2f ºC\n", media);

    return 0;
}