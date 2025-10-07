//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis
//(cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100,
//50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
//Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo
//necessárias, conforme o exemplo fornecido abaixo.

#include <stdio.h>

int main() {
    int valor, originalValor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    originalValor = valor;

    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    notas2 = valor / 2;
    valor %= 2;

    notas1 = valor; // O que resta são as notas de 1

    printf("%d\n", originalValor);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}