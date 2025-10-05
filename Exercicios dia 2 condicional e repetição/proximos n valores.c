//Escreva um programa que leia um número inteiro n. Seu programa deve
//então ler os próximo n valores inteiros digitados pelo usuário e indicar
//quantos deles são pares, quantos são ímpares, quantos são positivos e
//quantos são negativos. Este problema é uma adaptação do exercício 1066 do
//beecrowd.

#include <stdio.h>

int main() {
    int n, i;
    int numero;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    printf("Digite a quantidade de numeros que voce vai inserir: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}