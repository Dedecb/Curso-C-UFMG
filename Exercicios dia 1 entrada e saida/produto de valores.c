//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença
//do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA
//= (A * B - C * D).

#include <stdio.h>  

int main() {
    int a, b, c, d, diferenca;
    printf("Digite quatro numeros inteiros para calcular a diferenca:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    diferenca = (a * b - c * d);
    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}