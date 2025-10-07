//Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o
//valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o
//valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago. A saída
//deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de
//deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser
//apresentado com 2 casas após o ponto.

#include <stdio.h>

int main() {
    int codigo1, numeroPecas1;
    float valorUnitario1;
    int codigo2, numeroPecas2;
    float valorUnitario2;
    float total;

    printf("Digite o codigo, numero de pecas e valor unitario da peca 1: ");
    scanf("%d %d %f", &codigo1, &numeroPecas1, &valorUnitario1);

    printf("Digite o codigo, numero de pecas e valor unitario da peca 2: ");
    scanf("%d %d %f", &codigo2, &numeroPecas2, &valorUnitario2);

    total = (numeroPecas1 * valorUnitario1) + (numeroPecas2 * valorUnitario2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}