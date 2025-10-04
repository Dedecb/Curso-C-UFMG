//Leia o valor de dois números inteiros e imprima a divisão deles com precisão
//de uma casa decimal. Obs.: tente observar o que acontece quando a divisão
//não é exata. Pense em como transformar os números do tipo inteiro no tipo
//float.

#include <stdio.h> 

int main() {
    int a, b;
    float divisao;
    printf("Digite dois numeros inteiros para divisao:");
    scanf("%d %d", &a, &b);
    divisao = (float)a / (float)b;
    printf("DIVISAO = %.1f\n", divisao);
    return 0;
}   