//A fórmula para calcular a área de uma circunferência é: área = π . 𝑟𝑎𝑖𝑜 .
//2. Considerando para este problema que π = 3.14159. Efetue o cálculo da área,
//elevando o valor de raio ao quadrado e multip

#include <stdio.h>

int main() {
    float raio, area;
    const float pi = 3.14159;
    printf("Digite o valor do raio do circulo:");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A= %.4f\n", area);
    return 0;
}