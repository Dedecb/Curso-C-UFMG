//Escreva um programa que lê dois números inteiros da entrada do usuário e
//imprime qual deles é o maior. Se forem iguais, você deve imprimir essa
//informação.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os dois números são iguais: %d\n", num1);
    }

    return 0;
}