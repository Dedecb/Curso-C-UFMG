//Faça um programa que leia o valor de um lado de um quadrado e imprima na
//tela a área e o perímetro com precisão de uma casa decimal:

#include <stdio.h>

int main() {
    float lado, area, perimetro;
    printf("Digite o valor do lado do quadrado:");
    scanf("%f", &lado);
    area = lado * lado;
    perimetro = 4 * lado;
    printf("Area = %.1f\n", area);
    printf("Perimetro = %.1f\n", perimetro);
    return 0;
}